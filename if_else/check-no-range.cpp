#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << " enter the number :";
    cin >> num;

    bool isInRange = (num > 10 && num < 50);

    if (isInRange)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}