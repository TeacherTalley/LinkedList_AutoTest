/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Michelle Talley University of Central Arkansas
*
* @author: Michelle Talley
* @course: Data Structures (CSCI 2320)
*
* @file AutoTest_gtests.cpp
* @brief Google Test for LinkedList lab.
-----------------------------------------------------------------------
*/

#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "LinkedList.h"

#define GTEST_COUT std::cerr << "[          ] [ INFO ]"

// Test fixture for LinkedList class
class LinkedListTest : public ::testing::Test
{
protected:
    LinkedList<int> list;
    LinkedList<std::string> stringList;

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
    std::string message = " ";

    message = " Size on a list with elements";
    GTEST_COUT << message << std::endl;
    EXPECT_EQ(list.size(), 3);
    list.pop_back();
    EXPECT_EQ(list.size(), 2);
    list.pop_back();
    EXPECT_EQ(list.size(), 1);

    message = " Size on an empty list";
    GTEST_COUT << message << std::endl;
    list.pop_back();
    EXPECT_EQ(list.size(), 0);
    list.clear();
    EXPECT_EQ(list.size(), 0);
}

// Test case for push_back() and back() methods
TEST_F(LinkedListTest, PushBackAndBack)
{
    std::string message = " ";

    list.clear();

    message = " PushBack on an empty list";
    GTEST_COUT << message << std::endl;
    list.push_back(1);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 1);

    message = " PushBack on list with 1 element";
    GTEST_COUT << message << std::endl;
    list.push_back(2);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 2);

    message = " PushBack on list with 2 elements";
    GTEST_COUT << message << std::endl;
    list.push_back(3);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for pop_back() method
TEST_F(LinkedListTest, PopBack)
{
    std::string message = " ";

    message = " PopBack on a list with 3 elements";
    GTEST_COUT << message << std::endl;
    list.pop_back();
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 2);

    message = " PopBack on a list with 2 elements";
    GTEST_COUT << message << std::endl;
    list.pop_back();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 1);

    message = " PopBack on a list with 1 element";
    list.pop_back();
    EXPECT_EQ(list.size(), 0);

    message = " Front on empty list after PopBack";
    GTEST_COUT << message << std::endl;
    EXPECT_THROW(list.front(), std::out_of_range);
 }

// Test case for pop_front() method
TEST_F(LinkedListTest, PopFront)
{
    std::string message = " ";

    message = " PopFront on a list with 3 elements";
    GTEST_COUT << message << std::endl;
    list.pop_front();
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 2);
    EXPECT_EQ(list.back(), 3);

    message = " PopFront on a list with 2 elements";
    GTEST_COUT << message << std::endl;
    list.pop_front();
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 3);
    EXPECT_EQ(list.back(), 3);

    message = " PopFront on a list with 1 element";
    GTEST_COUT << message << std::endl;
    list.pop_front();
    EXPECT_EQ(list.size(), 0);

    message = " Front on empty list after PopFront";
    GTEST_COUT << message << std::endl;
    EXPECT_THROW(list.front(), std::out_of_range);
}

// Test case for push_front() and front() methods
TEST_F(LinkedListTest, PushFrontAndFront)
{
    std::string message = " ";

    list.clear();

    message = " PushFront on an empty list";
    GTEST_COUT << message << std::endl;
    list.push_front(3);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 3);
    EXPECT_EQ(list.back(), 3);

    message = " PushFront on a list with 1 element";
    GTEST_COUT << message << std::endl;
    list.push_front(2);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 2);
    EXPECT_EQ(list.back(), 3);

    message = " PushFront on a list with 2 elements";
    GTEST_COUT << message << std::endl;
    list.push_front(1);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for insert() method
TEST_F(LinkedListTest, Insert)
{
    std::string message = " ";
    
    message = " Insert at second position";
    GTEST_COUT << message << std::endl;
    list.insert(1, 5);
    // Note: The following line will not print the message if the test passes,
    // however, this mechanism works to add messages to errors.
    // Leaving it in for demonstration purposes.
    // EXPECT_EQ(list.size(), 4) << message;
    EXPECT_EQ(list.size(), 4);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
    list.pop_front();
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 5);
    EXPECT_EQ(list.back(), 3);
    
    message = " Insert at end";
    GTEST_COUT << message << std::endl;
    list.insert(list.size(), 4);
    EXPECT_EQ(list.size(), 4);
    EXPECT_EQ(list.front(), 5);
    EXPECT_EQ(list.back(), 4);
 
    message = " Insert at front";
    GTEST_COUT << message << std::endl;
    list.insert(0, 7);
    EXPECT_EQ(list.size(), 5);
    EXPECT_EQ(list.front(), 7);
    EXPECT_EQ(list.back(), 4);
    list.pop_front();
    EXPECT_EQ(list.size(), 4);
    EXPECT_EQ(list.front(), 5);
    EXPECT_EQ(list.back(), 4);
}

// Test case for erase() method
TEST_F(LinkedListTest, Erase)
{
    std::string message = " ";

    message = " Erase from a list with elements";
    GTEST_COUT << message << std::endl;
    list.erase(1);
    EXPECT_EQ(list.size(), 2);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
    list.erase(1);
    EXPECT_EQ(list.size(), 1);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 1);

    message = " Erase from an empty list";
    GTEST_COUT << message << std::endl;
    list.erase(0);
    EXPECT_EQ(list.size(), 0);
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

// Test case for insert() method exception
TEST_F(LinkedListTest, InsertException)
{
    std::string message = " ";

    message = " Insert beyond the end of the list";
    GTEST_COUT << message << std::endl;
    EXPECT_THROW(list.insert(4, 5), std::out_of_range);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);

    message = " Insert before the start of the list";
    GTEST_COUT << message << std::endl;
    EXPECT_THROW(list.insert(-1, -1), std::out_of_range);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for pop_back() method exception
TEST_F(LinkedListTest, PopBackException)
{
    list.clear();
    EXPECT_THROW(list.pop_back(), std::out_of_range);
}

// Test case for pop_front() method exception
TEST_F(LinkedListTest, PopFrontException)
{
    list.clear();
    EXPECT_THROW(list.pop_front(), std::out_of_range);
}

// Test case for erase() method exception
TEST_F(LinkedListTest, EraseException)
{
    EXPECT_THROW(list.erase(4), std::out_of_range);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);

    EXPECT_THROW(list.erase(-1), std::out_of_range);
    EXPECT_EQ(list.size(), 3);
    EXPECT_EQ(list.front(), 1);
    EXPECT_EQ(list.back(), 3);
}

// Test case for print() method
TEST_F(LinkedListTest, Print)
{
    testing::internal::CaptureStdout();
    list.print();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "1 2 3\n");
}
