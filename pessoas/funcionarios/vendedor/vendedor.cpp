//
// Created by joaov on 28/06/2021.
//

#include "vendedor.hpp"
#include <iostream>
#include "../funcionarios.hpp"

Vendedor::Vendedor(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
        Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}
Vendedor::~Vendedor(){}

void Vendedor::setUser(string user) {
    this->user = user;
}
void Vendedor::setSenha(string senha) {
    this->senha = senha;
}

string Vendedor::getUser() const {
    return user;
}
string Vendedor::getSenha() const {
    return senha;
}