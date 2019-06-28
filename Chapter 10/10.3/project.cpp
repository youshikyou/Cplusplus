#include <iostream>
#include <vector>
#include<array>
#include <cstring>
#include<climits>
#include<cctype>
#include<fstream>
#include <string>
#include "golf.h"


int main()
{
	golf t;
	t.showgolf();
	golf t1("zhiqiang", 10);
	t1.showgolf();
	golf t2;
	t2.showgolf();
	t2.setgolf(t1);
	t2.showgolf();

	return 0;
}
