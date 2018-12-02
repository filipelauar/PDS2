#include "pontoDeColeta.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

PontoDeColeta::PontoDeColeta::PontoDeColeta( string _rua, string _bairro, int _numero, string _complemento){
    rua = _rua;
    bairro = _bairro;
    numero = _numero;
    complemento = _complemento;
};

string PontoDeColeta::PontoDeColeta::getRua(){return rua;}
string PontoDeColeta::PontoDeColeta::getBairro(){return bairro;}
int PontoDeColeta::PontoDeColeta::getNumero(){return numero;}
string PontoDeColeta::PontoDeColeta::getComplemento(){return complemento;}

void PontoDeColeta::PontoDeColeta::setRua(string _rua) { rua = _rua;}
void PontoDeColeta::PontoDeColeta::setBairro(string _bairro) { bairro = _bairro;}
void PontoDeColeta::PontoDeColeta::setNumero(int _numero) { numero = _numero;}
void PontoDeColeta::PontoDeColeta::setComplemento(string _complemento) { complemento = _complemento;}
