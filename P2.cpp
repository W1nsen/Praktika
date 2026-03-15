#include <iostream>
using namespace std;

int main()
{
    cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
    double temp; cin >> temp;

    temp = (temp * 1.8) + 32;

    cout << "Die Temperatur in Fahrenheit lautet: " << temp;

    cout << endl;


    cout << "Bitte geben Sie die Laenge in Metern ein: ? ";
    double meter; cin >> meter;

    meter *= 3.2808;

    cout << "Die Laenge in Fuss lautet: " << meter << endl;

    cout << "Bitte geben Sie die Geldmenge in Euro ein: ? ";
    double euro; cin >> euro;

    euro *= 1.2957;

    cout << "Die Geldmenge in US Dollar lautet: " << euro << endl;
}
