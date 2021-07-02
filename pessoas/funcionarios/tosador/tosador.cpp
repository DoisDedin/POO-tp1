//
// Created by joaov on 28/06/2021.
//

#include "tosador.hpp"

Tosador::Tosador(string nome,string cpf, string tel, string cargo, double salario):Funcionarios(nome,cpf,tel,cargo,salario) {}
Tosador::~Tosador() {}
void Tosador::imprimirTosadores(vector<Tosador> &vector){
    cout <<endl << "           Tosadores" <<endl;
    for (int i = 0; i < vector.size(); ++i) {
        cout<< i << ": "<< vector[i].getNome() << "   cpf:"<< vector[i].getCPF() << "   Salario:"<< vector[i].getSalario()<< endl;
    }
}
