#include "DaoManager.cpp"

using namespace std;

class VendedorManager {
private:
    DaoManager &daoManager;

public:
    VendedorManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarVendedor(Vendedor vendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();
        
        if (dao.recuperar(vendedor.getIdVendedor()) != nullptr) {
            return false;
        }

        dao.criar(vendedor);
        return true;
    }

    bool removerVendedor(int idVendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();

        // só remove se existir
        if (dao.recuperar(idVendedor) == nullptr) {
            return false;
        }

        return dao.remover(idVendedor);
    }

    Vendedor *buscarCliente(int idVendedor) {
        return daoManager.getVendedorDAO().recuperar(idVendedor);
    }
};