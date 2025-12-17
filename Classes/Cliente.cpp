#include<string>

using namespace std;

class Cliente{
    private:
        int id;
        string nome;
        int telefone;
    
    public:
        Cliente() = default; // Constructor Base

        Cliente(int id, string nome, int telefone){
            this -> id = id;
            this -> nome = nome;
            this -> telefone = telefone;
        }
        
        string getNome(){
            return nome;
        }
        void setNome(string nome){
            this -> nome = nome;
        }

        int getIdCliente(){
            return id;
        }
        void setIdCliente(int id){
            this -> id = id;
        }

        int getTelefoneCliente(){
            return telefone;
        }
        void setTelefoneCliente(int telefone){
            this -> telefone = telefone;
        }
};