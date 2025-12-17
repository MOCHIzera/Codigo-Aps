using namespace std;

class Venda{
    private:
        int idVenda;
        double valorTotal;
        int dataVencimento;
        int dataVenda;
        bool status;
        unsigned int quantidadeVenda;
    
    public:
        Venda() = default;
        
        Venda(int idVenda, double valorTotal, int dataVencimento, int dataVenda, bool status, unsigned int quantidadeVenda){
            this -> idVenda = idVenda;
            this -> valorTotal = valorTotal;
            this -> dataVencimento = dataVencimento;
            this -> dataVenda = dataVenda;
            this -> status = status;
            this -> quantidadeVenda = quantidadeVenda;
        }

        int getIdVenda() const {
        return idVenda;
    }

        void setIdVenda(int idVenda) {
            this->idVenda = idVenda;
        }

        double getValorTotal() const {
            return valorTotal;
        }

        void setValorTotal(double valorTotal) {
            this->valorTotal = valorTotal;
        }

        int getDataVencimento() const {
            return dataVencimento;
        }

        void setDataVencimento(int dataVencimento) {
            this->dataVencimento = dataVencimento;
        }

        int getDataVenda() const {
            return dataVenda;
        }

        void setDataVenda(int dataVenda) {
            this->dataVenda = dataVenda;
        }

        bool getStatus() const {
            return status;
        }

        void setStatus(bool status) {
            this->status = status;
        }

        unsigned int getQuantidadeVenda() const {
            return quantidadeVenda;
        }

        void setQuantidadeVenda(unsigned int quantidadeVenda) {
            this->quantidadeVenda = quantidadeVenda;
        }
};