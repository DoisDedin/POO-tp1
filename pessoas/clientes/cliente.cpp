#include "cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string nome, string CPF, string tel, int qtdCompras) :Pessoa(nome, CPF, tel), qtdCompras(qtdCompras){


}
void Cliente::setQtdCompras(int qtdCompras) {
    this->qtdCompras = qtdCompras;
}


int Cliente::getQtdComrpras() const {
    return  qtdCompras;
}


