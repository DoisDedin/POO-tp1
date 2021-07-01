#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"

using namespace std;

int main() {
    int stop = 0;
    int user;
    Layout layout = Layout();
    Arquivos arquivos = Arquivos();
    //layout.resizeConsole();

    string login, senha;

    do {
        user = layout.layoutPrincipal();
        layout.layoutLoguin(user, &login, &senha);
        switch (user) {
            case 1:
                if (arquivos.validaLogin(1, &login, &senha)) {
                    layout.layoutAdmin();
                } else {
                    system("cls");
                    cout <<endl<< endl<< "login ou senha invalidos" << endl << endl;
                }
                break;
            case 2:
                if (arquivos.validaLogin(2, &login, &senha)) {
                    layout.layoutVendedor();
                } else {
                    system("cls");
                    cout <<endl<< endl<< "login ou senha invalidos" << endl << endl;
                }
                break;
            case 3:
                if (arquivos.validaLogin(3, &login, &senha)) {
                    layout.layoutVeterinario();
                } else {
                    system("cls");
                    cout <<endl<< endl<< "login ou senha invalidos" << endl << endl;
                }
                break;
            case 4:
                stop = -1;
                break;
            default:
                system("cls");
                cout << "erro invalid code" << endl;
                break;
        }
    } while (stop != -1);

    return 0;
}
