#include <iostream>
#include "Candelabru.h"    // am inclus doar headerul Candelabru

using namespace std;

int main(){
    Candelabru cand3, cand5;
    cand3.ConfigureazaCandelabru(3);
    cand5.ConfigureazaCandelabru(5);
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cand3.AprindeLumina();
    cand5.AprindeLumina();
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cand3.StingeLumina();
    cand5.StingeLumina();
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cand3.MaresteLumina(150);
    cand5.MaresteLumina(150);
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cand3.ReduceLumina(75);
    cand5.ReduceLumina(75);
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cand3.ReduceLumina(30);
    cand5.ReduceLumina(30);
    cout<<"Candelabrul cand3: "<<(cand3.StareCandelabru() ? "aprins" : "stins")<<endl;
    cout<<"Candelabrul cand5: "<<(cand5.StareCandelabru() ? "aprins" : "stins")<<endl<<endl;
    cout<<"Putere maxima cand3 are: "<<cand3.PutereMaximaCandelabru()<<endl;
    cout<<"Putere maxima cand5 are: "<<cand5.PutereMaximaCandelabru()<<endl;

      return 0;
}
