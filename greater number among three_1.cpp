#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout << " Enter three numbers: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if (( a > b ) && (a > c))
	cout << " a is greater number: ";
	else if((b>a) && (b>c))
	cout << " b is greater number: ";
	else
	cout << " c is greater number: ";
	return 0;
}