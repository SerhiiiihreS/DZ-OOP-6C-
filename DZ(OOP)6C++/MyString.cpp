#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	this->str = new char[80];
}

MyString::MyString(int ln)
{
	if (ln > 0) {
		length = ln;
	}
}

MyString::MyString(const char* st, int ln):MyString(ln)
{
	this->str = new char[strlen(st) + 1];
	strcpy_s(this->str, strlen(st) + 1, st);
}

MyString::MyString()
{
	char buf[80];
	cin.getline(buf, 80); 
	str = new char[strlen(buf) + 1];  
	strcpy_s(str, strlen(buf) + 1, buf); 
}

MyString::~MyString() 
{
	if (str != nullptr)
	{
		delete[] str; 
	}
}

MyString::MyString(MyString& b)
{
	this->str = new char[strlen(b.str) + 1];
	strcpy_s(this->str, strlen(b.str) + 1, b.str);
}

MyString::MyString(MyString&& d)
{
	str = d.str;
	d.str = nullptr;
}

void MyString::Input()
{
}

void MyString::Output()
{
}
