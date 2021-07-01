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
    cout << login << endl;
    cout << senha << endl;
    int x =0;
    arquivos.validaLogin(user,&login,&senha);
    return 0;
}
