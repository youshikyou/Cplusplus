#pragma once
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char *str;
	int len;
	int num;
	static int num_strings;
	static const int CINLIM = 80;
public:
	//constructor and other methods;
	String(const char *s);
	String();
	String(const String &s);
	~String();
	int length()const { return len; }
	String& StringLow();
	String& StringUp();
	//overload operator methods
	String &operator=(const String&st);
	String &operator=(const char*st);
	String &operator+(const String&st);
	String &operator+(const char *st);
	char &operator[](int i) const;
	//static function
	static int HowMany() { return num_strings; }
	int has(char st) ;

	//overloaded operator friends
	friend bool operator <(const String &st1, const String &st2);
	friend bool operator >(const String &st1, const String &st2);
	friend bool operator ==(const String &st1, const String &st2);
	friend String&operator+(const char*st1,String&st2);
	friend ostream & operator <<(ostream &os, const String &st);
	friend istream & operator >>(istream&is, String &st);


};

#endif // !STRING2_H_

