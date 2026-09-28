#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "enter your age :";
    cin >> age;

    if (age >= 18)
    {
        cout << "you are eligible to vote." << endl;
    }
    else
    {
        cout << "you are not eligible to vote." << endl;
    }
    return 0;
}