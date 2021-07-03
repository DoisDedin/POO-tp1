#include "servicos.hpp"

Servicos::Servicos() {}
Servicos::~Servicos() {}

void Servicos::setNome(string nome) {
    this->nome = nome;
}
void Servicos::setPreco(double preco) {
    this->preco = preco;
}
void Servicos::setTempo(string tempo) {
    this->tempo = tempo;
}

string Servicos::getNome() const {
    return nome;
}
double Servicos::getPreco() const {
    return preco;
}
string Servicos::getTempo() const {
    return tempo;
}