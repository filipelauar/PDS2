#ifndef PONTODECOLETA_H_INCLUDED
#define PONTODECOLETA_H_INCLUDED
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class PontoDeColeta
{
public:
    PontoDeColeta( string _rua, string _bairro, int _numero, string _complemento){
        rua = _rua;
        bairro = _bairro;
        numero = _numero;
        complemento = _complemento;
    };
    string getRua(){return rua;}
    string getBairro(){return bairro;}
    int getNumero(){return numero;}
    string getComplemento(){return complemento;}

    void setRua(string _rua) { rua = _rua;}
    void setBairro(string _bairro) { bairro = _bairro;}
    void setNumero(int _numero) { numero = _numero;}
    void setComplemento(string _complemento) { complemento = _complemento;}

    protected:

    private:
        string rua;
        string bairro;
        int numero;
        string complemento;

};

#endif // PONTODECOLETA_H_INCLUDED
