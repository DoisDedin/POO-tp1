//
// Created by joaov on 28/06/2021.
//

#ifndef UNTITLED1_VENDEDOR_HPP
#define UNTITLED1_VENDEDOR_HPP

#include <iostream>
#include <string>
#include "../funcionarios.hpp"

using namespace std;

class Vendedor : public Funcionarios {
public:
    string user;
    string senha;

public:
    ~Vendedor();
    Vendedor();
    Vendedor(string ="",string ="", string ="" ,string ="", double  = 0.0,string ="", string ="");

    void setUser(string user);

    void setSenha(string senha);

    string getUser() const;

    string getSenha() const;
};




#endif //UNTITLED1_VENDEDOR_HPP
