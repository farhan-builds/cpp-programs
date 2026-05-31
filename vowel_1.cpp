#include <iostream>
using namespace std;
int main ()
{
	char c;
	bool a,b;
	cout << " Enter a character: ";
	cin >> c;
	a= ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	
	b= ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if( !isalpha(c))
	cout << " error non alphabatic character: ";
	else if(a || b )
	cout << c << " is is vowel ";
	else
	cout << c << " is is consonant: ";
	return 0;
}