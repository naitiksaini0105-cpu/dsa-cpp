#include <iostream>
using namespace std;
int main()
{

    int temperature;
    cin >> temperature;

    if (temperature > 30)
    {
        cout << "Hot";
    }
    else if (temperature >= 20)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Cold";
    }

    return 0;
}