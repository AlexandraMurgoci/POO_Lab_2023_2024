#include <iostream>
#include "bunicuta/BunicutaTest.h"
#include "bunicuta/MeniuBucatariaBunicutei.h"

void BunicutaTestIndividuale() {
    BunicutaTest bunicutaTest;
    bunicutaTest.Test();
}

int main() {
//    BunicutaTestIndividuale();

    BucatariaBunicutei *bucatarie = new BucatariaBunicutei();

    MeniuBucatariaBunicutei menu;
    menu.SetBucatarie(bucatarie);

    menu.RunMenu();

    delete bucatarie;

    //apelare metoda statica
//    std::vector<std::string> comenzi = MeniuBucatariaBunicutei::GetAllCommands();
    //se poate apela si folosind un obiect
//    comenzi = menu.GetAllCommands();

    return 0;
}
