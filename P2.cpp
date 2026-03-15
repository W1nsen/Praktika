#include <iostream>
using namespace std;

int main()
{
    cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
    double temp; cin >> temp;

    temp = (temp * 1.8) +32;

    cout << "Die Temperatur in Fahrenheit lautet: " << temp;

    cout << endl;
    return 0;
}
