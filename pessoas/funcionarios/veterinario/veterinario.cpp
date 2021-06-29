//
// Created by joaov on 28/06/2021.
//

#include "veterinario.hpp"
#include <iostream>

Veterinario::Veterinario(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
        Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}
Veterinario::~Veterinario() {}

void Veterinario::setUser(string user) {
    this->user = user;
}
void Veterinario::setSenha(string senha) {
    this->senha = senha;
}

string Veterinario::getUser() const {
    return user;
}
string Veterinario::getSenha() const {
    return senha;
}