//
// Created by joaov on 30/06/2021.
//

#ifndef UNTITLED1_ARQUIVOS_H
#define UNTITLED1_ARQUIVOS_H
#include <iostream>
#include <string>
#include "windows.h"
using namespace std;

class Arquivos{
private:

public:
    Arquivos();
    ~Arquivos();
    int validaLogin(int user, string *login, string *senha);
    int buscaNoBanco(int user, string *login, string *senha);
};
#endif //UNTITLED1_ARQUIVOS_H
