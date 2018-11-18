#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H
#include "pessoa.h"
#include "PontoDeColeta.h"
#include <string>

using namespace std;

class Agendamento {

    public:
        Agendamento(string _data, PontoDeColeta &_local, Pessoa &_doador, Pessoa &_receptor, string _residuos) {
            data = _data;
            local = &_local;
            doador = &_doador;
            receptor = &_receptor;
            residuos = _residuos;
        }

        void setData(string _data) { data = _data;}
        void setLocal(PontoDeColeta &_local) { local = &_local;}
        void setDoador(Pessoa &_doador) { doador = &_doador;}
        void setReceptor(Pessoa &_receptor) { receptor = &_receptor;}
        void setResiduos(string _residuos) { residuos = _residuos;}

        string getData(){return data;}
        PontoDeColeta getLocal(){return *local;}
        Pessoa getDoador(){return *doador;}
        Pessoa getReceptor(){return *receptor;}
        string getResiduos(){return residuos;}

    private:
        string data;
        PontoDeColeta *local;
        Pessoa *doador;
        Pessoa *receptor;
        string residuos;

};

#endif
