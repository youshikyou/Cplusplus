#include<iostream>
#include<cctype>
#include"Stonewt.h"

int main()
{
	using namespace std;
	const int size = 6;
	double input_pounds;
	int obj_lef = 0;
	char choice;
	int stn_wt;
	double stn_lbs;
	double pounds_lbs;
	Stonewt stn[size] = { Stonewt(2,3,Stonewt::STONE),Stonewt(150.0),Stonewt(13,13,Stonewt::POUNDS) };
	Stonewt cmp(11,0.0,Stonewt::STONE);

	cout << "Please initiate three more objects" << endl;
	cout << "Please enter # "<<(obj_lef+4)<< " object (s for stone input, p for pounds input, q to quit): " << endl;


	while (cin>>choice&&obj_lef<3&&tolower(choice)!='q')
	{
		while (tolower(choice) != 's' && tolower(choice) != 'p')
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout<<"Not correct input. Please enter # "<<(obj_lef+4)<< " object(s for stone input, p for pounds input, q to quit) : "<<endl;
			cin >> choice;
		}


		switch (choice)
		{
			case 'S':
			case 's':	cout << "Please enter stone: " << endl;
						while (!(cin >> stn_wt))
							{
								cin.clear();
								while (cin.get() != '\n')
									continue;
								cout << "Please enter correct stone value: "<< endl;
							}

						cout << "Please enter left pounds:" << endl;
						while (!(cin >> stn_lbs))
						{
							cin.clear();
							while (cin.get() != '\n')
								continue;
							cout << "Please enter correct left pounds value: " << endl;
						}
						stn[3 + obj_lef].Reset(stn_wt, stn_lbs);
						break;
			case 'P':
			case 'p':	cout << "Please enter pounds: " << endl;
						while (!(cin >> pounds_lbs))
						{
							cin.clear();
							while (cin.get() != '\n')
								continue;
							cout << "Please enter correct pounds value: " << endl;
						}
						stn[3 + obj_lef].Reset(pounds_lbs);
						break;
		}
		obj_lef++;
		if (obj_lef < 3)
			cout << "Please enter #" << (obj_lef + 4) << " object (s for stone input, p for pounds input, q to quit): " << endl;
		else
			break;
	}

	int max_ind = 0;
	int min_ind=0;
	int num_over_ele=0;

	for (int i = 1; i < 6; i++)
	{
		if (stn[max_ind]<stn[i])
				max_ind = i;

		if (stn[min_ind] > stn[i])
				min_ind = i;

		if (stn[i] >= cmp)
			num_over_ele++;
	}

	cout << "max: " << stn[max_ind] << endl;
	cout << "min: " << stn[min_ind] << endl;
	cout << "over 11 stone number: " << num_over_ele << endl;
	cout << "Bye" << endl;

	return 0;

}
