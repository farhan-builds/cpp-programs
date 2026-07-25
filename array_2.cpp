#include<iostream>
using namespace std;
int main()
{
	int a[] ={10,20,30,40,50};
	
	int length = sizeof(a)/sizeof(a[0]);
	
	  for(int i=0; i<length; i++)
    {
    	cout << a[i] << " ";
	}

    return 0;
}