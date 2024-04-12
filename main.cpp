#include <iostream>
#include "bunicuta/BunicutaTest.h"
#include "bunicuta/MeniuBucatariaBunicutei.h"

void BunicutaTestIndividuale() {
    BunicutaTest bunicutaTest;
    bunicutaTest.Test();
}

int main() {
//    BunicutaTestIndividuale();

    MeniuBucatariaBunicutei menu;
    menu.RunMenu();

    return 0;
}
