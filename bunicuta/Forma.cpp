//
// Created by alexa on 4/4/2024.
//

#include "Forma.h"

//constructori I (param si neparam)
Forma::Forma(): inaltime(0) {
//    std::cout << "CI Forma neparam" << std::endl;
}

Forma::Forma(double inaltime): inaltime(inaltime) {
//    std::cout << "CI Forma param" << std::endl;
}

//destructor
Forma::~Forma() {
//    std::cout << "D Forma" << std::endl;
}

//getter so setter
double Forma::GetInaltime() {
    return inaltime;
}

void Forma::SetInaltime(double inaltime) {
    this -> inaltime = inaltime;
}

//metode ce vor fi suprascrise (override)
void Forma::Afisare() {
    std::cout << "Forma: inaltime - " << inaltime << std::endl;
}