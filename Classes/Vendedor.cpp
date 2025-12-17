#include <string>

using namespace std;

class Vendedor{
    private:
        int idVendedor;
        string nomeUsuario;
        string email;
        string senha;
    
    public:
        Vendedor() = default;

        Vendedor(int idVendedor, string nomeUsuario, string email, string senha){
            this -> idVendedor = idVendedor;
            this -> nomeUsuario = nomeUsuario;
            this -> email = email;
            this -> senha = senha;
        }

        int getIdVendedor(){
            return idVendedor;
        }
        void setIdVendedor(int idVendedor){
            this -> idVendedor = idVendedor;
        }

        string getNomeUsuario(){
            return nomeUsuario;
        }
        void setNomeUsuario(string nomeUsuario){
            this -> nomeUsuario = nomeUsuario;
        }

        string getEmail(){
            return email;
        }
        void setEmail(string email){
            this -> email = email;
        }

        string getSenha(){
            return email;
        }
        void setSenha(string senha){
            this -> senha = senha;
        }
};