#include<string>

class Cliente{
    private:
        std::string nome;
        int id;
        int telefone;
        int whatsapp;
    
    public:
        void cliente(std::string nome, int id, int telefone, int whatsapp){
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

        int getWhatsappCliente(){
            return whatsapp;
        }
        void setWhatsappCliente(int whatsapp){
            this -> whatsapp = whatsapp;
        }
};