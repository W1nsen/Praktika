#include <iostream>
using namespace std;

int main(){
    cout << "Text Input: ";
    string text; getline(cin,text);
    cout << endl << "Verschiebungsposition: ";
    int v; cin >> v;

    //check auf buchstabe gross und kliein
    // nach z soll a

    string newText = "";

    while(v > 26)
    {
        v -= 26;
    }

    for(int i = 0; i < text.length();i++)
    {
        //check auf buchstabe
        if (int(text[i]) <= int('z') && int(text[i]) >= int('a'))
        {
            if(int(text[i]) + v >= int('z'))
            {
                text[i] = int(text[i]) - 26 + v;
                

            }else{
                text[i] = int(text[i]) + v;
            }
        }

        if (int(text[i]) <= int('Z') && int(text[i]) >= int('A'))
        {
            if (int(text[i]) + v >= int('Z'))
            {
                text[i] = int(text[i]) - 26 + v;
            }
            else
            {
                text[i] = int(text[i]) + v;
            }
        }
    }

    cout << text;

    return 0;
}