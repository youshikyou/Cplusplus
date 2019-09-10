#include<iostream>
#include<string>
#include"dma.h"
const int num = 3;

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	DMA_abc *p_test[num];
	char temp[30];
	int tempnum;
	char kind;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter #" << (i+1) << endl;
		cout << "Enter label: ";
		cin.getline(temp,29);
		cout << "Enter rating: ";
		cin >> tempnum;
		cout << "Enter 1 for baseDMA or "
			<< "2 for lacksDMA or "
			<< "3 for hasDMA: ";
		while (cin >> kind && (kind != '1'&&kind != '2'&&kind!='3'))
			cout << "Enter either 1, 2 or 3: ";
		if (kind == '1')
		{
			cin.get();
			p_test[i] = new baseDMA(temp, tempnum);
		}
		else if(kind == '2')
		{
			char *col= new char[20];
			cin.get();
			cout << "Enter color: ";
			cin.getline(col, 19);
			p_test[i] = new lacksDMA(col,temp, tempnum);
			//delete[]col;
		}
		else if (kind == '3')
		{
			char *sty=new char[20];
			cin.get();
			cout << "Enter style: ";
			cin.getline(sty, 19);
			p_test[i] = new hasDMA(sty, temp, tempnum);
			//delete[]sty;
		}
		while (cin.get() != '\n')
			continue;
	}

	for (int i = 0; i < num; i++)
	{
		p_test[i]->View();
		cout << endl;
	}
	for (int i = 0; i < num; i++)
	{
		delete p_test[i];
	}

	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;
	lacksDMA balloon2("red",shirt);
	cout << "Result of lacksDMA copy derived from base:\n";
	cout << balloon2 << endl;
	lacksDMA balloon3(balloon2);
	cout << "Result of lacksDMA copy from lacksDMA:\n";
	cout << balloon3 << endl;
	hasDMA map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";
	cout << map2 << endl;

	return 0;
}
