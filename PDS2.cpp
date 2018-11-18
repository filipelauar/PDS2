#include <stdio.h>
#include <time.h>
#include "Agendamento.h"
#include "pessoa.h"
#include "cadastro.h"
#include "cadastroPessoa.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "PontoDeColeta.h"

using namespace std;

int main() {

    Pessoa *p1 = new Pessoa("Daniel Quirino", "Rua João Fernandes", "10/05/1997", true, true , 13494658609);
    Pessoa *p2 = new Pessoa("Filipe Lauar", "Avenida Miguel Perrela", "20/02/1996", true, false , 13879076564);
    Pessoa *p3 = new Pessoa("Pedro Vieira", "Rua Fernando de Albuquerque", "08/09/1994", false, false , 11568905407);

    CadastroPessoa *cp = new CadastroPessoa();
    cp->create(*p1);
    cp->create(*p2);
    cp->create(*p3);

    cp->listarUsuarios();
    cout << " ----------------------------------------------------------- " << endl;

    PontoDeColeta *pontCol = new PontoDeColeta("Rua Alameda dos Anjos", "Liberdade", 129, "apt 107");

    Agendamento *ag1 = new Agendamento("18/11/2018", *pontCol, *p1, *p2, "Papelao");
    cout << "Rua: " << ag1->getLocal().getRua() << endl;

    cp->deleted(*p2);
    cp->listarUsuarios();
    cout << " ----------------------------------------------------------- " << endl;
}
