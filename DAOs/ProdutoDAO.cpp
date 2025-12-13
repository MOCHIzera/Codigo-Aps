#include <vector>
#include "../Classes/Produto.cpp"

class ProdutoDAO {
    private:
        std::vector<Produto> produtos;

    public:
        // CREATE
        void create(Produto produto) {
            produtos.push_back(produto);
        }

        // READ
        Produto *findById(int idProduto) {
            for (auto &p : produtos) {
                if (p.getIdProduto() == idProduto) {
                    return &p;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool update(Produto produtoAtualizado) {
            for (auto &p : produtos) {
                if (p.getIdProduto() == produtoAtualizado.getIdProduto()) {
                    p = produtoAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remove(int idProduto) {
            for (auto it = produtos.begin(); it != produtos.end(); ++it) {
                if (it->getIdProduto() == idProduto) {
                    produtos.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        std::vector<Produto> list() {
            return produtos;
        }
};