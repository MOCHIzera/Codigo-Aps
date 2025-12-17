#include <vector>
#include "../Classes/Produto.cpp"

using namespace std;

class ProdutoDAO {
    private:
        vector<Produto> produtos;

    public:
        // CREATE
        void criar(Produto produto) {
            produtos.push_back(produto);
        }

        // READ
        Produto *recuperar(int idProduto) {
            for (auto &p : produtos) {
                if (p.getIdProduto() == idProduto) {
                    return &p;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Produto produtoAtualizado) {
            for (auto &p : produtos) {
                if (p.getIdProduto() == produtoAtualizado.getIdProduto()) {
                    p = produtoAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int idProduto) {
            for (auto it = produtos.begin(); it != produtos.end(); ++it) {
                if (it->getIdProduto() == idProduto) {
                    produtos.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Produto> listar() {
            return produtos;
        }
};