//
// Created by alexa on 4/4/2024.
//

#ifndef POO_LAB_2023_2024_FORMA_H
#define POO_LAB_2023_2024_FORMA_H

#include <iostream>


class Forma {
protected:
    double inaltime;
private:
    //metoda pura; care face ca Forma sa devina clasa abstracta, ce nu se mai poate instantia (nu mai pot avea Forma forma; vezi erori daca decomentezi in testele anterioare)
    virtual double AriaBazei() = 0;
    //metoda ce se foloseste de metoda pura AriaBazei, pentru a defini volumul
    //pentru ca AriaBazei este virtuala; nu mai este nevoie neaparat sa trecem si aici virtual
    double Volum();
public:
    //constructori I (param si neparam)
    Forma();
    Forma(double inaltime);
    //destructor
    //este nevoie sa fie virtual, pentru ca vom folosi ierarhia pentru upcasting si downcasting, si e nevoie sa se poata identifica dinamic ce avem in Forma* pentru a se apela si destructorul derivatelor (exp Forma Patrat)
    virtual ~Forma();

    //getter si setter
    double GetInaltime();
    void SetInaltime(double inaltime);

    //metode ce vor fi suprascrise (override) - deci si metode care trebuie sa fie virtuale
    virtual void Afisare();
    //TODO implementare CantitateFrisca
    virtual double CantitateFrisca() {return 0;}
    //ne folosim de Volum() si indirect de AriaBazei() pentru a afla cantitatea de gem
    //pentru ca AriaBazei este virtuala; nu mai este nevoie neaparat sa trecem si aici virtual
    double CantitateGem();
};


#endif //POO_LAB_2023_2024_FORMA_H
