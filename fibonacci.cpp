#include <iostream>
using namespace std;
int main ()
{
	int n,t=0,a=1,nt=0;
	cout << " enter the number of turms: ";
	cin >> n;
	cout << " fibonacci series: ";
	for( int i=1; i<=n; i++)
	{
		if( i==1)
		{
		cout << t;
		continue;	
		}
		if( i==2)
		{
		cout << a;
		continue;
		}
		nt=t+a;
		t=a;
		a=nt;
		cout << nt;
	}
	return 0;
}
		
		