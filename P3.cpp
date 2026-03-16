#include <iostream>
using namespace std;

int main()
{
    int day1,day2,month1,month2,year1,year2;
    cout << "Bitte geben Sie den Tag des ersten Datums ein: ";cin >> day1; cout << endl;
    cout << "Bitte geben Sie den Monat des ersten Datums ein: ";cin >> month1; cout << endl;
    cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";cin >> year1; cout << endl;
    cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";cin >> day2; cout << endl;
    cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";cin >> month2; cout << endl;
    cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";cin >> year2; cout << endl;

    if(year1 < year2)
    {
        cout << "Das erste Datum liegt vor dem zweiten Datum.";
    }else if (year2 < year1)
    {
        cout << "Das zweite Datum liegt vor dem ersten Datum.";
    }else if(month1 < month2)
    {
        cout << "Das erste Datum liegt vor dem zweiten Datum.";
    }else if(month2 < month1)
    {
        cout << "Das zweite Datum liegt vor dem ersten Datum.";
    }else if(day1 < day2)
    {
        cout << "Das erste Datum liegt vor dem zweiten Datum.";
    }else if(day2 < day1)
    {
        cout << "Das zweite Datum liegt vor dem ersten Datum.";
    }else
    {
        cout << "Beide Datumsangaben sind gleich";
    }

    cout << endl;
    return 0;
}