#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter oil temperature: ";
    cin >> temperature;

    if (temperature < 70)
    {
        cout << "Oil temperature is LOW." << endl;
    }
    else if (temperature >= 70 && temperature <= 100)
    {
        cout << "Oil temperature is NORMAL." << endl;
    }
    else if (temperature > 100 && temperature <= 120)
    {
        cout << "WARNING: Oil temperature is HIGH." << endl;
    }
    else
    {
        cout << "DANGER: Oil temperature is CRITICAL!" << endl;
    }

    return 0;
}
