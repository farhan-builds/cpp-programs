#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout << " Enter a year";
	cin >> a;
	if ( a % 400 ==0)
	cout << a << " its lepier";
	else if( a % 100 == 0)
	cout << a << " its not lepier";
	else if( a % 4 == 0)
	cout << a << " its lepier";
	else
	cout << a <<" its not a lepier";
	return 0;
	
}