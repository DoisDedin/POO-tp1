#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"
#include <string>
using namespace std;

int main() {
    string login, senha, nome, cpf, telefone, cargo;
    double salario;
    int stop = 0;
    int stopUsers = 0;
    int user;
    Vendedor vendedor = Vendedor( "", "",  "",  "", 0.0,"", "");
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
   // arquivos.inicializaArquivo();
    arquivos.lerArquivoVendedor(sizeVendedores, vendedores);
    arquivos.lerArquivoVeterinario(sizeVeterinario,veterinarios);
    arquivos.lerArquivoTosador(sizeTosadores,tosadores);
    arquivos.lerArquivoCliente(sizeClientes,clientes);
    arquivos.lerArquivoCompras(sizeCompras,compras);
    arquivos.lerArquivoPagamentos(sizePagamentos,pagamentos);
    arquivos.lerArquivoProdutos(sizeProdutos,produtos);
    arquivos.lerArquivoServico(sizeServicos,servicos);

    //layout.resizeConsole(); //não apaga
    vendedor.imprimeVendedores(vendedores);

    int y;



    do {
        user = layout.layoutPrincipal();
        layout.layoutLoguin(user, &login, &senha);
        switch (user) {
            case 1:
                if (arquivos.validaLogin(1, &login, &senha)) {
                    stopUsers = 0;
                    while(stopUsers != -1){

                        switch(layout.layoutAdmin()){
                            case 1:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Vendedor " << endl;
                                                cout << "               login:";
                                                fflush(stdin);
                                                getline(cin, login);
                                                cout << "               senha: ";
                                                fflush(stdin);
                                                getline(cin, senha);
                                                cout << "               nome: ";
                                                fflush(stdin);
                                                getline(cin, nome);
                                                cout << "               cpf( numeros apenas ):";
                                                fflush(stdin);
                                                getline(cin, cpf);
                                                cout << "               telefone: ";
                                                fflush(stdin);
                                                getline(cin, telefone);
                                                cout << "               salario: ";
                                                cin >> salario;
                                                vendedor.setNome(nome);
                                                vendedor.setCPF(cpf);
                                                vendedor.setTel(telefone);
                                                vendedor.setCargo("vendedor");
                                                vendedor.setSalario(salario);
                                                vendedor.setUser(login);
                                                vendedor.setSenha(senha);
                                                vendedores.push_back(vendedor);
                                                sizeVendedores++;
                                                system("cls");
                                                cout<< "cadastro efetuaado com suscesso"<< endl;
                                               break;
                            case 2:
                                break;
                            case 3:
                                break;
                            case 4:
                                break;
                            case 5:
                                break;
                            case 6:
                                break;
                            case 7:
                                break;
                            case 8:
                                break;
                            case 9:
                                break;
                            case 10:
                                break;
                            case -1:
                                stopUsers = -1;
                                break;
                            default:
                                system("cls");
                                cout << "invalid code" << endl;
                                break;
                        }
                    }

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
    vendedor.imprimeVendedores(vendedores);
    arquivos.escreverArquivoVendedor(sizeVendedores, vendedores);
    arquivos.escreverArquivoVeterinario(sizeVeterinario,veterinarios);
    arquivos.escreverArquivoTosador(sizeTosadores,tosadores);
    arquivos.escreverArquivoCliente(sizeClientes,clientes);
    arquivos.escreverArquivoCompras(sizeCompras,compras);
    arquivos.escreverArquivoPagamentos(sizePagamentos,pagamentos);
    arquivos.escreverArquivoProdutos(sizeProdutos,produtos);
    arquivos.escreverArquivoServico(sizeServicos,servicos);

    cout << "rolou" << endl ;
    return 0;
}

