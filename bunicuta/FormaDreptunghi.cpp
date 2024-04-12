//
// Created by alexa on 4/12/2024.
//

#include "FormaDreptunghi.h"

double FormaDreptunghi::AriaBazei() {
    return laturaMica * laturaMare;
}

FormaDreptunghi::FormaDreptunghi(): laturaMica(0), laturaMare(0) {}
FormaDreptunghi::FormaDreptunghi(double inaltime, double laturaMica, double laturaMare) : Forma(inaltime), laturaMica(laturaMica), laturaMare(laturaMare) {}
FormaDreptunghi::~FormaDreptunghi() {}

double FormaDreptunghi::GetLaturaMica() {
    return laturaMica;
}
double FormaDreptunghi::GetLaturaMare() {
    return laturaMare;
}
void FormaDreptunghi::SetLaturaMica(double laturaMica) {
    this -> laturaMica = laturaMica;
}
void FormaDreptunghi::SetLaturaMare(double laturaMare) {
    this -> laturaMare = laturaMare;
}

void FormaDreptunghi::Afisare(std::ostream& out) {
    out << "FormaDreptunghi: inaltime - " << inaltime << "; latura mica - " << laturaMica << "; latura mare - " << laturaMare << std::endl;
}

std::istream& operator>>(std::istream& in, FormaDreptunghi& dreptunghi) {
    in >> dreptunghi.laturaMica >> dreptunghi.laturaMare;
    in >> dynamic_cast<Forma&>(dreptunghi);
    return in;
}