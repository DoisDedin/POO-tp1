#include "produtos.hpp"

        Produtos::Produtos(){}
        Produtos::Produtos(int quantidade, double preco):quantidade(quantidade), preco(preco){}

        void Produtos::setQuantidade(int qunatidade){
            this->quantidade = qunatidade;
        }
        void Produtos::setPreco(double preco){
            this->preco = preco;
        }

        int Produtos::getQuantidade() const{
            return quantidade;
        }
        double Produtos::getPreco() const{
            return preco;
        }

        void Produtos::tiraDoEstoque(int qtdVendidos, int quantidade){
            if (quantidade < qtdVendidos){
                cout << "A quantidade desejada excede o estabelecimento\n";
                cout << "quantidade em estabelecimento: \n" << getQuantidade();
            }
            else setQuantidade(quantidade - qtdVendidos);
        }