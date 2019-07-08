#include<iostream>
using namespace std;
void myPrint(string s)
{
	for(int i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}
}
int main()
{
	string s="rekrap";
	myPrint(s);
	return 0;
}
