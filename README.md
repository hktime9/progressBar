# progressBar
A C++ function that can be called inside C++ code by including the .cpp file and displays a progress bar using the variable in question/growth and a variable containing it's target value
It needs three parameters:
1) pointer to an integer varible whose progress has to be monitored
2) pointer to an integer variable which is the target value to the first parameter
3) a string variable which is displayed to monitor progress
A sample test code is written in the "testing.cpp" file
C++ threads are used so the parent program needs this included
This needs no additional flags and can be compiled using:
g++ testing.cpp -o testing.exe