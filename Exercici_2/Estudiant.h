#ifndef ESTUDIANT_H
#define ESTUDIANT_H

#include <iostream>
using namespace std;



class Estudiant{
    private:
        string nom;
        int any_naixement;
        int num_ass; 

    public:
        Estudiant(string nom, int any_naixement, int num_ass);
        void print();
        int getEdat();

};


#endif