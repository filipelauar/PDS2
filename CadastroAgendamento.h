#ifndef CADASTROAGENDAMENTO_H_INCLUDED
#define CADASTROAGENDAMENTO_H_INCLUDED
#include <vector>
#include <iostream>
#include <stdio.h>
#include <iterator>
#include "pessoa.h"
#include "cadastro.h"
#include <algorithm>
#include "Agendamento.h"

using namespace std;

class CadastroAgendamento : Cadastro {

public:
    CadastroAgendamento(){}

    create(Agendamento &p);
    update();
    deleted(Agendamento &p);
    void listarAgendamentos();
    vector<Agendamento*> listaDeAgendamentos;


    protected:

    private:


};

    CadastroAgendamento::create(Agendamento &p){

        listaDeAgendamentos.push_back(&p);

    }

    CadastroAgendamento::deleted(Agendamento &p) {
        if (find(listaDeAgendamentos.begin(), listaDeAgendamentos.end(), &p) != listaDeAgendamentos.end()){

            vector<Agendamento*>::iterator itV;
            for(itV = listaDeAgendamentos.begin(); itV != listaDeAgendamentos.end(); ++itV) {
                if ((*itV)->getData() == p.getData()){
                    listaDeAgendamentos.erase(itV);
                }

            }
        } else {
            cout << "Usuário nao Cadastrado" << endl;
        }
    }

    void CadastroAgendamento::listarAgendamentos() {
        vector<Agendamento*> :: iterator itV;
        for(itV = listaDeAgendamentos.begin(); itV != listaDeAgendamentos.end(); ++itV) {

            cout<< (*itV)->getData() <<endl;
        }

    }


#endif // CADASTROAGENDAMENTO_H_INCLUDED
