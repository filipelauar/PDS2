#ifndef RESIDUO_H_INCLUDED
#define RESIDUO_H_INCLUDED
#include <string>

using namespace std;

class Residuo
{
    public:
        Residuo(bool _solido, string _material, string _descricao) {
            solido = _solido;
            descricao = _descricao;
            material = _material;
        }

        void setSolido(bool _solido) {solido = _solido;}
        void setMateria(bool _material) {material = _material;}
        void setDescricao(bool _descricao) {descricao = _descricao;}

        bool getSolido() {return solido;}
        string getMaterial() {return material;}
        string getDescricao() {return descricao;}

    protected:

    private:
        bool solido;
        string material;
        string descricao;
};

#endif // RESIDUO_H_INCLUDED
