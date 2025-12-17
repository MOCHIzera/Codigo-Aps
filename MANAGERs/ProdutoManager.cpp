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
        
        if (dao.recuperar(produto.getIdProduto()) != nullptr) {
            return false;
        }

        dao.criar(produto);
        return true;
    }

    bool removerProduto(int idProduto) {
        ClienteDAO &dao = daoManager.getClienteDAO();

        // só remove se existir
        if (dao.recuperar(idProduto) == nullptr) {
            return false;
        }

        return dao.remover(idProduto);
    }

    Produto *buscarProduto(int idProduto) {
        return daoManager.getProdutoDAO().recuperar(idProduto);
    }
};