#include<iostream>
using namespace std;
int main()
{
	int a[] ={10,20,30,40,50};
	int sum;
	int length =sizeof(a)/sizeof(a[0]);
	
		  for(int i=0; i<length; i++)
		  {
		  	sum= sum+a[i];
		  }
		  cout <<  sum ;

    return 0;
}
