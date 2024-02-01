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

Under the autograding setup on Git Hub Classroom,
see Excel spreadsheet AutoTest_setup.xlsx.

---------------------------------------
Leave these here for now, but remove.

Test: 
- Name: AutoTest Setup - Install test code, copy student source, build student and test code
- Setup: git clone https://github.com/TeacherTalley/LinkedList_AutoTest.git
- Run: cd LinkedList_AutoTest && ./AutoTest_setup.sh
- Points: 0

Test:
- Name: Main Output - Run student main and compare output to test output
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_OutputTest.sh
- Points: 5

Test:
- Name: Coding Style - Run cpplint on student code
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_Style.sh
- Points: 5

Test:
- Name: Empty
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Empty
- Points: 1

Test:
- Name: Size
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Size
- Points: 1

Test:
- Name: PushBackAndBack
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushBackAndBack
- Points: 15

Test:
- Name: PopBack
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopBack
- Points: 10

Test:
- Name: PopFront
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopFront
- Points: 10

Test:
- Name: PushFrontAndFront
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PushFrontAndFront
- Points: 15

Test:
- Name: Insert
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Insert
- Points: 20

Test:
- Name: Erase
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Erase
- Points: 1

Test:
- Name: FrontException
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.FrontException
- Points: 1

Test:
- Name: BackException
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.FrontException
- Points: 1

Test:
- Name: PopBackException
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopBackException
- Points: 5

Test:
- Name: PopFrontException
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopFrontException
- Points: 5

Test:
- Name: InsertException
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.PopBackException
- Points: 5

Test:
- Name: Print
- Setup: 
- Run: ./LinkedList_AutoTest/AutoTest_gtest.sh LinkedListTest.Print
- Points: 0