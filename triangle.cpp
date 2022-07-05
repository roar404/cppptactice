// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if the triangle
// is equilateral or isosceles or scalene
void checkTriangle(int x, int y, int z)
{
	
	// Check for equilateral triangle
	if (x == y && y == z)
		cout << "Equilateral Triangle";

	// Check for isosceles triangle
	else if (x == y || y == z || z == x)
		cout << "Isosceles Triangle";

	// Otherwise scalene triangle
	else
		cout << "Scalene Triangle";
}

// Driver Code
int main()
{
	
	// Given sides of triangle
	int x = 8, y = 7, z = 9;
	
	// Function call
	checkTriangle(x, y, z);
}

