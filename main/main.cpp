#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"

using namespace std;

int main() {
    string login, senha;
    int stop = 0;
    int user;
    Layout layout = Layout();
    //declarando todos os vetores usados no sistema;
    vector<Vendedor> vendedores;
    int sizeVendedores = 0;
    vector<Veterinario> veterinarios;
    int sizeVeterinario = 0;
    vector<Tosador> tosadores;
    int sizeTosadores = 0;
    vector<Cliente> clientes;
    int sizeClientes = 0;
    vector<Compras> compras;
    int sizeCompras = 0;
    vector<Pagamentos> pagamentos;
    int sizePagamentos = 0;
    vector<Produtos> produtos;
    int sizeProdutos = 0;
    vector<Servicos> servicos;
    int sizeServicos = 0;

    //declarando o responsavel pela manipulação dos arquivos e sua chamada para encher os vetores com os dados
    Arquivos arquivos = Arquivos();
    arquivos.lerArquivoVendedor(&sizeVendedores, &vendedores);
    arquivos.lerArquivoVeterinario(&sizeVeterinario,&veterinarios);
    arquivos.lerArquivoTosador(&sizeTosadores,&tosadores);
    arquivos.lerArquivoCliente(&sizeClientes,&clientes);
    arquivos.lerArquivoCompras(&sizeCompras,&compras);
    arquivos.lerArquivoPagamentos(&sizePagamentos,&pagamentos);
    arquivos.lerArquivoProdutos(&sizeProdutos,&produtos);
    arquivos.lerArquivoServico(&sizeServicos,&servicos);

    //layout.resizeConsole(); //não apaga







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

    arquivos.escreverArquivoVendedor(sizeVendedores, &vendedores);
    arquivos.escreverArquivoVeterinario(sizeVeterinario,&veterinarios);
    arquivos.escreverArquivoTosador(sizeTosadores,&tosadores);
    arquivos.escreverArquivoCliente(sizeClientes,&clientes);
    arquivos.escreverArquivoCompras(sizeCompras,&compras);
    arquivos.escreverArquivoPagamentos(sizePagamentos,&pagamentos);
    arquivos.escreverArquivoProdutos(sizeProdutos,&produtos);
    arquivos.escreverArquivoServico(sizeServicos,&servicos);

    cout << "rolou" << endl ;
    return 0;
}

