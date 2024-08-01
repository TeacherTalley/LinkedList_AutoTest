#!/bin/bash
repo=LinkedList_AutoTest
echo "#################### START: AutoTest Setup ##################################"
echo " To be consistent with the grading environment, assume we are starting out "
echo " in the source directory (i.e., the parent of the AutoTest directory)."
echo " You will get a cd error if you execute directly from the AutoTest directory."
echo "#############################################################################"
cd $repo
echo
echo "#################### START: AutoTest Results #####################"
echo "--- Checking code format (cpplint) ---"
./AutoTest_Style.sh
echo
echo "--- Checking main output (diff) ---"
cd build
../AutoTest_OutputTest.sh
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
