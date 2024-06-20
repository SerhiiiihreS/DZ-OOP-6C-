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

MyString::MyString(const char* st)
{
	this->str = new char[strlen(st) + 1];
	strcpy_s(this->str, strlen(st) + 1, st);
}

MyString::MyString()
{
	char strbuf[80]; 
	cin.getline(strbuf, 80);
	str = new char[strlen(strbuf) + 1];
	strcpy_s(str, strlen(strbuf) + 1, strbuf); 
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

MyString::MyString(MyString&& b)
{
	str = b.str; 
	b.str = nullptr;
}


int MyString::Getlength() const 
{
	return length;
}

char* MyString::Getstr() const 
{
	return str;
}


void MyString::Input()
{
	char strbuf[80];
	cin.getline(strbuf, 80);
	str = new char[strlen(strbuf) + 1];
	strcpy_s(str, strlen(strbuf) + 1, strbuf);
}

void MyString::Output()
{
	cout << str << endl; 
}

bool MyString::MyStrStr(MyString& b)
{
	int l = strlen(str);
	int lb = strlen(b.str);
	char* rstr = new char[l + lb];
	int ck = 0;
	if (l > lb) {
		for (int i = 0; i < (l - lb);  i++) {
			for (int j = 0; j < lb; j++) {
				if (str[j - i] == b.str[j]) {
					ck += 1;
				}
			}
			if (ck == lb) {
				return true;
				break;
			}
		}
	}
	return false;
}

int MyString::MyChr(char c)
{
	int l = strlen(str);
	int j = 0;
	for (int i = 0; i < l; i++) {
		if (str[i] == c) {
			return i;
			j = 1;
		}
	}
	if (j == 0) {
		return 1;
	}
}

int MyString::MyStrLen()
{
	int l = strlen(str); 
	return l;
}

void MyString::MyStrCat(MyString& b)
{
	int l = strlen(str);
	int lb = strlen(b.str);
	char* rstr = new char[l + lb];
	for (int i = 0; i < (l + lb); i++) {
		if (i < l) {
			rstr[i] = str[i];
		}
		else if (i >= l) {
			rstr[i] = b.str[i - l];
		}
	}
	rstr[l + lb - 1] = '\0';
	cout << endl << rstr;
}

void MyString::MyDelChr(char c)
{
	int l = strlen(str);
	char* nstr = new char[l];
	int j = 0;
	for (int i = 0; i < l; i++) {
		if (str[i] != c) {
			nstr[j] = str[i];
			j++;
		}
	}
	nstr[j] = '\0';
	cout  << nstr;   
}

int MyString::MyStrCmp(MyString& b)
{
	int l = strlen(str); 
	int lb = strlen(b.str);
	if (l > lb) {
		return -1;
	}
	else if (l < lb) {
		return 1;
	}
	else if(l==lb) {
		return 0;
	}
}


