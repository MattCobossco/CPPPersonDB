#include <iostream>
#include <string>
#include "menu.h"
#include "funkcje.h"
#include <fstream>

void Menu::menu() {
    Funkcje myObj;
    int x = 0;
    while (x < 6) {
        cout << "|{=-+-=}|:|{=-+-=}|:|{=-+-=}|:|{=-+-=}|:|{=-+-=}|" << "\n";
        cout << "" << "\n";
        cout << "" << "\n";
        cout << "1. Dodaj typa" << "\n";
        cout << "2. Zmodyfikuj typa" << "\n";
        cout << "3. Usun typa" << "\n";
        cout << "4. Wyszukaj typa" << "\n";
        cout << "5. Wyswietl typow" << "\n";
        cout << "6. Ic stont" << "\n";
        cout << "" << "\n";
        cout << "" << "\n";
        cin >> x;


        if (x == 1) {
            myObj.Dodaj();

        }
        else if (x == 2) {
            myObj.Edytuj();
        }
        else if (x == 3) {
            myObj.Wywal();
        }

        else if (x == 4) {
            myObj.Wyszukaj();
        }

        else if (x == 5) {
            myObj.Pokaz();
        }

        else if (x == 6) {
            myObj.Wyjdz();
        }
    }
}