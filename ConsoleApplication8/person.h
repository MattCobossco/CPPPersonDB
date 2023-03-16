#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string pname, string psurname, int page);
    ~Person();

public:
    string name;
    string surname;
    int age;

private:
    string _name;
    string _surname;
    int _age;

public:
    void setName(string name);
    string getName();
    void setSurname(string surname);
    string getSurname();
    void setAge(int age);
    int getAge();
};
