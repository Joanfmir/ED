#include <iostream>
#include <string>
#include "Estudiant.h"
#include <stdexcept>


Estudiant::Estudiant(std::string nom, int any_naixement, int num_ass) {
    this->nom = nom;
    this->any_naixement = any_naixement;
    this->num_ass = num_ass;

    any_correcte();
}

void Estudiant::any_correcte() {
    if (any_naixement <= 0 || any_naixement > ANY_ACTUAL) {
        throw std::invalid_argument("Any incorrecte / No vàlid");
    }
}

int Estudiant::getEdat() {
    return ANY_ACTUAL - any_naixement;
}

void Estudiant::print() {
    std::cout << "Estudiant (Nom => " << nom
              << ", Any de naixement => " << any_naixement
              << ", Assignatures => " << num_ass << ")"
              << std::endl;
}
