#include "../DAOs/ClienteDAO.cpp"
#include "../DAOs/ProdutoDAO.cpp"
#include "../DAOs/VendedorDAO.cpp"

using namespace std;

class DaoManager {
private:
    ClienteDAO clienteDAO;
    ProdutoDAO produtoDAO;
    VendedorDAO vendedorDAO;

public:
    ClienteDAO &getClienteDAO(){
        return clienteDAO;
    }
    
    ProdutoDAO &getProdutoDAO(){
        return produtoDAO;
    }

    VendedorDAO &getVendedorDAO(){
        return vendedorDAO;
    }
};