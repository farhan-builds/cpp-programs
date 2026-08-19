#include<iostream>
using namespace std;
int main()
{
	int i = 3,j = 3;
	int a[i][j] = {{1,2,3},{4,5,6},{7,8,9}};
	
	for(int x = 0 ;x < 3;x++)
	{
		for(int y =0 ; y < 3; y++)
		{
			cout << a[x][y] << " ";
		}
		cout <<endl;
	}
	
	return 0;
	
}