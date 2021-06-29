//
// Created by joaov on 28/06/2021.
//

#include <iostream>
#include "admin.hpp"
#include "../funcionarios.hpp"

Admin::Admin(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {


};

void Admin::setUser(string user) {
    this->user = user;
}
void Admin::setSenha(string senha) {
    this->senha = senha;
}

string Admin::getUser() const {
    return user;
}
string Admin::getSenha() const {
    return senha;
}