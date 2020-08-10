#ifndef BECREGLABIL_H
#define BECREGLABIL_H


const unsigned short Z=0, S=100;     // declar 2 variabile constante

class BecReglabil{
    public:
        void Setputeremaxima(unsigned short a);
        void Setputerecurenta(unsigned short b);
        short Getputeremaxima();
        short Getputerecurenta();
        void Aprinde();
        void Stinge();
        void MaresteLumina(short mareste);
        void ReduceLumina(short reduce);
        void StareBec();

        void FcatlasutaB75();         // aici am declarat functiile suplimentar
        void FcatlasutaB100();


        BecReglabil();
        virtual ~BecReglabil();

    protected:

    private:
        unsigned short putereMaxima;
        unsigned short putereCurenta;
        bool aprins=0;
};

#endif // BECREGLABIL_H
