#include <iostream>
#include<fstream>
#include <cstdlib>
#include<ctime>
#include "Vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;  //不需要namespace
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream outFile;
	outFile.open("chapter11th.txt");
	cout << "Enter target distance(q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		outFile << "Target Distance:" << target << ", Step Size: " << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			outFile << steps << " " << result << endl;
			steps++;

		}
		outFile << "After " << steps << " steps, the subject has the following location:\n";
		outFile << result << endl;
		result.polar_mode();
		outFile << "or\n"<< result << endl;
		outFile << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0,0.0,Vector::RECT);
		cout << "Enter target distance (q to quit):"; 
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;

	outFile.close();
	return 0;
}
