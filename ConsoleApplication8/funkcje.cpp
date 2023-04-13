#include <iostream>
#include <string>
#include "funkcje.h"
#include "person.h"
#include <fstream>

void Funkcje::Dodaj() {
    string a;
    Person obekt;
    cout << "Person Name:";
    cin >> a;
    obekt.setName(a);

    string b;
    cout << "Person Surname:";
    cin >> b;
    obekt.setSurname(b);

    int c;
    cout << "Person Age:";
    cin >> c;
    obekt.setAge(c);

    //cout << myObj.getName() << std::endl;

    ofstream MyFile("filename.txt", ios::app);
    MyFile << a;
    MyFile << "." << b;
    MyFile << "." << c;
    MyFile << "." << "\n\r";
    MyFile.close();
}

void Funkcje::Wywal() {
    string line;
    int line_no, count = 0;

    cout << "Podaj numer linii do usuniecia: ";
    cin >> line_no;

    ifstream myfile("filename.txt");

    ofstream temp("temp.txt");

    while (getline(myfile, line)) {

        count++;
        if (count != line_no) {

            temp << line << endl;
        }
    }

    myfile.close();
    temp.close();
    remove("filename.txt");
    rename("temp.txt", "filename.txt");

}

void Funkcje::Wyjdz() {
    exit(0);
}

void Funkcje::Wyszukaj() {
    string line;
    int offset;
    string szukaj = "";
    ifstream myfile("filename.txt");

    cout << "Dane typiarza: ";
    cin >> szukaj;

    while (getline(myfile, line)) {
        if ((offset = line.find(szukaj, 0)) != string::npos) {
            cout << "Jest: " << line << endl;
        }
    }
    myfile.close();
}

void Funkcje::Edytuj() {
    Funkcje obekt2;
    ifstream myfile("filename.txt");
    ofstream temp("temp.txt");
    int id = 0, zmodyfikuj;
    string line;

    cout << "Podaj linie do zmodyfikowania" << "\n";
    cin >> zmodyfikuj;

    while (getline(myfile, line)) {
        id++;
        if (id != zmodyfikuj) {
            temp << line << endl;
        }
        else if (id = zmodyfikuj) {
            obekt2.Dodaj();
        }
    }
    myfile.close();
    temp.close();

    remove("filename.txt");
    rename("temp.txt", "filename.txt");
}
