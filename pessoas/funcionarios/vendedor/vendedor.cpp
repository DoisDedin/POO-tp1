//
// Created by joaov on 28/06/2021.
//

#include "vendedor.hpp"
#include <iostream>
#include <vector>
#include "../funcionarios.hpp"

Vendedor::~Vendedor(){}

Vendedor::Vendedor(string nome,string cpf, string tel, string cargo, double salario,string user, string senha):
        Funcionarios(nome, cpf, tel,cargo,salario), user(user), senha(senha) {}

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
void Vendedor::imprimeVendedores(vector<Vendedor> &vector){
    cout <<endl  << "           Vendedores" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() << "   Salario:"<< vector[i].getSalario()<< endl;
    }
}