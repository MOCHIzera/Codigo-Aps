#include <iostream>
#include "MANAGERs/ClienteManager.cpp"

void limparTerminal(){
    std::cout << "\033[2J\033[H";
}

void cadastroCliente(){
    DaoManager daoManager;
    ClienteManager clienteManager(daoManager);

    int id;
    int telefone;
    std::string nome;

    std::cout << "Insira o ID: ";
    std::cin >> id;

    std::cin.ignore();
    std::cout << "Insira o nome da pessoa: ";
    std::getline(std::cin, nome);

    std::cout << "Insira o telefone: ";
    std::cin >> telefone;

    Cliente c(id, nome, telefone);

    Cliente *cli = clienteManager.buscarCliente(id);

    clienteManager.cadastrarCliente(c);
    if(cli){
        std::cout << "Cliente Cadastrado!" << std::endl;
    }
}

void opcoes(){
    int opcao = 0;

    std::cout << "Insira uma das opcoes abaixo:" << std::endl
              << ">> Opcao [1] " << std::endl
              << ">> Opcao [2] " << std::endl
              << ">> Opcao [3] " << std::endl
              << ">> Opcao [4] " << std::endl
              << ">> Opcao [5] " << std::endl << std::endl
              << "> ";
    
    while(opcao < 1 || opcao > 5){
        std::cin >> opcao;
        switch(opcao){
            case 1:{
                std::cout << "opcao " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao1();
                break;
            }
            case 2:{
                std::cout << "opcao " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao2();
                break;
            }
            case 3:{
                std::cout << "opcao " << opcao << " selecionada." << std::endl << std::endl;
            //metodoOpcao3();
                break;
            }
            case 4:{
                std::cout << "opcao " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao4();
                break;
            }
            case 5:{
                std::cout << "opcao " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao5();
                break;
            }
            default:{
                std::cout << "A opcao " << opcao << " nao existe, insira uma opcao valida." << std::endl << std::endl
                          << "> ";
            }
        }
    }
}

void intro(){
    std::cout << R"(=========================================================================================================================================================
|    SSSSSSSSSSSSSSS              MMMMMMMM               MMMMMMMM                                                                                       |
|  SS:::::::::::::::S             M:::::::M             M:::::::M                                                                                       |
| S:::::SSSSSS::::::S             M::::::::M           M::::::::M                                                                                       |
| S:::::S     SSSSSSS             M:::::::::M         M:::::::::M                                                                                       |
| S:::::S                         M::::::::::M       M::::::::::M   ooooooooooo   uuuuuu    uuuuuu rrrrr   rrrrrrrrr   aaaaaaaaaaaaa     ooooooooooo    |
| S:::::S                         M:::::::::::M     M:::::::::::M oo:::::::::::oo u::::u    u::::u r::::rrr:::::::::r  a::::::::::::a  oo:::::::::::oo  |
|  S::::SSSS                      M:::::::M::::M   M::::M:::::::Mo:::::::::::::::ou::::u    u::::u r:::::::::::::::::r aaaaaaaaa:::::ao:::::::::::::::o |
|   SS::::::SSSSS                 M::::::M M::::M M::::M M::::::Mo:::::ooooo:::::ou::::u    u::::u rr::::::rrrrr::::::r         a::::ao:::::ooooo:::::o |
|     SSS::::::::SS               M::::::M  M::::M::::M  M::::::Mo::::o     o::::ou::::u    u::::u  r:::::r     r:::::r  aaaaaaa:::::ao::::o     o::::o |
|        SSSSSS::::S              M::::::M   M:::::::M   M::::::Mo::::o     o::::ou::::u    u::::u  r:::::r     rrrrrrraa::::::::::::ao::::o     o::::o |
|             S:::::S             M::::::M    M:::::M    M::::::Mo::::o     o::::ou::::u    u::::u  r:::::r           a::::aaaa::::::ao::::o     o::::o |
|             S:::::S             M::::::M     MMMMM     M::::::Mo::::o     o::::ou:::::uuuu:::::u  r:::::r          a::::a    a:::::ao::::o     o::::o |
| SSSSSSS     S:::::S             M::::::M               M::::::Mo:::::ooooo:::::ou:::::::::::::::uur:::::r          a::::a    a:::::ao:::::ooooo:::::o |
| S::::::SSSSSS:::::S ......      M::::::M               M::::::Mo:::::::::::::::o u:::::::::::::::ur:::::r          a:::::aaaa::::::ao:::::::::::::::o |
| S:::::::::::::::SS  .::::.      M::::::M               M::::::M oo:::::::::::oo   uu::::::::uu:::ur:::::r           a::::::::::aa:::aoo:::::::::::oo  |
|  SSSSSSSSSSSSSSS    ......      MMMMMMMM               MMMMMMMM   ooooooooooo       uuuuuuuu  uuuurrrrrrr            aaaaaaaaaa  aaaa  ooooooooooo    |
=========================================================================================================================================================

)";
    std::cout << "Bem vindo ao sistema de Registro de Vendas e Clientes." << std::endl;
    std::cout << "Sistema criado pela equipe A2." << std::endl << std::endl;
}

int main(){
    limparTerminal();
    
    intro();
    
    opcoes();

    return 0;
}