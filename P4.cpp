#include <iostream>
using namespace std;

int main(){
    // cout << "Text Input: ";
    // string text; getline(cin,text);
    // cout << endl << "Verschiebungsposition: ";
    // int v; cin >> v;

    // //check auf buchstabe gross und kliein
    // // nach z soll a

    // string newText = "";

    // while(v > 26)
    // {
    //     v -= 26;
    // }

    // for(int i = 0; i < text.length();i++)
    // {
    //     //check auf buchstabe
    //     if (int(text[i]) <= int('z') && int(text[i]) >= int('a'))
    //     {
    //         if(int(text[i]) + v >= int('z'))
    //         {
    //             text[i] = int(text[i]) - 26 + v;
                

    //         }else{
    //             text[i] = int(text[i]) + v;
    //         }
    //     }

    //     if (int(text[i]) <= int('Z') && int(text[i]) >= int('A'))
    //     {
    //         if (int(text[i]) + v >= int('Z'))
    //         {
    //             text[i] = int(text[i]) - 26 + v;
    //         }
    //         else
    //         {
    //             text[i] = int(text[i]) + v;
    //         }
    //     }
    // }

    // cout << text;

    bool checkStunde,checkMinute;
    int stunde,minute,takt;
    do
    {
        cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
        cin >> stunde;
        cout << endl;
    } while (stunde > 23 || stunde < 0);

    do
    {
        cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
        cin >> minute;
        cout << endl;

    }
    while (minute > 59 || minute < 0);

    cout << "Der erste Bus fährt also um " << stunde << ":" << minute << " Uhr." << endl;

   
    cout << "Bitten geben Sie die Taktzeit in Minuten ein: ";
    cin >> takt;
    
    // erste uhrzeit
    cout << stunde << ":" << minute << " ";

    //restliche uhrzeit
    while (stunde < 24)
    {
        minute += takt;
        //wenn mehr als 60 minuten dann stunde hochzählen
        if(minute >= 60)
        {
            //wenn minute mehr als 60 minuten hat dann stunde richtig umrechnen
            while (minute >= 60)
            {
                minute -= 60;
                stunde++;
            }
            
            cout << endl;
        }
        
        //Ausgabe
        if(stunde < 24)
        {
            cout << stunde << ":" << minute << " ";
        }
        
        
    };
}