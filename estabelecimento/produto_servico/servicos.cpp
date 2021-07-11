#include "servicos.hpp"

Servicos::Servicos(){}
Servicos::Servicos(string nome, double preco):nome(nome), preco(preco){}
Servicos::~Servicos(){}

void Servicos::setNome(string nome){
    this->nome = nome;
}
void Servicos::setPreco(double setPreco){
    this->preco = preco;
}

string Servicos::getNome() const{
    return nome;
}
double Servicos::getPreco() const{
    return preco;
}