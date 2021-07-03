#include "produtos.hpp"

Produtos::Produtos() {}

Produtos::Produtos(int quantidade, double preco) : quantidade(quantidade), preco(preco) {}

Produtos::~Produtos() {}
void Produtos::setNome(string nome) {
    this->nome = nome;
}

void Produtos::setQuantidade(int qunatidade) {
    this->quantidade = quantidade;
}

void Produtos::setPreco(double preco) {
    this->preco = preco;
}
string Produtos::getNome() const {
    return nome;
}
int Produtos::getQuantidade() const {
    return quantidade;
}

double Produtos::getPreco() const {
    return preco;
}

void Produtos::tiraDoEstoque(int qtdVendidos, int quantidade) {
    if (quantidade < qtdVendidos) {
        cout << "A quantidade desejada excede o estabelecimento\n";
        cout << "quantidade em estabelecimento: \n" << getQuantidade();
    } else setQuantidade(quantidade - qtdVendidos);
}