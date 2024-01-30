# LinkedList_AutoTest
LinkedList Auto Testing Suite

This repository contains the auto test suite for the LinkedList test program
using the GitHub Classroom autograding capabilities.

The strategy is to install this repository into the student's submitted repository for testing.
To prevent overrides of the code by students, the **LinkedList** repository should have a
**.gitignore** file that includes the pattern "*AutoTest*", but the **.gitignore** file for
this repository (**LinkedList_AutoTest**) should **not** contain that pattern.

To configure the autograding, take the following steps in the **LinkedList* repository
(**NOT** the **LinkedList_AutoTest** repository).

**Make sure to create AutoTest_main_output.txt from the current main**

Under the autograding setup:

Test 1: 
- Name: AutoTest Setup - Install test code, copy student source, build student and test code
- Setup: git clone https://github.com/TeacherTalley/LinkedList_AutoTest.git
- Run: cd LinkedList_AutoTest && ./AutoTest_setup.sh
- Points: 0

Test 2:
- Name: Main Output Test - Run student main and compare output to test output
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_OutputTest.sh
- Points: 5

Test 3:
- Name: Coding Style Test - Run cpplint on student code
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_Style.sh
- Points: 5

Test 4:
- Name: Empty Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Empty
- Points: 1

Test 5:
- Name: Size Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Size
- Points: 1

Test 6:
- Name: PushBackAndBack Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushBackAndBack
- Points: 17

Test 7:
- Name: PopBack Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopFront
- Points: 17

Test 8:
- Name: PushFrontAndFront Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushFrontAndFront
- Points: 17

Test 9:
- Name: Insert Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Insert
- Points: 17

Test 10:
- Name: Erase Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Erase
- Points: 1

Test 11:
- Name: FrontException Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.FrontException
- Points: 1

Test 12:
- Name: BackException Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.FrontException
- Points: 1

Test 13:
- Name: Print Test
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Print
- Points: 0