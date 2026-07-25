#include <iostream>
using namespace std;
int main()
{
	int x;
	float l,w,n;
	cout << " geomatric calculation menu ";
	cout << " 1.calculate area of the rectanangla ";
	cout << " 2.exit " << endl;
	cout << " enter your choice ";
	cin >> x;
	switch(x)
	{
		case 1:
			cout << " enter the leanth of the rectanangle ";
			cin >> l;
			cout << " the width of the rectanangle is ";
			cin >> w;
			n=l*w;
			cout << " area of rectanangle is " << n << endl;
			break;
			case 2:
			cout << " exiting program ";
			break;
			default:
			cout << " invalide choice ";
	}
	return 0;
}