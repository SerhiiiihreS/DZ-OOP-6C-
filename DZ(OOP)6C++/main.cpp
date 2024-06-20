#include "MyString.h"
#include <iostream>
using namespace std;

int main() {
	MyString a{ "sdabfhjawevnlc;mv" };
	MyString c("we");
	MyString b;
	char t = 'c';
	a.Input();
	a.Output();
	a.MyStrStr(c);
	a.MyChr(t);
	a.MyStrLen();
	a.MyStrCat(c);
	a.MyDelChr(t);
	a.MyStrCmp(c);
	MyString g =move(a);
	MyString w = g;
}
