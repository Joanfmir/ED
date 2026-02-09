#include <iostream>
using namespace std;




int main(){
    string nom;
    cout << "Introdueix el teu nom: " << endl;
    cin >> nom;


    string arr_options[] = {"Sortir", "Benvinguda", "Redefinir el nom" };
    int opcio = 0;

    for(int i = 0; i < 3; i++){
        cout << i + 1 << " - " << arr_options[i] << endl;
    }

    
    cin >> opcio;
    if(opcio == 1){
        cout <<"Fins aviat " << nom << "!" << endl;
        return 0;
    }
    



    do{
        for(int i = 0; i < 3; i++){
            cout << i + 1 << " - " << arr_options[i] << endl;
        }
        cin >> opcio;

    }while(opcio!= 1);
    
    cout <<"Fins aviat " << nom << "!" << endl;

}


