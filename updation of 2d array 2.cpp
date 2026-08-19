#include<iostream>
using namespace std;
int main()
{
	int a[2][3] = {{1,2,3},{4,5,6}};
	a[1][0] = 7;
	
	for(int x = 0 ;x < 2;x++)
	{
		for(int y =0 ; y < 3; y++)
		{
			cout << a[x][y] << " ";
		}
		cout <<endl;
	}
	return 0;
}