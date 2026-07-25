#include <iostream>
#include <string>
using namespace std;
class Vical
{
	public:
		void vicalType()
		{
			cout << " this ia a two whiler vical " << endl;
		}
};
class Fourwhiler: public Vical
{
	public:
		void whiles()
		{
			cout << " it has four whiles " << endl;
		}
};
class Car: public Fourwhiler
{
	public:string brand=" tesla ";
	void display()
	{
		cout << " this four whiler is a " <<  brand  << "." << endl;
	}
};
int main()
{
	Car obj;
		obj.vicalType();
		obj.whiles();
		obj.display();
		
		return 0;
}