//{{4,3,2},{6,1,5},{9,7,8}}
#include<iostream>
using namespace std;
int main()
{
	int i =3 , j =3;
	int a[i][j] = {{4,3,2},{6,1,5},{9,7,8}};
	for(int x=0 ; x < 3 ; x++)
	{
		for(int y=0 ; y < 3 ; y++)
		{
			cout << a[x][y] << " ";
		}
		cout << endl;
	}
	
	return 0;
	
}