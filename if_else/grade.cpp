#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "enter the marks :";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "A grade" << endl;
    }
    else if (marks >= 80 && marks <= 90)
    {
        cout << "B grade" << endl;
    }
    else if (marks >= 70 && marks <= 80)
    {
        cout << "C grade" << endl;
    }
    else if (marks >= 60 && marks <= 70)
    {
        cout << "D grade" << endl;
    }
    else
    {
        cout << "F grade" << endl;
    }

    return 0;
}