#include <iostream>
using namespace std;
int a=5;
void myPrint(int a)
{
 
	if(a>0)
	{
		a=a-1;
		myPrint(a);
		cout<<a;
	}
}
int main() {
	myPrint(a);
	return 0;
}
