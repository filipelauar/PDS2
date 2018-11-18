#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(string _nome, string _endereco, string _dataDeNascimento, bool _isPessoaFisica, bool _isDoador,double _cpfCnpj){
            nome = _nome;
            endereco = _endereco;
            dataDeNascimento = _dataDeNascimento;
            isPessoaFisica = _isPessoaFisica;
            isDoador = _isDoador;
            cpfCnpj = _cpfCnpj;

        }
        //virtual ~pessoa();

        void setNome(string _nome) { nome = _nome;}
        void setEndereco(string _endereco) { endereco = _endereco;}
        void setDataDeNascimento(string _dataDeNascimento) { dataDeNascimento = _dataDeNascimento;}
        void setIsPessoaFisica(bool _isPessoaFisica) { isPessoaFisica = _isPessoaFisica;}
        void setIsDoador(bool _isDoador) { isDoador = _isDoador;}
        void setCpfCnpj(int _cpfCnpj) { cpfCnpj = _cpfCnpj;}
        string getNome(){return nome;}
        string getEndereco(){return endereco;}
        string getDataDeNascimento(){return dataDeNascimento;}
        bool getIsPessoaFisica(){return isPessoaFisica;}
        bool getIsDoador(){return isDoador;}
        double getCpfCnpj(){return cpfCnpj;}

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
