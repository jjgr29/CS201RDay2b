// CS201RDay2b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//NAME:
//PROJECT

#include <iostream>
using namespace std;

int main() {
// get x,y from user
// calc dist to origin
// print dist
	int x1, y1, x2, y2;
	double dist1, dist2;
	char userInput = 'Y';

	while (userInput != 'N') {
		cout << "Please enter x, y values for the first point: ";
		cin >> x1 >> y1;

		cout << "Please enter x, y values for the second point: ";
		cin >> x2 >> y2;

		//pos(a,b) = a^b
		//used chatgpt to simplify dist formula
		//dist1 = pow((pow(x1, 2) + pow(y1, 2)),.5);
		dist1 = sqrt(x1 * x1 + y1 * y1);
		dist2 = sqrt(x2 * x2 + y2 * y2);

		cout << "Distance from (" << x1 << ", "
			<< y1 << ") = " << dist1 << endl;

		cout << "Distance from (" << x2 << ", "
			<< y2 << ") = " << dist2 << endl;

		cout << "\nPlease enter N to stop or Y to continue: ";
		cin >> userInput;
	}
} 

