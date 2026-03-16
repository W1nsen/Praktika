#include <iostream>
using namespace std;

int main()
{

    double input;
    int auswahl;

    cout << "Ihre Eingabe: ? ";cin >> input; cout << endl;
    cout << "Ihre Auswalh der Umwandlung: " << endl;
    cout << "1 - Celsius in Fahrenheit " << endl;
    cout << "2 - Meter in Fuss " << endl;
    cout << "3 - Euro in US Dollar " << endl;
    cout << "Antwort: "; cin >> auswahl;



    double temp,meter,euro;
    temp = ((input * 1.8) + 32) * (auswahl - 2) * (auswahl - 3)/2;
    meter = input * 3.2808 * (auswahl - 1) * (auswahl - 3) *-1;
    euro = (input * 1.2957) * (auswahl - 2) * (auswahl - 1) /2;

    double output = temp + meter + euro;

    cout << "Output: " << output;


    cout << endl;

    cout << "Bitte geben Sie den Buchstaben ein: ? ";
    char c; cin >> c;cout<<endl;

    cout << "Der Buchstabe " << c << " hat die Position " << int(c) - 96 << " im Alphabet " << endl;

    return 0;
}
