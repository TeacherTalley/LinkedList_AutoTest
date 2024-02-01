#!/bin/bash
echo
echo "#################### START: AutoTest Results #####################"
srcfiles="main.cpp LinkedList.h"
echo "Source files:" $srcfiles
echo
echo "--- Checking code format (cpplint) ---"
filters=-legal/copyright,-whitespace/braces,-runtime/explicit,-whitespace/newline,-whitespace/end_of_line
cpplint --filter=$filters $srcfiles
echo
cd build
echo
echo "--- Checking main output (diff) ---"
./main > test_main_output.txt
diff ../AutoTest_main_output.txt test_main_output.txt
echo
echo "--- Unit testing (googletest - all tests at once) ---"
ctest
echo
echo "--- Unit testing (single test at a time) ---"
./AutoTest_gtests --gtest_filter=LinkedListTest.Empty
./AutoTest_gtests --gtest_filter=LinkedListTest.Size
./AutoTest_gtests --gtest_filter=LinkedListTest.PushBackandBack
./AutoTest_gtests --gtest_filter=LinkedListTest.PopBack
./AutoTest_gtests --gtest_filter=LinkedListTest.PopFront
./AutoTest_gtests --gtest_filter=LinkedListTest.PushFrontandFront
./AutoTest_gtests --gtest_filter=LinkedListTest.Insert
./AutoTest_gtests --gtest_filter=LinkedListTest.Erase
./AutoTest_gtests --gtest_filter=LinkedListTest.FrontException
./AutoTest_gtests --gtest_filter=LinkedListTest.BackException
./AutoTest_gtests --gtest_filter=LinkedListTest.InsertException
./AutoTest_gtests --gtest_filter=LinkedListTest.PopBackException
./AutoTest_gtests --gtest_filter=LinkedListTest.PopFrontException
./AutoTest_gtests --gtest_filter=LinkedListTest.Print

echo
cd ..
echo "#################### END: AutoTest Results   #####################"
echo
