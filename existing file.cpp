#include <iostream>
#include <string>
using namespace std;
class New
{
	public:
		void Display()
		{
			cout << " Animals can eat " << "." << endl;
		}
};
class Abstract
{
	public:
		void Output()
		{
			cout << " Humans can speak " << "." << endl;
		}
};
class Abs: public New, public Abstract
{
	public:
		void Walk()
		{
			cout << " Animals and Human both can walk " << "." << endl;
		}
};
int main()
{
	Abs obj;
	obj.Display();
	obj.Output();
	obj.Walk();
	
	return 0;
}