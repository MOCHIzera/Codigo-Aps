#include "MANAGERs\DaoManager.cpp"

using namespace std;

class ProdutoManager {
private:
    DaoManager &daoManager;

public:
    ProdutoManager(DaoManager &daoManager)
        : daoManager(daoManager) {}

    bool cadastrarProduto(Produto produto) {
        ProdutoDAO &dao = daoManager.getProdutoDAO();
        
        if (dao.retrieve(produto.getIdProduto()) != nullptr) {
            return false;
        }

        dao.create(produto);
        return true;
    }

    bool removerProduto(int idProduto) {
        ClienteDAO &dao = daoManager.getClienteDAO();

        // só remove se existir
        if (dao.retrieve(idProduto) == nullptr) {
            return false;
        }

        return dao.remove(idProduto);
    }

    Produto *buscarProduto(int idProduto) {
        return daoManager.getProdutoDAO().retrieve(idProduto);
    }
};