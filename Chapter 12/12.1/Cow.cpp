#include "Cow.h"
#include<cstring>
#include<iostream>

Cow::Cow() {
	name[0] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}
Cow::Cow(const char*nm, const char*ho, double wt) {
	strcpy_s(name,strlen(nm)+1, nm);
	hobby = new char[std::strlen(ho)+1];
	strcpy_s(hobby,strlen(ho)+1, ho);
	weight = wt;	
}

Cow::Cow(const Cow&c) {
	strcpy_s(name, strlen(c.name) + 1, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	strcpy_s(hobby,strlen(c.hobby)+1, c.hobby);
	weight = c.weight;
}

Cow::~Cow(){

	delete[]hobby;
}

Cow & Cow::operator=(const Cow&c) {

	if (this == &c)
		return *this;
	delete[] hobby;
	strcpy_s(name, strlen(c.name) + 1, c.name);
	hobby = new char[std::strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);
	weight = c.weight;
	return *this;

}

void Cow::ShowCow() const {
	std::cout << "name: "<<name << std::endl;
	std::cout << "hobby: "<<hobby << std::endl;
	std::cout << "weight: " << weight << std::endl;
}
