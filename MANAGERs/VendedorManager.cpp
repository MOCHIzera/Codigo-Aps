#include "MANAGERs\DaoManager.cpp"

using namespace std;

class VendedorManager {
private:
    DaoManager &daoManager;

public:
    VendedorManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarVendedor(Vendedor vendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();
        
        if (dao.retrieve(vendedor.getIdVendedor()) != nullptr) {
            return false;
        }

        dao.create(vendedor);
        return true;
    }

    bool removerVendedor(int idVendedor) {
        VendedorDAO &dao = daoManager.getVendedorDAO();

        // só remove se existir
        if (dao.retrieve(idVendedor) == nullptr) {
            return false;
        }

        return dao.remove(idVendedor);
    }

    Vendedor *buscarCliente(int idVendedor) {
        return daoManager.getVendedorDAO().retrieve(idVendedor);
    }
};