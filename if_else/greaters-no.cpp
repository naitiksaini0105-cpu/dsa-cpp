#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the three numbers :";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is the greatest number." << endl;
    }
    else if (b > c && b > a)
    {
        cout << b << " is the greatest number." << endl;
    }
    else
    {
        cout << c << " is the greatest number." << endl;
    }
    return 0;
}