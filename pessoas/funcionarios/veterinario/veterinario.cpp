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

void Veterinario::imprimeVeterinarioSimples(vector<Veterinario> &vector){
    cout <<endl  << "           Veterinario" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF()<< endl;
    }
}
void Veterinario::imprimeVeterinarioCompleto(vector<Veterinario> &vector){
    cout <<endl  << "           Veterinario" << endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() <<"   tel:"<< vector[i].getTel()<<"   salario:"<< vector[i].getSalario()<< endl;
    }
}