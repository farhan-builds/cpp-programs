#include <iostream>
using namespace std;
int main ()
{
	int a, b = 0, c, x;
	cout << " enter a number ";
	cin >> a;
	c=a;
	while(a!=0)
	{
		x=a%10;
		b=(b*10)+x;
		a=a/10;
	}
	if(c==b)
	cout <<" this is a palindrome number ";
	else
	cout <<" this is not a palindrome number ";
	return 0;
}