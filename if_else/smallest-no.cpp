#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the three numbers :";
    cin >> a >> b >> c;

    if (a < b && a < c)
    {
        cout << a << " is the smallest number." << endl;
    }
    else if (b < c && b < a)
    {
        cout << b << " is the smallest number." << endl;
    }
    else
    {
        cout << c << " is the smallest number." << endl;
    }
    return 0;
}