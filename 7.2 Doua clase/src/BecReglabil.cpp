#include <iostream>
#include "BecReglabil.h"

using namespace std;

void BecReglabil::Setputeremaxima(unsigned short a){
putereMaxima=a;
}
void BecReglabil::Setputerecurenta(unsigned short b){
putereCurenta=b;
}
short BecReglabil::Getputeremaxima(){
return putereMaxima;
}
short BecReglabil:: Getputerecurenta(){
return putereCurenta;
}
void BecReglabil::Aprinde(){aprins=true;
        putereCurenta=putereMaxima;}
void BecReglabil::Stinge(){aprins=false;
        putereCurenta=Z;}
void BecReglabil::MaresteLumina(short mareste){putereCurenta+=mareste;
        if(putereCurenta>putereMaxima){
        putereCurenta=putereMaxima;}
        aprins=true; }
void BecReglabil::ReduceLumina(short reduce){
        if(putereCurenta<=reduce){putereCurenta=Z;
        aprins=false;}
        else {putereCurenta-=reduce;
        aprins=true;}
        }
void BecReglabil::StareBec(){if (aprins==true){cout<<"Becul e aprins!"<<endl;}
                        else if(aprins==false){cout<<"Becul e stins!"<<endl;}}
void BecReglabil::FcatlasutaB75(){                   //  prima functie pentru bec75
        unsigned short x=0,y,z;        // pentru precizie mai mare puteam folosi x de tip float dar membrii privati sunt short.
        y=Getputerecurenta();
        z=Getputeremaxima();
        x=((y*S)/z);                         // am foloist formula cu o necunoscuta("regula de 3 simpla")
        cout<<"Bec75 functioneaza la: "<<x<<" % din capacitate"<<endl;}
void BecReglabil::FcatlasutaB100(){                  // a doua functie pentru bec100
        unsigned short x=0,y,z;
        y=Getputerecurenta();
        z=Getputeremaxima();
        x=((y*S)/z);                             // aceasi formula S fiind (100%)
        cout<<"Bec100 functioneaza la: "<<x<<" % din capacitate"<<endl;}

BecReglabil::BecReglabil()
{
    //ctor
}
BecReglabil::~BecReglabil()
{
    //dtor
}
