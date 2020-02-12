#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name;
    cout << "Iveskite varda: " << endl;
    cin >> name;
    int a = name.length();
    char last = name.at(a-1);
    string pir, antr = "* ", trec = "* ";
    string pasv1 = "Sveikas, ";
    string pasv2 = "Sveika, ";
    int b;
    if (last == 's') b = pasv1.length();
    else b = pasv2.length();
    pir.append(a+b+5, '*');
    for (int i = 0 ; i <= a+b; i++) antr.append (" ");
    antr.append (" *");
    if (last == 's') trec.append (pasv1 + name + "! *");
    else trec.append (pasv2 + name + "! *");
    string ketv = antr, penk = pir;
    cout<< pir << endl << antr<< endl << trec << endl << ketv << endl << penk << endl;
    }
