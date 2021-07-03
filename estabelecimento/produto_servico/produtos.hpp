#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

#include <iostream>
#include <string>

using namespace std;

class Produtos{
    private:
        string nome;
        int quantidade;
        double preco;
    public:
        ~Produtos();
        Produtos();
        Produtos(int quantidade, double preco);

        void setNome(string nome);
        void setQuantidade(int qunatidade);
        void setPreco(double preco);

        string getNome() const;
        int getQuantidade() const;
        double getPreco() const;

        void tiraDoEstoque(int qtdVendidos, int quantidade);

};
#endif