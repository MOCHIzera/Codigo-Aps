#include "Categoria.cpp"
#include<string>

class Produto{
    private:
        int id;
        std::string nome;
        Categoria categoria;
        float valor;
        int quantidade;
    
    public:
        Produto(){} // Constructor Base

        Produto(int id, std::string nome, Categoria categoria, float valor, int quantidade){
            this -> id = id;
            this -> nome = nome;
            this -> categoria = categoria;
            this -> valor = valor;
            this -> quantidade = quantidade;
        }

        int getIdProduto(){
            return id;
        }
        void setIdProduto(int id){
            this -> id = id;
        }
};