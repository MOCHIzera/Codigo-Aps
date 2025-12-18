#include "enum/Categoria.h"
#include <string>

using namespace std;

class Produto{
    private:
        int idProduto;
        string nome;
        double preco;
        double custo;
        int quantidade;
        Categoria categorias;
        bool disponibilidade;
    
    public:
        Produto() = default; // Constructor Base

        Produto(int idProduto, string nome, double preco, double custo,
                int quantidade, Categoria categoria, bool disponibilidade){
            this -> idProduto = idProduto;
            this -> nome = nome;
            this -> preco = preco;
            this -> custo = custo;
            this -> quantidade = quantidade;
            this -> categoria = categoria;
            this -> disponibilidade = disponibilidade;
        }

        int getIdProduto(){
            return idProduto;
        }
        void setIdProduto(int idProduto){
            this -> idProduto = idProduto;
        }

        string getNomeProduto(){
            return nome;
        }
        void setNome(string nome){
            this -> nome = nome;
        }

        double getPrecoProduto(){
            return preco;
        }
        void setPrecoProduto(double preco){
            this -> preco = preco;
        }

        double getCustoProduto(){
            return custo;
        }
        void setCustoProduto(double custo){
            this -> custo = custo;
        }

        int getQuantidadeProduto(){
            return quantidade;
        }
        void setQuantidadeProduto(int quantidade){
            this -> quantidade = quantidade;
        }

        Categoria getCategoriaProduto(){
            return categoria;
        }
        void setCategoriaProduto(Categoria categoria){
            this -> categoria = categoria;
        }

        bool getDisponibilidadeProduto(){
            return disponibilidade;
        }
        void setDisponibilidadeProduto(bool disponibilidade){
            this -> disponibilidade = disponibilidade;
        }
};