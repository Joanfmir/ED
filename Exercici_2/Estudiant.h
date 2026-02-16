#ifndef ESTUDIANT_H
#define ESTUDIANT_H

#include <iostream>
using namespace std;

const int ANY_ACTUAL = 2026;



class Estudiant{
    private:
        string nom;
        int any_naixement;
        int num_ass; 

    public:
        Estudiant(string nom, int any_naixement, int num_ass);
        void print();
        int getEdat();
        void any_correcte();

};


#endif