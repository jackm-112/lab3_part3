// lab3_part3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a = 5;
typedef int* VEC;
typedef VEC* MATRIX;

int main()
{
	//declaring & defining pointers to the int a & VEC v
	VEC v = &a;
	MATRIX m = &v;

	cout << "value of a = " << a << "\n";
	//just printing the value of v will show the memory address,
	//not the value of a. so, we have to use *.
	cout << "value of a using VEC = " << *v << "\n";
	//a single * is not enough for m, since it is already pointing
	//to a pointer. so, we have to use ** to get the value of a.
	cout << "value of a using MATRIX = " << **m;
}
