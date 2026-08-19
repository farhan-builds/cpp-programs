#include<iostream>
using namespace std;
int main()
{
	int x[3] ={1,2,3};
	int y[3] ={4,5,6};
	int n[3];
	for(int i = 0 ;i < 3;i++)
	{
		 n[i] = x[i] + y[i];
	}
	
		for(int i =0 ; i < 3; i++)
		{
			cout << n[i] << " ";
		}
		cout <<endl;
	
	return 0;
}
