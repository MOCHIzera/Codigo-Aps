#include <iostream>
#include <iomanip>
#include <locale>
#include "MANAGERs/ClienteManager.cpp"
#include "BDs/BDtxt.cpp"

void limparTerminal(){
    std::cout << "\033[2J\033[H";
}

void creditos(){
    limparTerminal();
    setlocale(LC_ALL, "pt_BR.utf8");

    std::cout << "Trabalho realizado pelos alunos do 2º período no ano de 2025." << std::endl << std::endl;

    std::cout << "Eduardo Cordeiro Pedrozo" << std::endl
              << "Higor Pelozatto Reis Vassoler" << std::endl
              << "João Alberto Siqueira Macedo Silva Trassi" << std::endl
              << "Pedro Antonio Siqueira Macedo Silva Trassi" << std::endl << std::endl;
    
    std::cout << "Trabalho feito sobre orientação do Professor Lucio Geronimo Valentin." << std::endl << std::endl;
}

void cadastroCliente(ClienteManager &clienteManager){
    setlocale(LC_ALL, "pt_BR.utf8");
    DaoManager daoManager;
    ClienteManager &clienteManager(daoManager);

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

    if(clienteManager.cadastrarCliente(c)){
        std::cout << "Cliente Cadastrado!" << std::endl;
    } else{
        std::cout << "ERRO: Já existe algum cliente com este ID." << std::endl;
    }
}

void removeCliente(){
    setlocale(LC_ALL, "pt_BR.utf8");
    DaoManager daoManager;
    ClienteManager clienteManager(daoManager);

    int id;

    std::cout << "Insira o ID: ";
    std::cin >> id;


}

void buscaCliente(){

}

void listaCliente(){

}

void atualizarCliente(){

}

void subMenuCliente(){
    int opcao = 0;
    std::cout << "O que você quer fazer?" << std::endl
                          << ">> [1] Cadastrar um Cliente" << std::endl
                          << ">> [2] Apagar um Cliente" << std::endl
                          << ">> [3] Buscar um cliente" << std::endl
                          << ">> [4] Listar todos os Clientes" << std::endl
                          << ">> [5] Atualizar os dados de um cliente" << std::endl;
    std::cin >> opcao;
    switch(opcao){
        case 1:{
            cadastroCliente();
            break;
            }
        case 2:{
            removeCliente(clienteManager);
            break;
            }
        case 3:{
            buscaCliente(clienteManager);
            break;
            }
        case 4:{
            listaCliente(clienteManager);
            break;
            }
        case 5:{
            atualizarCliente(clienteManager);
            break;
            }
    }
}

void opcoes(){
    setlocale(LC_ALL, "pt_BR.utf8");

    cadastrarCliente();

    int opcao = 0;

    std::cout << "Insira uma das opções abaixo:" << std::endl
              << ">> [1] Gerar Estatisticas de Vendas" << std::endl
              << ">> [2] Opções Clientes" << std::endl
              << ">> [3] Opção" << std::endl
              << ">> [4] Opção" << std::endl
              << ">> [5] Opção" << std::endl
              << ">> [6] Créditos" << std::endl;
    
    while(opcao < 1 || opcao > 6){
        std::cout << "> ";
        std::cin >> opcao;
        switch(opcao){
            case 1:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl << std:: endl;
                //metodoOpcao1();
                break;
            }
            case 2:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl;
                subMenuCliente();
                break;
            }
            case 3:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl;
            //metodoOpcao3();
                break;
            }
            case 4:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao4();
                break;
            }
            case 5:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl;
                //metodoOpcao5();
                break;
            }
            case 6:{
                std::cout << "Opção " << opcao << " selecionada." << std::endl << std::endl;
                creditos();
                break;
            }
            default:{
                std::cout << "A Opção " << opcao << " não existe, insira uma opção válida." << std::endl << std::endl
                          << "> ";
            }
        }
    }
}

void intro(){
    setlocale(LC_ALL, "pt_BR.utf8");
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
    setlocale(LC_ALL, "pt_BR.utf8");

    int id;
    string nome;
    int telefone;

    cout << "ID: " << ";";
    cin >> id;
    cout << "Nome: " << ";";
    getline(cin, nome);
    cout << "Telefone: " << ";";
    cin >> telefone;
    
    BDClientes(&id, &nome, &telefone);

    cout << "Caboco inserido!" << endl;

    // DaoManager daoManager;
    // ClienteManager clienteManager(daoManager);

    // char continuar;

    // limparTerminal();
    
    // intro();
    
    // while(1){
    //     volta:{
    //         opcoes();
    //     }
        
    //     std::cout << "Deseja realizar mais alguma operação? [S/N]" << std::endl << "> ";
    //     std::cin >> continuar;

    //     if(continuar == 's' || continuar == 'S'){
    //         limparTerminal();
    //         goto volta;
    //     } else{
    //         std::cout << std::endl << "Obrigado por utilizar nossos serviços!" << std::endl;
    //         std::cout << "Até Breve!" <<std::endl << std::endl;
    //         break;
    //     }
    // }
    return 0;
}