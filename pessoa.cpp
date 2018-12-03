#include "pessoa.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

Pessoa::Pessoa(string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador,double _cpfCnpj){
    nome = _nome;
    endereco = _endereco;
    dataDeNascimento = verificarData(_dataDeNascimento);
    isPessoaFisica = _isPessoaFisica;
    isDoador = _isDoador;
    cpfCnpj = _cpfCnpj;
}

string Pessoa::verificarData(string _data)
{
    bool verificador = false;
    string data = _data;

    while(verificador == false)
    {
        verificador = true;

        if(data.size() == 10 && ((data[2] == '/' && data[5] == '/') || (data[2] == '-' && data[5] == '-')))
        {

            string delimiter = "/";
            string dia = data.substr(0, 2);
            string mes = data.substr(3, 2);
            string ano = data.substr(6, 4);

            int _dia = atoi(dia.c_str());
            int _mes = atoi(mes.c_str());
            int _ano = atoi(ano.c_str());

            if(_ano < 1900 || _ano > 2018 || _mes < 1 || _mes > 12 || _dia > 31 || _dia < 1)
                verificador = false;
            else if(_dia > 28 && _mes == 2)
                verificador = false;
            else if(_dia > 30 && (_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11))
                verificador = false;
        }
        else
            verificador = false;


        if(verificador == false)
        {
            cout<<"Digite a data no formato DD/MM/AAAA ou DD-MM-AAAA: ";
            cin>>data;
            cout<<endl;
        }
    }   
    
 return data;   
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
