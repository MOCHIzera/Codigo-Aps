#include <vector>
#include "../Classes/Vendedor.cpp"

using namespace std;

class VendedorDAO {
    private:
        vector<Vendedor> vendedores;

    public:
        // CREATE
        void criar(Vendedor vendedor) {
            vendedores.push_back(vendedor);
        }

        // READ
        Vendedor *recuperar(int id) {
            for (auto &v : vendedores) {
                if (v.getIdVendedor() == id) {
                    return &v;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool atualizar(Vendedor vendedorAtualizado) {
            for (auto &v : vendedores) {
                if (v.getIdVendedor() == vendedorAtualizado.getIdVendedor()) {
                    v = vendedorAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remover(int id) {
            for (auto it = vendedores.begin(); it != vendedores.end(); ++it) {
                if (it->getIdVendedor() == id) {
                    vendedores.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Vendedor> listar() {
            return vendedores;
        }
};