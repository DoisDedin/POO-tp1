#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"

using namespace std;

int main() {
    int user;
    Layout layout = Layout();
    Arquivos arquivos = Arquivos();
    //layout.resizeConsole();
    user = layout.layoutPrincipal();
    string login, senha;
    layout.layoutLoguin(user, &login, &senha);

    if (arquivos.validaLogin(user,&login,&senha)){
        switch (user) {
            case 1:
                layout.layoutAdmin();
                break;
            case 2:
                layout.layoutVendedor();
                break;
            case 3:
                layout.layoutVeterinario();
                break;
            default:
                cout << "erro invalid code" << endl;
                break;
        }
    }
    return 0;
}
