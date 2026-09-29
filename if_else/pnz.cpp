#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;

    if (num > 0)
    {
        cout << "this number is positive." << endl;
    }
    else if (num < 0)
    {
        cout << "this number is negative." << endl;
    }
    else
    {
        cout << "this number is zero." << endl;
    }
    return 0;
}