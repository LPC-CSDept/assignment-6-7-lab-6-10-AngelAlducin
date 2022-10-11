//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)

void swap(int& num1, int& num2)
{
int A1 = num1;
num1 = num2;
num2 = A1;
}

void swap(int& num1, int& num2, int& num3)
{
int A1 = num1;
int A2 = num2;

num1 = num3;
num2 = A1;
num3 = A2;
}

void swap(int& num1, int& num2, int& num3, int& num4)
{
int A1 = num1;
num1 = num2;
num2 = num3;
num3 = num4;
num4 = A1;
}