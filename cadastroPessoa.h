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
    update();
    deleted(Pessoa &p);
    listarUsuarios();
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

    CadastroPessoa::listarUsuarios() {
        vector<Pessoa*> :: iterator itV;
        for(itV = listaDeUsuarios.begin(); itV != listaDeUsuarios.end(); ++itV) {

            cout<< (*itV)->getNome() <<endl;
        }

    }

#endif // CADASTROPESSOA_H_INCLUDED
