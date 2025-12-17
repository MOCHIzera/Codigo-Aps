#include "DaoManager.cpp"

using namespace std;

class ClienteManager {
private:
    DaoManager &daoManager;

public:
    ClienteManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarCliente(Cliente cliente) {
        ClienteDAO &dao = daoManager.getClienteDAO();
        
        if (dao.recuperarPeloId(cliente.getIdCliente()) != nullptr) {
            return false;
        }

        dao.criar(cliente);
        return true;
    }

    bool removerCliente(int id) {
        ClienteDAO &dao = daoManager.getClienteDAO();

        // só remove se existir
        if (dao.recuperarPeloId(id) == nullptr) {
            return false;
        }

        return dao.remover(id);
    }

    Cliente *buscarClienteId(int id) {
        return daoManager.getClienteDAO().recuperarPeloId(id);
    }

    Cliente *buscarClienteNome(string nome) {
        return daoManager.getClienteDAO().recuperarPeloNome(nome);
    }
};