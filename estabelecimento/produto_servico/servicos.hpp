#ifndef SERVICOS_HPP
#define SERVICOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Servicos{
        string nome;
        double preco;

    public:
        Servicos();
        Servicos(string nome, double preco);
        ~Servicos();

        void setNome(string nome);
        void setPreco(double preco);

        string getNome() const;
        double getPreco() const;

};
#endif