#include <iostream>
#include <string>
#include "person.h"
#include "funkcje.h"
#include <fstream>



Person::Person() {
    cout << "Deafult Constructor" << endl;
    _name = "";
    _surname = "";
    _age ;
}
Person::Person(string sname, string ssurname, int sage) {
    cout << "Overloaded Constructor for " << sname << ssurname << sage << endl;
    _name = sname;
    _surname = ssurname;
    _age = sage;
}
Person::~Person() {
    cout << " Destructor for " << _name << _surname << _age << endl;
}

void Person::setName(string name) {
    _name = name;
}
string Person::getName() {
    return _name;
}

void Person::setSurname(string surname) {
    _surname = surname;
}
string Person::getSurname() {
    return _surname;
}

void Person::setAge(int age) {
    _age = age;
}
int Person::getAge() {
    return _age;
}
 
void Funkcje::Pokaz() {
    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline(MyReadFile, myText)) {
        cout << myText << "\n";
    }
    MyReadFile.close();
}
