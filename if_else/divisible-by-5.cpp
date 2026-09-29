#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "number is divisible by 5." << endl;
    }
    else
    {
        cout << " number is not divisible by 5." << endl;
    }
    return 0;
}