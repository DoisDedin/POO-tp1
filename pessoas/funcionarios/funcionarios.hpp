#ifndef FUNCIONARIOS_HPP
#define FUNCIONARIOS_HPP

#include <iostream>
#include <string>
#include "../pessoa.hpp"

using namespace std;

class Funcionarios: public Pessoa{
private:
        string cargo;
        double salario;
    
    public:
        ~Funcionarios();
        Funcionarios();
        Funcionarios(string ="", string ="", string ="", string ="", double = 0.0);

        void setCargo(string cargo);
        void setSalario(double salario);
        void setUser(string user);
        void setSenha(string senha);

        string getCargo() const;
        double getSalario() const;
        string getUser() const;
        string gerSenha() const;
};

#endif