#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Produtos{
    private:
        string nome;
        int quantidade;
        double preco;
    public:
        ~Produtos();
        Produtos();
        Produtos(string = "", int = 0, double = 0.0);

        void setNome(string nome);
        void setQuantidade(int qunatidade);
        void setPreco(double preco);

        string getNome() const;
        int getQuantidade() const;
        double getPreco() const;

        void tiraDoEstoque(int qtdVendidos, int quantidade);
};
#endif