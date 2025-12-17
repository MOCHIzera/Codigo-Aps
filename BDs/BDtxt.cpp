#include <iostream>
#include <fstream>
#include <string>
#include "../Classes/Categoria.cpp"

using namespace std;

void BDClientes(int *id, string *nome, int *telefone){
    const string nomeArquivo = "Banco de Dados - Clientes.txt";

    ofstream arquivo(nomeArquivo, ios::out | ios::app); // ofstream = output file streams
    arquivo << *id << ";"
            << *nome << ";"
            << *telefone << endl;
    arquivo.close();
}

void BDVendedores(int *idVendedor, string *nomeUsuario, string *email, string *senha){
    const string nomeArquivo = "Banco de Dados - Vendedores.txt";

    ofstream arquivo(nomeArquivo, ios::out | ios::app); // ofstream = output file streams
    arquivo << *idVendedor << ";"
            << *nomeUsuario << ";"
            << *email << ";"
            << *senha << endl;
    arquivo.close();
}

void BDProduto(int *idProduto, string *nome, double *preco, double *custo, int *quantidade, Categoria *categoria, bool *disponibilidade){
    const string nomeArquivo = "Banco de Dados - Produtos.txt";

    ofstream arquivo(nomeArquivo, ios::out | ios::app); // ofstream = output file streams
    arquivo << *idProduto << ";"
            << *nome << ";"
            << *preco << ";"
            << *custo << ";"
            << *quantidade << ";"
            << static_cast<int>(*categoria) << ";"
            << *disponibilidade << endl;
            // o "*quantidade" é um enum class, que é fortemente tipado, ou seja, o ofstream não consegue identifica-lo como uma classe,
            // nesse caso, é mais fácil fazer um cast para inteiro, ai vai ficar: 0 Pele, 1 Cabelo, 2 Unha, 3 Outros.
    arquivo.close();
}

void BDVenda(int *idVenda, double *valorTotal, int *dataVencimento, int *dataVenda, bool *status, unsigned int *quantidadeVenda){
    const string nomeArquivo = "Banco de Dados - Vendas.txt";

    ofstream arquivo(nomeArquivo, ios::out | ios::app); // ofstream = output file streams
    arquivo << *idVenda << ";"
            << *valorTotal << ";"
            << *dataVencimento << ";"
            << *dataVenda << ";"
            << *status << ";"
            << *quantidadeVenda << endl;
    arquivo.close();
}