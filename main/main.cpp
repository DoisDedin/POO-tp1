#include <iostream>
#include "../Utils/layout/layout.hpp"
#include "../Utils/arquivos/arquivos.h"
#include <string>

using namespace std;

int main() {
    string login, senha, nome, cpf, telefone, cargo;
    string aux;
    int aux2;
    double salario;
    int quantidade;
    int stop = 0;
    int stopUsers = 0;
    int stopRemove = 0;
    int user;

    Layout layout = Layout();
    //declarando todos os vetores usados no sistema;
    vector<Vendedor> vendedores;
    int sizeVendedores = 0;
    Vendedor vendedor = Vendedor("Joao da Mata", "15578922230", "(23)40891-7331", "vendedor", 1200.10, "vend1", "5533");
    vendedores.push_back(vendedor);
    vendedor = Vendedor("Bryan O'Conner", "84221454059", "(10)55022-2023", "vendedor", 1250.10, "vend2", "1973");
    vendedores.push_back(vendedor);
    sizeVendedores = 2;
    vector<Veterinario> veterinarios;
    int sizeVeterinario = 0;
    Veterinario veterinario = Veterinario("Hinata Hyuga", "75807674065", "(72)79764-9945", "veterinario", 3250.0, "vet1", "1113");
    veterinarios.push_back(veterinario);
    veterinario = Veterinario("Paolo Guerrero", "43325489060", "(26)76518-5348", "veterinario", 3230.0, "vet2", "1984");
    veterinarios.push_back(veterinario);
    sizeVeterinario = 2;
    vector<Tosador> tosadores;
    int sizeTosadores = 0;
    Tosador tosador = Tosador("Larissa Silva", "29619550099", "(20)75743-8099", "tosador", 1100.0);
    tosadores.push_back(tosador);
    tosador = Tosador("Carlos Eduardo", "06733613069", "(77)26843-9252", "tosador", 1100.0);
    tosadores.push_back(tosador);
    sizeTosadores = 2;
    vector<Cliente> clientes;
    int sizeClientes = 0;
    Cliente cliente = Cliente("Paulo Plinio", "37283338080", "(60)47950-4741", 10);
    clientes.push_back(cliente);
    cliente = Cliente("Paula Muller", "39521401044", "(82)26615-9145", 5);
    clientes.push_back(cliente);
    sizeClientes = 2;
    vector<Compras> compras;
    int sizeCompras = 0;
    vector<Pagamentos> pagamentos;
    int sizePagamentos = 0;
    vector<Produtos> produtos;
    int sizeProdutos = 0;
    Produtos produtos1 = Produtos("Coleira", 35, 23.45);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Sabonete", 42, 10.50);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Mordedor", 15, 8.35);
    produtos.push_back(produtos1);
    produtos1 = Produtos("Racao", 150, 98.10);
    produtos.push_back(produtos1);
    sizeProdutos = 4;
    vector<Servicos> servicos;
    Servicos servicos1 = Servicos();
    int sizeServicos = 0;

    //declarando o responsavel pela manipulação dos arquivos e sua chamada para encher os vetores com os dados
    Arquivos arquivos = Arquivos();
    // arquivos.inicializaArquivo();
    // arquivos.lerArquivoVendedor(sizeVendedores, vendedores);
    //  arquivos.lerArquivoVeterinario(sizeVeterinario,veterinarios);
    // arquivos.lerArquivoTosador(sizeTosadores,tosadores);
    // arquivos.lerArquivoCliente(sizeClientes,clientes);
    //  arquivos.lerArquivoCompras(sizeCompras,compras);
    //  arquivos.lerArquivoPagamentos(sizePagamentos,pagamentos);
    //  arquivos.lerArquivoProdutos(sizeProdutos,produtos);
    //  arquivos.lerArquivoServico(sizeServicos,servicos);

    //layout.resizeConsole(); //não apaga
    //vendedor.imprimeVendedores(vendedores);

    int y;


    do {
        user = layout.layoutPrincipal();
        layout.layoutLoguin(user, &login, &senha);
        switch (user) {
            case 1:
                if (arquivos.validaLogin(1, &login, &senha)) {
                    stopUsers = 0;
                    while (stopUsers != -1) {

                        switch (layout.layoutAdmin()) {
                            //cadastro de vendedor
                            case 1:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Vendedor " << endl;
                                cout << "               login:";
                                fflush(stdin);
                                getline(cin, login);
                                cout << "               senha:";
                                fflush(stdin);
                                getline(cin, senha);
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
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
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;
                            //cadastro de veterinario
                            case 2:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Veterinario " << endl;
                                cout << "               login:";
                                fflush(stdin);
                                getline(cin, login);
                                cout << "               senha:";
                                fflush(stdin);
                                getline(cin, senha);
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
                                cin >> salario;
                                veterinario.setNome(nome);
                                veterinario.setCPF(cpf);
                                veterinario.setTel(telefone);
                                veterinario.setCargo("veterinario");
                                veterinario.setSalario(salario);
                                veterinario.setUser(login);
                                veterinario.setSenha(senha);
                                veterinarios.push_back(veterinario);
                                sizeVeterinario++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;
                                //cadastro de tosador
                            case 3:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Tosador " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               cpf( numeros apenas ):";
                                fflush(stdin);
                                getline(cin, cpf);
                                cout << "               telefone:";
                                fflush(stdin);
                                getline(cin, telefone);
                                cout << "               salario:";
                                cin >> salario;
                                tosador.setNome(nome);
                                tosador.setCPF(cpf);
                                tosador.setTel(telefone);
                                tosador.setCargo("tosador");
                                tosador.setSalario(salario);
                                tosadores.push_back(tosador);
                                sizeTosadores++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;
                                //impressao de funcionarios simples
                            case 4:
                                system("cls");
                                vendedor.imprimeVendedoresSimples(vendedores);
                                veterinario.imprimeVeterinarioSimples(veterinarios);
                                tosador.imprimeTosadorSimples(tosadores);
                                system("pause");
                                break;
                                //impressao de funcionarios completo
                            case 5:
                                system("cls");
                                vendedor.imprimeVendedoresCompleto(vendedores);
                                veterinario.imprimeVeterinarioCompleto(veterinarios);
                                tosador.imprimeTosadorCompleto(tosadores);
                                system("pause");
                                break;
                                //impressao cliente simples.
                            case 6:
                                system("cls");
                                cliente.imprimeClientesSimples(clientes);
                                system("pause");
                                break;
                                //impressao cliente completo.
                            case 7:
                                system("cls");
                                cliente.imprimeClientesCompleto(clientes);
                                system("pause");
                                break;
                                //cadastro de produtos
                            case 8:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Produto " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               preco:";
                                cin >> salario;
                                cout << "               quantidade:";
                                cin >> quantidade;
                                produtos1.setNome(nome);
                                produtos1.setPreco(salario);
                                produtos1.setQuantidade(quantidade);
                                produtos.push_back(produtos1);
                                sizeProdutos++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                break;
                                //cadastro de servicos
                            case 9:
                                system("cls");
                                cout << endl << endl << "           Cadastro de Servicos " << endl;
                                cout << "               nome:";
                                fflush(stdin);
                                getline(cin, nome);
                                cout << "               preco:";
                                cin >> salario;
                                cout << "               tempo de duracao:";
                                fflush(stdin);
                                getline(cin, cpf);
                                servicos1.setNome(nome);
                                servicos1.setPreco(salario);
                                servicos1.setTempo(cpf);
                                servicos.push_back(servicos1);
                                sizeServicos++;
                                system("cls");
                                cout << "cadastro efetuaado com suscesso" << endl;
                                //ver produtos e servicos
                                break;
                            case 10:
                                cout << "Produto: " << produtos[2].getNome() <<endl;
                               /* for (int i = 0; i < produtos.size(); ++i) {
                                    aux = produtos[i].getNome();
                                    aux2 = produtos[i].getQuantidade();
                                    printf("%s  %d", aux, aux2);
                                }*/
                                break;
                            case 11:
                                //Pagar conta
                                break;
                            case 12:
                                //Compras
                                break;
                            case 13:
                                //Gerar Relatorios
                                break;
                            case 14:
                                while (stopRemove != -1){
                                    switch (layout.layoutRemoverFucionario()){
                                        case 1:
                                            cout << endl << endl << "           Nome do vendedor " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            vendedor.removeVendedor(nome, vendedores);
                                            system("cls");
                                            break;
                                        case 2:
                                            cout << endl << endl << "           Nome do veterinario " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            veterinario.removeVeterinario(nome, veterinarios);
                                            system("cls");
                                            break;
                                        case 3:
                                            cout << endl << endl << "           Nome do Tosador " << endl;
                                            cout << "               nome:";
                                            fflush(stdin);
                                            getline(cin, nome);
                                            tosador.removeTosador(nome, tosadores);
                                            system("cls");
                                            break;
                                        case -1:
                                            stopRemove = -1;
                                            break;
                                    }
                                }
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
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
                }
                break;
            case 2:
                if (arquivos.validaLogin(2, &login, &senha)) {
                    layout.layoutVendedor();
                } else {
                    system("cls");
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
                }
                break;
            case 3:
                if (arquivos.validaLogin(3, &login, &senha)) {
                    layout.layoutVeterinario();
                } else {
                    system("cls");
                    cout << endl << endl << "login ou senha invalidos" << endl << endl;
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
    //   arquivos.escreverArquivoVendedor(sizeVendedores, vendedores);
    //  arquivos.escreverArquivoVeterinario(sizeVeterinario,veterinarios);
    //  arquivos.escreverArquivoTosador(sizeTosadores,tosadores);
    //   arquivos.escreverArquivoCliente(sizeClientes,clientes);
    //  arquivos.escreverArquivoCompras(sizeCompras,compras);
    //  arquivos.escreverArquivoPagamentos(sizePagamentos,pagamentos);
    //  arquivos.escreverArquivoProdutos(sizeProdutos,produtos);
    //  arquivos.escreverArquivoServico(sizeServicos,servicos);

    cout << "rolou" << endl;
    return 0;
}

