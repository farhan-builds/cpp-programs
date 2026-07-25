#include <iostream>
using namespace std;
int main()
{
	int x;
	float  r,a;
	float p=3.14;
	cout << " geomatric calculation manu ";
	cout << " 1.calculate area of circle ";
	cout << " 2. exit " << endl;
	cout << " enter your choice ";
	cin >> x;
	switch(x)
	{
		case 1:
			cout << " enter the radice of the circle ";
			cin >> r;
			a=p*r*r;
			cout << " the area of the circle is " << a << endl;
			break;
		case 2:
				cout << " exiteing program ";
				break;
		default:
				cout << " invalid choice ";
				break;
	}
	return 0;
	
}