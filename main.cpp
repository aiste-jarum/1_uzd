#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name;
    cout << "Iveskite varda: " << endl;
    cin >> name;
    int a = name.length();
    string pir, antr = "* ", trec = "* ";
    string pasv1 = "Sveikas, ";
    int b = pasv1.length();
    pir.append(a+b+5, '*');
    for (int i = 0 ; i <= a+b; i++) antr.append (" ");
    antr.append (" *");
    trec.append("Sveikas, " + name + "! *");
    string ketv = antr, penk = pir;
    cout<< pir << endl << antr<< endl << trec << endl << ketv << endl << penk << endl;
    }
