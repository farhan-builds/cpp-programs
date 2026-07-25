#include <iostream>
using namespace std;

class Salesman
{
	public:
		string name;
		float sales,commission;
		
		void Calculate()
		{
			cout << " enter the salesman name ";
			cin >> name;
			
			cout << " enter sales ";
			cin >> sales;
			
			if(sales>=25000)
			commission = sales*10/1000;
			else
			commission =sales*5/1000;
			
		 cout << "\nName: " << name;
        cout << "\nSales: " << sales;
        cout << "\nCommission: " << commission;
		}
};
int main()
{
    Salesman s;
    s.Calculate();
    return 0;
}