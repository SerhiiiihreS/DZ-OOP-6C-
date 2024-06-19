#pragma once
class MyString
{private:
	char* str;
	int length;
public:
	MyString();
	MyString(int ln);
	MyString(const char* st, int ln);
	MyString();
	~MyString();
	MyString(MyString& b);
	MyString(MyString&& d);


	void Input();
	void Output();




	

	




};

