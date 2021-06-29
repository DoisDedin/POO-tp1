#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Produtos{
    private:
        int quantidade;
        double preco;
    public:
        ~Produtos();
        Produtos();
        Produtos(int quantidade, double preco);

        void setQuantidade(int qunatidade);
        void setPreco(double preco);

        int getQuantidade() const;
        double getPreco() const;

        void tiraDoEstoque(int qtdVendidos, int quantidade);

};
#endif