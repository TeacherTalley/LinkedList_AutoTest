#!/bin/bash
#--------------------------------------------------------------------------
# File: AutoTest_all.sh
# Programmer: Michelle Talley
# Copyright 2024 Michelle Talley University of Central Arkansas
#--------------------------------------------------------------------------
repo=LinkedList_AutoTest
echo "#################### START: AutoTest Setup ##################################"
echo " To be consistent with the grading environment, assume we are starting out "
echo " in the source directory (i.e., the parent of the AutoTest directory)."
echo " You will get a cd error if you execute directly from the AutoTest directory."
echo "#############################################################################"
cd $repo
echo
echo "#################### START: AutoTest Results #####################"
./AutoTest_Style.sh $repo main.cpp LinkedList.h
echo
cd build
../AutoTest_OutputTest.sh $repo/build
echo
echo "--- Unit testing (googletest - all tests at once) ---"
ctest
echo
# Note: GitHub Classroom auto-grading detects non-zero exit codes as errors and reports.
# As a result, AutoTest_gtests can be run directly in the auto-grading environment.
# The AutoTest_single_gtest script runs the individual tests a nicer error message for
# use when testing locally (i.e., in a shell).
#
# GitHub Classroom auto-grading runs the following commands from the current
# directory of the project being tested.  To similate that here, we need to
# change to the project directory before running the tests.
#
cd ../..
echo "--- Unit testing (single test at a time) ---"
# Note: The following commands should be exactly the same as specified in classroom.yml
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Empty
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Empty
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Size
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushBackAndBack
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopBack
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopFront
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushFrontAndFront
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Insert
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Erase
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.FrontException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.BackException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.InsertException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopBackException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopFrontException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.EraseException
./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Print

echo
echo "#################### END: AutoTest Results   #####################"
echo
