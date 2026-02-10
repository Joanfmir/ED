#include <iostream>
using namespace std;




int main(){
    string nom;
    cout << "Introdueix el teu nom: " << endl;
    cin >> nom;
    cout << "Hola " << nom << "!" << endl;



    string arr_options[] = {"Sortir", "Benvinguda", "Redefinir el nom" };
    int opcio = 0;

    
    do{
        for(int i = 0; i < 3; i++){
            cout << i + 1 << " - " << arr_options[i] << endl;
        }
        cin >> opcio;

        switch (opcio)
        {
            case 1: cout << "Sortint" << endl;
                break;
            case 2: 
                cout << "Benvingut a l'assignatura d'ED " << nom << endl;
                break;
            
            case 3:
                cout << "Introdueix el nou nom que vols posar" << endl;
                cin >> nom;
                cout << "El teu nom ha estat canviat a " << nom << endl;
                break;
            
            default: cout << "Opció no vàlida" << endl; break;

        }

    }while(opcio!= 1);
    
    cout <<"Fins aviat " << nom << "!" << endl;

}


