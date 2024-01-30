#!/bin/bash
cd MessageBox_AutoTest/build
./main > test_main_output.txt 
diff ../AutoTest_main_output.txt test_main_output.txt