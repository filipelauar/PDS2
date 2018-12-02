#include "CadastroAgendamento.h"
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void CadastroAgendamento::create(Agendamento &p){

    listaDeAgendamentos.push_back(&p);

}

void CadastroAgendamento::deleted(Agendamento &p) {
    if (find(listaDeAgendamentos.begin(), listaDeAgendamentos.end(), &p) != listaDeAgendamentos.end()){

        vector<Agendamento*>::iterator itV;
        for(itV = listaDeAgendamentos.begin(); itV != listaDeAgendamentos.end(); ++itV) {
            if ((*itV)->getData() == p.getData()){
                listaDeAgendamentos.erase(itV);
            }

        }
    } else {
        cout << "Agendamento nao Cadastrado" << endl;
    }
}

void CadastroAgendamento::listarAgendamentos() {
    vector<Agendamento*> :: iterator itV;
    for(itV = listaDeAgendamentos.begin(); itV != listaDeAgendamentos.end(); ++itV) {

        cout<< (*itV)->getData() <<endl;
    }

}
