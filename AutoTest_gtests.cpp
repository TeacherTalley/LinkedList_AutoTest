/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Michelle Talley University of Central Arkansas
*
* @author: Michelle Talley
* @course: Data Structures (CSCI 2320)
*
* @file AutoTest_gtests.cpp
* @brief Google Test for Stack lab.
-----------------------------------------------------------------------
*/

#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "LinkedList.h"

// Test fixture for LinkedList class
class LinkedListTest : public ::testing::Test
{
protected:
    LinkedList<int> list;

    void SetUp() override
    {
        // Add some elements to the list for testing
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
    }
};

// Test case for empty() method
TEST_F(LinkedListTest, Empty)
{
    EXPECT_FALSE(list.empty());
    list.clear();
    EXPECT_TRUE(list.empty());
}

// Test case for size() method
TEST_F(LinkedListTest, Size)
{
    EXPECT_EQ(list.size(), 3);
    list.pop_back();
    EXPECT_EQ(list.size(), 2);
    list.clear();
    EXPECT_EQ(list.size(), 0);
}

// Test case for push_back() and back() methods
TEST_F(LinkedListTest, PushBackAndBack)
{
    list.push_back(4);
    EXPECT_EQ(list.back(), 4);
}

// Test case for pop_back() method
TEST_F(LinkedListTest, PopBack)
{
    list.pop_back();
    EXPECT_EQ(list.back(), 2);
}

// Test case for pop_front() method
TEST_F(LinkedListTest, PopFront)
{
    list.pop_front();
    EXPECT_EQ(list.front(), 2);
}

// Test case for push_front() and front() methods
TEST_F(LinkedListTest, PushFrontAndFront)
{
    list.push_front(0);
    EXPECT_EQ(list.front(), 0);
}

// Test case for insert() method
TEST_F(LinkedListTest, Insert)
{
    list.insert(1, 5);
    EXPECT_EQ(list.size(), 4);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for erase() method
TEST_F(LinkedListTest, Erase)
{
    list.erase(1);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for front() method exception
TEST_F(LinkedListTest, FrontException)
{
    list.clear();
    EXPECT_THROW(list.front(), std::out_of_range);
}

// Test case for back() method exception
TEST_F(LinkedListTest, BackException)
{
    list.clear();
    EXPECT_THROW(list.back(), std::out_of_range);
}

// Test case for print() method
TEST_F(LinkedListTest, Print)
{
    testing::internal::CaptureStdout();
    list.print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1 2 3\n");
}

