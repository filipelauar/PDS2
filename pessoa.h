#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>


using namespace std;

class Pessoa
{
    public:
        Pessoa(string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador,double _cpfCnpj);
        //virtual ~pessoa();
    
        void verificarData(string _data);
        void verificarCpfCnpj(bool _isPessoaFisica, string _cpfCnpj);

        void setNome(string _nome);
        void setEndereco(string _endereco);
        void setDataDeNascimento(string _dataDeNascimento);
        void setIsPessoaFisica(bool _isPessoaFisica);
        void setIsDoador(bool _isDoador);
        void setCpfCnpj(int _cpfCnpj);
        string getNome();
        string getEndereco();
        string getDataDeNascimento();
        bool getIsPessoaFisica();
        bool getIsDoador();
        double getCpfCnpj();

    protected:

    private:
        string nome;
        string endereco;
        string dataDeNascimento;
        bool isPessoaFisica; //1 para pessoaFisica
        bool isDoador; // 1 para doador
        double cpfCnpj;
};





#endif // PESSOA_H
