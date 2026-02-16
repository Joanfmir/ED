#include "Estudiant.h"
#include <iostream>
using namespace std;



void informarEstudiant(int &contador){
    string nom;
    int anyNaixement;
    int numAss;

    cout << "Quin es el teu nom? " << endl;
    cin >> nom;

    cout << "Quantes assignatures fas?" << endl;
    cin >> numAss;

    while(true){
        cout << "Quin any vas neixer? " << endl;
        cin >> anyNaixement;

        try{
            Estudiant e(nom, anyNaixement, numAss); 
            e.print();
            int edat = e.getEdat();
            cout << "Edat del nou estudiant: " << edat << endl;

            contador++;
            break; 
        }
        catch(const std::invalid_argument& ex){
            cout << "Error: " << endl;
            cout << "Introdueix un any valid (1.." << ANY_ACTUAL << ")." << endl;
        }
    }
}


int menu(){
    int opcio;
    cout << endl;
    cout << "1 - Sortir" << endl;
    cout << "2 - Informar estudiant" << endl;
    cout << "Opcio: ";
    cin >> opcio;
    return opcio;
}


int main(){ 

    int opcio;
    int contadorEstudiants = 1;

    do{
        opcio = menu();
        switch(opcio){

            case 1:
                cout << "Sortint... " << endl;
                break;

            case 2:
                cout << "Estudiant: " <<  contadorEstudiants << endl;
                informarEstudiant(contadorEstudiants); 
                break;
                
            default: cout << "Opció no valida"; break;

        }
    }while(opcio!= 1);

}