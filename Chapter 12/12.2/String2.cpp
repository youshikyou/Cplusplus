#include "String2.h"
#include<cstring>
#include<cctype>
int String::num_strings = 0;

String::String(const char *s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
}

String::String()
{
	len = 0;
	str = nullptr;
	num_strings++;

}

String::String(const String&s)
{
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
	num_strings++;
}

String::~String()
{
	delete[]str;
	num_strings--;
}

String& String::StringLow()
{
	for (int i = 0; i < len; i++)
		str[i]=tolower(str[i]);
	return *this;
}

String& String::StringUp()
{
	for (int i = 0; i < len; i++)
		str[i]=toupper(str[i]);
	return *this;
}

//overload operator methods
String &String::operator=(const String&st)
{
	if (this == &st)
		return *this;
	delete[]str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

String &String::operator=(const char*st)
{
	delete[]str;
	len = strlen(st);
	str = new char[len + 1];
	strcpy_s(str, len + 1, st);
	return *this;
}

String &String::operator+(const String&st)//新对象
{
	String temp;
	temp.len = len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str,temp.len+1,str);
	delete[]str;
	len = temp.len + strlen(st.str);
	str = new char[len + 1];
	strcpy_s(str, temp.len + 1, temp.str);
	strcat_s(str, len+1,st.str);

	return *this;
}

String &String::operator+(const char *st)//原对象
{
	String temp;
	temp.len = len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, temp.len + 1, str);
	delete[]str;
	len = temp.len + strlen(st);
	str = new char[len + 1];
	strcpy_s(str, temp.len + 1, temp.str);
	strcat_s(str, len + 1, st);
	return *this;
}


int String::has(char st) 
{
	for (int i = 0; i < len; i++)
	{
		if (st == str[i])
			num++;
	}
	return num;
}


char &String::operator[](int i) const
{
	return str[i];
}

//overloaded operator friends
bool operator <(const String &st1, const String &st2)
{
	return(strcmp(st1.str, st2.str) < 0);
}

bool operator >(const String &st1, const String &st2)
{
	return(strcmp(st1.str, st2.str) > 0);
}

bool operator ==(const String &st1, const String &st2)
{
	return(strcmp(st1.str, st2.str) == 0);
}

String& operator+(const char*st1, String&st2)
{
	String temp;
	temp.len = strlen(st2.str);
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, temp.len+1, st2.str);
	delete[]st2.str;
	st2.len = temp.len + strlen(st1);
	st2.str = new char[st2.len + 1];
	strcpy_s(st2.str,strlen(st1)+1,st1);
	strcat_s(st2.str,st2.len+1, temp.str);
	return st2;
}

ostream & operator <<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}

istream & operator >>(istream&is, String &st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is&&is.get() != '\n')
		continue;
	return is;
}
