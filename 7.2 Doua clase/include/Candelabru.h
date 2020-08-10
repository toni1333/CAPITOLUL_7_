#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "BecReglabil.h"      // am inclus BecReglabil in headerul Candelabru

class Candelabru{
public:
    void ConfigureazaCandelabru(unsigned short);
    void AprindeLumina();
    void StingeLumina();
    void MaresteLumina(unsigned short);
    void ReduceLumina(unsigned short);
    unsigned short PutereMaximaCandelabru();
    bool StareCandelabru();

    ~Candelabru(){
    //dctor
    delete listaBecuri;
    listaBecuri= nullptr;       // sterg pointerul care arata spre heap din destructor
    }
private:
    unsigned short nrBecuri;
    BecReglabil* listaBecuri;
};

#endif // CANDELABRU_H
