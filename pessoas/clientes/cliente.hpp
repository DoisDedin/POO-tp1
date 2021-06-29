#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include "../pessoa.hpp"

using namespace std;

class Cliente:public Pessoa{
    private:
        int qtdCompras;

    public:

    Cliente();

    ~Cliente();

    Cliente(string = "", string = "", string = "", int = 0);

void setQtdCompras(int qtdCompras);

int getQtdComrpras() const;

};

#endif