#include <iostream>
using namespace std;
int main()
{
	int x;
	float h,b,c,a;
	float n=0.5;
	cout << " geomatric calculation menu ";
	cout << " 1.calculate area of the triangle ";
	cout << " 2.exit " << endl;
	cout << " enter your choice ";
	cin >> x;
	switch(x)
	{
		case 1:
			cout << " enter the hight of the triangle ";
			cin >> h;
			cout << " the base of the triangle is ";
			cin >> c;
			a=n*h*b;
			cout << " area of triangle is " << a << endl;
			break;
			case 2:
				cout << " exiting the program ";
				break;
			default:
				cout << " invalide choice ";	
	}
	return 0;
}
