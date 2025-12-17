#include <vector>
#include "../Classes/Cliente.cpp"

using namespace std;

class ClienteDAO {
    private:
        vector<Cliente> clientes;

    public:
        // CREATE
        void create(Cliente cliente) {
            clientes.push_back(cliente);
        }

        // READ
        Cliente *retrieve(int id) {
            for (auto &c : clientes) {
                if (c.getIdCliente() == id) {
                    return &c;
                }
            }
            return nullptr;
        }

        // UPDATE
        bool update(Cliente clienteAtualizado) {
            for (auto &c : clientes) {
                if (c.getIdCliente() == clienteAtualizado.getIdCliente()) {
                    c = clienteAtualizado;
                    return true;
                }
            }
            return false;
        }

        // DELETE
        bool remove(int id) {
            for (auto it = clientes.begin(); it != clientes.end(); ++it) {
                if (it->getIdCliente() == id) {
                    clientes.erase(it);
                    return true;
                }
            }
            return false;
        }

        // LISTAR
        vector<Cliente> list() {
            return clientes;
        }
};