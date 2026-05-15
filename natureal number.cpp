#include <iostream>
using namespace std;
int main ()
{
	int n,s=0,i;
	cout << " Enter a possitive integer: ";
	cin >> n;
	for( i=1; i<=n; i++)
	{
		s=s+i;
	}
	cout << " s= " << s ;
	return 0;
}