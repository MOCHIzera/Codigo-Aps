#include "Cliente.cpp"
#include "Produto.cpp"
#include "Reserva.cpp"

class Pedido
{
private:
    /*atribuicao das variaveis privadas*/
    int id;
    Cliente cliente;
    Produto produto, valor, quantidade;
    Reserva reserva;

public:
    /*criação do construtor*/
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

    Cliente getIdCliente()
    {
        return cliente;
    }

    void setIdCliente(Cliente cliente)
        : cliente(cliente)
    {
    }

    Produto getIdProduto()
    {
        return produto;
    }

    void setIdProduto()
        : produto(produto)
    {
    }

    Reserva getIdReserva()
    {
        return reserva;
    }

    void setIdReserva()
        : reserva(reserva)
    {
    }
};