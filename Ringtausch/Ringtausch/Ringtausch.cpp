#include <iostream>
#include <cstring>

using namespace std;

void ringtausch(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
    //cout << "a=" << *a << endl;
    //cout << "b=" << *b << endl;
}

void ringtausch_st(const char** a,const char** b)
{
    const char* temp = *a;
    *a = *b;
    *b = temp;
}

typedef struct Person_t
{
    char Anrede[5];
    char Vorname[50];
    char Nachname[50];
    int Alter;
};
void ringtausch_struct(Person_t* a, Person_t* b)
{
    Person_t temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    //Ringtausch mit ganzen Zahlen
    cout << "Ringtausch mit ganzen Zahlen" << endl;
    
    int a = 47, b = 11;
    cout << "a=" << a <<", " << "b=" << b << endl;
    
    ringtausch(&a, &b);
    cout << "Nachdem Ringtausch" << endl;
    cout << "a=" << a << ", " << "b=" << b << endl;
    
    //Ringtausch mit Strings
    cout << "\nRingtausch mit Strings" << endl;
    
    const char* a_string = "Hallo";
    const char* b_string = "Welt";
    cout << a_string << " " << b_string << endl;
    
    ringtausch_st(&a_string, &b_string);
    cout << "Nachdem Ringtausch" << endl;
    cout << a_string << " " << b_string << endl;

    //Ringtausch von Strukturen
    cout << "\nRingtausch von Strukturen" << endl;

    Person_t a_struct, b_struct;
    strcpy_s(a_struct.Anrede, "Herr");
    strcpy_s(a_struct.Vorname, "Herbert");
    strcpy_s(a_struct.Nachname, "Meyer");
    a_struct.Alter = 42;
    strcpy_s(b_struct.Anrede, "Frau");
    strcpy_s(b_struct.Vorname, "Erika");
    strcpy_s(b_struct.Nachname, "Mustermann");
    b_struct.Alter = 46;
    cout << "Person 1" << endl;
    cout << "Name: " << a_struct.Anrede << " " << a_struct.Vorname << " " << a_struct.Nachname << endl;
    cout << "Alter: " << a_struct.Alter << endl;
    cout << "Person 2" << endl;
    cout << "Name: " << b_struct.Anrede << " " << b_struct.Vorname << " " << b_struct.Nachname << endl;
    cout << "Alter: " << b_struct.Alter << endl;
    
    ringtausch_struct(&a_struct, &b_struct);
    cout << "\n Nach dem Ringtausch" << endl;
    cout << "Person 1" << endl;
    cout << "Name: " << a_struct.Anrede << " " << a_struct.Vorname << " " << a_struct.Nachname << endl;
    cout << "Alter: " << a_struct.Alter << endl;
    cout << "Person 2" << endl;
    cout << "Name: " << b_struct.Anrede << " " << b_struct.Vorname << " " << b_struct.Nachname << endl;
    cout << "Alter: " << b_struct.Alter << endl;

    return 0;
}

