#include <iostream>
#include <cstring>

using namespace std;

struct pasisveikinimas
{
    string pir;
    string antr = "* ";
    string trec = "* ";
    int rows;
    string name;
    void work ()
    {
        int b;
        cout << "Iveskite varda: ";
        cin >> name;
        cout << "Iveskite eiluciu skaiciu: ";
        cin >> rows;
        int a = name.length();
        char last = name.at(a-1);
        string pasv1 = "Sveikas, ", pasv2 = "Sveika, ";
        if (last == 's') b = pasv1.length();
        else b = pasv2.length();
        pir.append(a+b+5, '*');
        for (int i = 0; i <= a+b; i++) antr.append (" ");
        antr.append (" *");
        if (last == 's') trec.append (pasv1 + name + "! *");
        else trec.append (pasv2 + name + "! *");
        cout << pir << endl;
        for (int i = 0 ; i < rows; i++) cout << antr << endl;
        cout << trec << endl;
        for (int i = 0; i < rows; i++) cout << antr << endl;
        cout << pir << endl;
    }
};

int main()
{
    pasisveikinimas x;
    x.work();
    return 0;
}
