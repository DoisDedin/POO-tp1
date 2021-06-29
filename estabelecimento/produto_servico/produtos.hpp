#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Produtos{
        int quantidade;
        double preco;
    public:
        Produtos();
        Produtos(int quantidade, double preco);
        ~Produtos();

        void setQuantidade(int quantidade);
        void setPreco(double preco);

        int getQuantidade() const;
        double getPreco() const;

        void tiraDoEstoque(int qtdVendidos, int quantidade);

};
#endif