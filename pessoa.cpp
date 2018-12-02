#include "pessoa.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

Pessoa::Pessoa(string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador,double _cpfCnpj){
    nome = _nome;
    endereco = _endereco;
    dataDeNascimento = _dataDeNascimento;
    isPessoaFisica = _isPessoaFisica;
    isDoador = _isDoador;
    cpfCnpj = _cpfCnpj;
}

void Pessoa::setNome(string _nome) { nome = _nome;}

void Pessoa::setEndereco(string _endereco) { endereco = _endereco;}

void Pessoa::setDataDeNascimento(string _dataDeNascimento) { dataDeNascimento = _dataDeNascimento;}

void Pessoa::setIsPessoaFisica(bool _isPessoaFisica) { isPessoaFisica = _isPessoaFisica;}

void Pessoa::setIsDoador(bool _isDoador) { isDoador = _isDoador;}

void Pessoa::setCpfCnpj(int _cpfCnpj) { cpfCnpj = _cpfCnpj;}

string Pessoa::getNome(){return nome;}

string Pessoa::getEndereco(){return endereco;}

string Pessoa::getDataDeNascimento(){return dataDeNascimento;}

bool Pessoa::getIsPessoaFisica(){return isPessoaFisica;}

bool Pessoa::getIsDoador(){return isDoador;}

double Pessoa::getCpfCnpj(){return cpfCnpj;}
