#include<string>

class Vendedor{
    private:
        std::string nome;
        int id;
        int telefone;
        int whatsapp;
    
    public:
        void vendedor(std::string nome, int id, int telefone, int whatsapp){
            this -> nome = nome;
            this -> id = id;
            this -> telefone = telefone;
            this -> whatsapp = whatsapp;
        }
        
        std::string getNome(){
            return nome;
        }
        void setNome(std::string nome){
            this -> nome = nome;
        }

        int getIdVendedor(){
            return id;
        }
        void setIdVendedor(int id){
            this -> id = id;
        }

        int getTelefoneVendedor(){
            return telefone;
        }
        void setTelefoneVendedor(int telefone){
            this -> telefone = telefone;
        }

        int getWhatsappVendedor(){
            return whatsapp;
        }
        void setWhatsappVendedor(int whatsapp){
            this -> whatsapp = whatsapp;
        }
};