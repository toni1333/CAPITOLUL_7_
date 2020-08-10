#include <iostream>
#include "Candelabru.h"

using namespace std;

void Candelabru::ConfigureazaCandelabru(unsigned short nrB){
    nrBecuri = nrB;
    listaBecuri = new BecReglabil[nrBecuri];         // aici avem un pointer spre Heap...
    for(int i=0; i<nrBecuri; ++i) {
        listaBecuri[i].Setputerecurenta(0);
        listaBecuri[i].Setputeremaxima(100);
    }
}

void Candelabru::AprindeLumina(){
    for(int i=0; i<nrBecuri; ++i){
        listaBecuri[i].Aprinde();
    }
}

void Candelabru::StingeLumina(){
    for(int i=0; i<nrBecuri; ++i){
        listaBecuri[i].Stinge();
    }
}

void Candelabru::MaresteLumina(unsigned short mareste){
    for(int i=0; i<nrBecuri; ++i) {
        listaBecuri[i].MaresteLumina(mareste);    }
}

void Candelabru::ReduceLumina(unsigned short reduce){
    for(int i=0; i<nrBecuri; ++i) {
        listaBecuri[i].ReduceLumina(reduce);
    }
}

unsigned short Candelabru::PutereMaximaCandelabru(){
    unsigned short sumaMAX=Z;
    for(int i=0; i<nrBecuri; ++i){
        sumaMAX+=listaBecuri[i].Getputeremaxima();
    }
    return  sumaMAX;
}

bool Candelabru::StareCandelabru(){
    for(int i=0; i<nrBecuri; ++i) {
        if(listaBecuri[i].Getputerecurenta()>Z){
            return true;}
            else {return false;}
            }
            }
