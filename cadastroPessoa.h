#ifndef CADASTROPESSOA_H_INCLUDED
#define CADASTROPESSOA_H_INCLUDED
#include <vector>
#include <iostream>
#include <stdio.h>
#include <iterator>
#include "pessoa.h"
#include "cadastro.h"
#include <algorithm>

using namespace std;

class CadastroPessoa : Cadastro {

public:
    CadastroPessoa(){}

    create(Pessoa &p);
    update(Pessoa &p, string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador, double _cpfCnpj);
    deleted(Pessoa &p);
    void listarUsuarios();
    vector<Pessoa*> listaDeUsuarios;


    protected:

    private:


};

    CadastroPessoa::create(Pessoa &p){

        listaDeUsuarios.push_back(&p);

    }

    CadastroPessoa::deleted(Pessoa &p) {
        if (find(listaDeUsuarios.begin(), listaDeUsuarios.end(), &p) != listaDeUsuarios.end()){

            vector<Pessoa*>::iterator itV;
            for(itV = listaDeUsuarios.begin(); itV != listaDeUsuarios.end(); ++itV) {
                if ((*itV)->getCpfCnpj() == p.getCpfCnpj()){
                    listaDeUsuarios.erase(itV);
                }

            }
        } else {
            cout << "Usuário nao Cadastrado" << endl;
        }
    }

    void CadastroPessoa::listarUsuarios() {
        vector<Pessoa*> :: iterator itV;
        for(itV = listaDeUsuarios.begin(); itV != listaDeUsuarios.end(); ++itV) {

            cout<< (*itV)->getNome() <<endl;
        }

    }

    CadastroPessoa::update(Pessoa &p, string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador, double _cpfCnpj) {
        if (find(listaDeUsuarios.begin(), listaDeUsuarios.end(), &p) != listaDeUsuarios.end()){

            vector<Pessoa*>::iterator itV;
            for(itV = listaDeUsuarios.begin(); itV != listaDeUsuarios.end(); ++itV) {
                if ((*itV)->getCpfCnpj() == p.getCpfCnpj()){
                    (*itV)->setNome(_nome);
                    (*itV)->setEndereco(_endereco);
                    (*itV)->setDataDeNascimento(_dataDeNascimento);
                    (*itV)->setCpfCnpj(_cpfCnpj);
                    (*itV)->setIsPessoaFisica(_isPessoaFisica);
                    (*itV)->setIsDoador(_isDoador);
                }
            }
        }
    }

#endif // CADASTROPESSOA_H_INCLUDED
