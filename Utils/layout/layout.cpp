//
// Created by joaov on 29/06/2021.
//

#include "layout.hpp"

Layout::Layout() {}

Layout::~Layout() {}

int Layout::layoutPrincipal() {
    int x;
    cout << endl << endl << "   Alunos:" << endl << endl;
    cout << "       Joao Vitor Cardoso dos Santos Cotta - 19.2.4069" << endl;
    cout << "       Luiz ......... - .............." << endl;
    cout << "       Patrick ................. - .......... - 19.2.4069" << endl;
    cout << "       DuGrauu ......................  - 19.2.4069" << endl;

    cout << endl << "                           PetShop                     " << endl << endl;
    cout << "   Bem vindo. Escolha uma das opcoes" << endl << endl;
    cout << "           1 - Administrador. " << endl;
    cout << "           2 - Vendedor. " << endl;
    cout << "           3 - Veterinario. " << endl;
    cout << "           4 - Sair. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    system("cls");
    return x;

}

void Layout::layoutLoguin(int user, string *login, string *senha) {
    system("cls");
    switch (user) {
        case 1:
            cout << "       Login Adiministrador:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        case 2:
            cout << "       Login Vendedor:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        case 3:
            cout << "       Login Veterinario:" << endl;
            cout << "               Login:";
            fflush(stdin);
            getline(cin, *login);
            cout << "               Senha:";
            fflush(stdin);
            getline(cin, *senha);
            break;
        default:
            cout << "vc digitou algo errado ;" << endl;
            break;

    }

}

//responsavel por alterar as porporções do console, iremos utilizar um padrão;
void Layout::resizeConsole() {
    int width = 1024, height = 720;
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}


