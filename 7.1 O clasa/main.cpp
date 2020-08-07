#include <iostream>
#include "BecReglabil.h"
using namespace std;

int main(){
   BecReglabil bec75;
   BecReglabil bec100;
   bec75.Setputerecurenta(0);
   bec75.Setputeremaxima(75);
   bec100.Setputerecurenta(0);
   bec100.Setputeremaxima(100);
   bec75.Aprinde();
   bec75.StareBec();
   bec100.Aprinde();
   bec100.StareBec();
   bec75.Stinge();
   bec75.StareBec();
   bec100.Stinge();
   bec100.StareBec();
   bec75.MaresteLumina(90);
   bec75.StareBec();
   bec100.MaresteLumina(90);
   bec100.StareBec();
   bec75.ReduceLumina(75);
   bec75.StareBec();
   bec100.ReduceLumina(75);
   bec100.StareBec();
   cout<<"\n";
   cout<<"bec75: "<<bec75.Getputerecurenta()<<endl;
   cout<<"bec100: "<<bec100.Getputerecurenta()<<endl;
   cout<<"\n";
   bec75.FcatlasutaB75();             // aici am facut suplimentar 2 functii pentru
   bec100.FcatlasutaB100();           //    fiecare bec sa mi arate cat la suta este folosit

    return 0;
}
