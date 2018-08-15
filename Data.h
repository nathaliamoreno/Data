#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data{

public:
    int dia, mes, ano;

    Data (int dia, int mes, int ano);
    void AvancarDia();

    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);

    int getDia();
    int getMes();
    int getAno();

};

#endif // DATA_H_INCLUDED
