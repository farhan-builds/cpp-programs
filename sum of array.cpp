#include <iostream>
using namespace std;

int main()
{
    int arr[5], sum = 0;
    float average;

    cout << "Enter 5 numbers: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (float)sum /5 ;
    
    cout << " sum " << sum << endl;
    cout << " average " << average << endl;

    return 0;
}