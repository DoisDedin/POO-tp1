//
// Created by joaov on 30/06/2021.
//

#include "arquivos.h"
Arquivos::Arquivos() {}
Arquivos::~Arquivos() {}

int Arquivos::validaLogin(int user, string *login, string *senha) {
    int x;
    switch (user) {
        case 1:
            if (*login =="admin" && *senha == "admin"){
                cout << "entrou no admin" << endl;
                return 1;}else {return 0;}
            break;
        case 2:
            x = buscaNoBanco(user,login,senha);
            if (x == 1){
                cout << "entrou no vendedor" << endl;
                return 1;}else {return 0;}
            break;
        case 3:
            x = buscaNoBanco(user,login,senha);
            if (x == 1){
                cout << "entrou no veterinario" << endl;
                return 1
                ;}else {return 0;}
            break;
        default:
            return  0;
            break;
    }
    return 0;
}
int Arquivos::buscaNoBanco(int user, string *login, string *senha){
    return 1;
}
