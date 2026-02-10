#include <iostream>
#include "Estudiant.h"


Estudiant::Estudiant(string nom, int any_naixement, int num_ass){
    this->nom = nom;
    this->any_naixement = any_naixement;
    this->num_ass = num_ass; 
}

int Estudiant::getEdat(){
    return 2026 - any_naixement;
}

void Estudiant::print(){
    cout << "Estudiant (Nom => " << nom << ", Any de naixement => " << any_naixement << ", Assignatures => " << num_ass << ")" << endl;
}