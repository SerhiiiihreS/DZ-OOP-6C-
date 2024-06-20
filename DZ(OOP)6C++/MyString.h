#pragma once
class MyString
{private:
	char* str;
	int length;
public:
	MyString();
	MyString(int ln);
	MyString(const char* st);
	MyString();
	~MyString();
	MyString(MyString& b); 
	MyString(MyString&& b);
	int Getlength()const;
	char* Getstr()const;
	MyString& operator=(const MyString&b) // 2
	{
		if (this == &b)
		{
			return *this;
		}
		if (str != nullptr)
		{
			delete[] str;
		}
		str = new char[strlen(b.str) + 1];
		strcpy_s(str, strlen(b.str) + 1, b.str);
		length = b.length;

		return *this;
	}


	MyString &operator= (MyString&& b) {
		str = b.str; 
		b.str = nullptr;
		return *this;
	}

	void Input();
	void Output();
	bool MyStrStr(MyString& b);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);






	

	




};

