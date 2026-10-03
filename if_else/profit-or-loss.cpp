#include <iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout << "enter the selling price :";
    cin >> sp;
    cout << "enter the cost price :";
    cin >> cp;

    if (sp > cp)
    {
        cout << "profit :" << sp - cp << endl;
    }
    else if (sp < cp)
    {
        cout << "loss :" << cp - sp << endl;
    }
    else
    {
        cout << "no profit no loss " << endl;
    }
    return 0;
}