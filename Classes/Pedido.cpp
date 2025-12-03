#include "Cliente.c++"
#include "Produto.c++"
#include "Reserva.c++"

class Pedido
{
private:
    int id;
    Cliente cliente;
    Produto produto;
    Reserva reserva;
    Produto valor;
    Produto quantidade;

public:
    // criação do construtor
    Pedido(int id, const Cliente &cliente, const Produto &produto, const Reserva &reserva, const Produto &valor, const Produto &quantidade)
        : id(id), cliente(cliente), produto(produto), reserva(reserva), valor(valor), quantidade(quantidade)
    {
    }

    int getIdPedido()
    {
        return id;
    }

    void setIdPedido(int id)
        : id(id)
    {
    }
};