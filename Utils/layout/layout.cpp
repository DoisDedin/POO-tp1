//
// Created by joaov on 29/06/2021.
//

#include "layout.hpp"

Layout::Layout() {}

Layout::~Layout() {}

//responsavel por alterar as porporções do console, iremos utilizar um padrão;
void Layout::resizeConsole() {
    int width = 1024, height = 720;
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

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
        case 4:
            break;
        default:
            cout << "vc digitou algo errado ;" << endl;
            break;

    }

}

int Layout::layoutAdmin() {
    int x;
    system("cls");
    cout << endl << "                         Admin                    " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de Vendedor. " << endl;
    cout << "           2  - Cadastro de Veterinario. " << endl;
    cout << "           3  - Cadastro de Tosador. " << endl;
    cout << "           4  - Visualizar Funcionarios. " << endl;
    cout << "           5  - Visualizar Clientes. " << endl;
    cout << "           6  - Ver Estoque de Produtos. " << endl;
    cout << "           7  - Ver Servicos. " << endl;
    cout << "           8  - Pagar Conta. " << endl;
    cout << "           9  - Compras. " << endl;
    cout << "           10 - Gerar Relatorios. " << endl;
    cout << "           -1 - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}

int Layout::layoutVendedor() {
    system("cls");
    int x;
    cout << endl << "                      Vendedor                   " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de cliente. " << endl;
    cout << "           2  - Realizar Venda. " << endl;
    cout << "           -1  - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}

int Layout::layoutVeterinario() {
    system("cls");
    int x;
    cout << endl << "                      Veterinario                   " << endl << endl;
    cout << "       Escolha uma das opcoes:" << endl << endl;
    cout << "           1  - Cadastro de cliente. " << endl;
    cout << "           2  - Realizar Ordem e Servico. " << endl;
    cout << "           -1  - Voltar. " << endl << endl;
    cout << "   Opcao:";
    cin >> x;
    return x;
}





