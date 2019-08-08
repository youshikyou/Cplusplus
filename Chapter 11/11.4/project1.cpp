#include<iostream>
#include"mytime.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "planning time= ";
	cout << planning << endl;

	cout << "coding time= ";
	cout << coding << endl;

	cout << "fixing time= ";
	cout << fixing << endl;

	total = coding + fixing;
	cout << total << endl;

	total = 1.5*coding;
	cout << total << endl;

	total = coding - fixing;
	cout << total << endl;

	total = fixing - coding;
	cout << total << endl;



	return 0;

}
