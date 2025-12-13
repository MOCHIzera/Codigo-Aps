#include <vector>
#include "../Classes/Vendedor.cpp"

class VendedorDAO {
    private:
        std::vector<Vendedor> vendedores;

    public:
        // CREATE
        void create(Vendedor vendedor) {
            vendedores.push_back(vendedor);
        }

        // READ
        Vendedor *findById(int id) {
            for (auto &v : vendedores) {
                if (v.getIdVendedor() == id) {
                    return &v;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool update(Vendedor vendedorAtualizado) {
            for (auto &v : vendedores) {
                if (v.getIdVendedor() == vendedorAtualizado.getIdVendedor()) {
                    v = vendedorAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remove(int id) {
            for (auto it = vendedores.begin(); it != vendedores.end(); ++it) {
                if (it->getIdVendedor() == id) {
                    vendedores.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        std::vector<Vendedor> list() {
            return vendedores;
        }
};