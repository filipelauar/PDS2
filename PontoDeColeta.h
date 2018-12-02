#ifndef PONTODECOLETA_H_INCLUDED
#define PONTODECOLETA_H_INCLUDED
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class PontoDeColeta
{
    public:
        PontoDeColeta( string _rua, string _bairro, int _numero, string _complemento);
        string getRua();
        string getBairro();
        int getNumero();
        string getComplemento();

    void setRua(string _rua);
    void setBairro(string _bairro);
    void setNumero(int _numero);
    void setComplemento(string _complemento);

    protected:

    private:
        string rua;
        string bairro;
        int numero;
        string complemento;

};

#endif // PONTODECOLETA_H_INCLUDED
