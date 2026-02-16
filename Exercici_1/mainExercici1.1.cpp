#include <iostream>
using namespace std;



int show_menu(string name, vector<string> options){

    int option;

    for(int i = 0; i < options.size(); i++){
        cout << i+1 << "- " << options[i] << endl;
    }
    cin >> option;

    return option;

}


void benvinguda(string name){
    cout << "Benvingut/da a l'assignatura d'estructura de dades " << name << endl;
}

string show_name(){
    string name;
    cout << "Hola, com et dius? " << endl;
    cin >> name;
    cout << "Hola " << name << endl;
    return name;
}

int main(int argc, char** argv){
    int option;
    string name;

    string arr_options[] = {"Sortir", "Benvinguda", "Redefinir nom"};
    vector<string> options(arr_options, arr_options+3);


    name = show_name();

    do{
        option = show_menu(name, options);

        switch(option){
            case 1: cout << "Fins la propera" << endl; break;

            case 2: benvinguda(name); break;

            case 3: name = show_name(); break;

            default: break;

        }

    }while(option != 1);

    return 0;
}