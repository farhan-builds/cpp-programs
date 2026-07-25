#include <iostream>
using namespace std;

class Time
{
	public:
		float t1,t2,t3;
		void Management()
		{
			cout << " Enter first time " ;
			cin >> t1;
			
			cout << " Enter seceond time ";
			cin >> t2;
			t3=t1+t2;
			cout << " sum of two times " << t3 << endl;
		}
};
int main()
{
	Time T;
	T.Management();
	return 0;
}