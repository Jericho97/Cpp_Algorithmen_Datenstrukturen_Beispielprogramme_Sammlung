#include <iostream>

using namespace std;

int Textsuche(const char* Text, char* P)
{
    bool gefunden;
    int TextPos, PatternPos, temp;
    gefunden = false; TextPos = 0; PatternPos = 0;
    while ((gefunden == false) && (Text[TextPos] != 0))
    {
        while ((Text[TextPos] != P[0]) && (Text[TextPos] != 0))
        {
            TextPos++;
        }
        PatternPos = 0; temp = TextPos; // Zähler zurücksetzen
        while ((Text[TextPos] == P[PatternPos]) && (P[PatternPos] != 0))
        {
            TextPos++; PatternPos++; // Immer ein Zeichen weiter
        }
        if (P[PatternPos] == 0) // Die Suche war erfolgreich
        {
            gefunden = true;
        }
    }
    if (gefunden == true) { return temp;  }
    else { return -1; }
}

int main(void)
{
    int Pos;
    char P[100];
    const char* Text = "Ich bin ein einfacher Text. Suche bitte in mir nach einem Wort.";
    cout << "Text: " << Text << endl;
    cout << "Zu suchendes Wort: "; cin >> P;
    Pos = Textsuche(Text, P);
    if (Pos >= 0)
    {
        cout << "Das Wort " << P << " wurde an der Position " << Pos << " gefunden" << endl;
    }
    else
    {
        cout << "Das zu suchende Wort wurde nicht gefunden" << endl;
    }
    return 0;
}
