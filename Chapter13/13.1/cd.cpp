#include<cstring>
#include<iostream>
#include"cd.h"


Cd::Cd(const char * s1, const char*s2, int n, double x){
	strncpy_s(performer, s1, 49);
	performer[49] = '\0';
	strncpy_s(label, s2, 19);
	label[19] = '\0';
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd&d) {
	strncpy_s(performer, d.performer, 49);
	performer[49] = '\0';
	strncpy_s(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	strcpy_s(performer,"default");
	strcpy_s(label, "none");
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{

}//可以没有

void Cd::Report()const {
	std::cout << "performer: "<<performer << '\n';
	std::cout << "label: "<<label << '\n';
	std::cout << "selections: " << selections << '\n';
	std::cout << "playtime: " << playtime << '\n';
}

Cd& Cd::operator =(const Cd&d) {
	if (this == &d)
		return *this;
	strncpy_s(performer, d.performer, 49);
	performer[49] = '\0';
	strncpy_s(label, d.label, 19);
	label[19] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
