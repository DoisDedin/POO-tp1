#ifndef SERVICOS_HPP
#define SERVICOS_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Servicos{
    private:
        string nome;
        string tempo;
        double preco;
    public:

        Servicos();
        ~Servicos();
        void setNome(string nome);
        void setTempo(string tempo);
        void setPreco(double preco);

        string getNome() const;
        string getTempo() const;
        double getPreco() const;
};
#endif