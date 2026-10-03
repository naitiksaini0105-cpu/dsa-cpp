#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number :" << endl;
    cin >> num;

    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << num << " is divisible by both 5 and 3." << endl;
    }
    else
    {
        cout << num << " is not divisible by both 5 and 3." << endl;
    }
    return 0;
}