#include<cstring>
#include<iostream>
#include"cd.h"


Cd::Cd(const char * s1, const char*s2, int n, double x){
	performer = new char[strlen(s1)+1];
	strcpy_s(performer, strlen(s1)+1,s1);
	label = new char[strlen(s2)+1];
	strcpy_s(label, strlen(s2)+1,s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd&d) {
	performer = new char[strlen(d.performer) + 1];
	strcpy_s(performer, strlen(d.performer) + 1, d.performer);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	performer = new char[strlen("default") + 1];
	strcpy_s(performer, strlen("default") + 1,"default");
	label = new char[strlen("none") + 1];
	strcpy_s(label, strlen("none") + 1, "none");
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{
	delete[]performer;
	delete[]label;
}

void Cd::Report()const {
	std::cout << "performer: "<<performer << '\n';
	std::cout << "label: "<<label << '\n';
	std::cout << "selections: " << selections << '\n';
	std::cout << "playtime: " << playtime << '\n';
}

Cd& Cd::operator =(const Cd&d) {
	if (this == &d)
		return *this;
	delete[]performer;
	delete[]label;
	performer = new char[strlen(d.performer) + 1];
	strcpy_s(performer,strlen(d.performer) + 1,d.performer);
	label = new char[strlen(d.label) + 1];
	strcpy_s(label,strlen(d.label) + 1,d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
