#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout << " Enter two numbers: ";
	cin >> a >> b;
	c=a;
	a=b;
	b=c;
	cout << " After swep:\n";
	cout << " a = " << a << " b = " << b;
	return 0;
}