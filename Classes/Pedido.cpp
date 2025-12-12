#include "Cliente.cpp"
#include "Produto.cpp"
#include "Reserva.cpp"

class Pedido
{
private:
    /*atribuicao das variaveis privadas*/
    int id;
    Cliente cliente;
    Produto produto;
    Reserva reserva;

public:
    Pedido(){} // Constructor Base

    /*criação do construtor*/
    Pedido(int id, const Cliente &cliente, const Produto &produto, const Reserva &reserva, const Produto &valor, const Produto &quantidade)
        : id(id), cliente(cliente), produto(produto), reserva(reserva)
    {
    }

    int getIdPedido()
    {
        return id;
    }

    void setIdPedido(int id)
    {
        this->id = id;
    }

    Cliente getIdCliente()
    {
        return cliente;
    }

    void setIdCliente(Cliente cliente)
    {
        this->cliente = cliente;
    }

    Produto getIdProduto()
    {
        return produto;
    }

    void setIdProduto(Produto produto)
    {
        this->produto = produto;
    }

    Reserva getIdReserva()
    {
        return reserva;
    }

    void setIdReserva(Reserva reserva)
    {
        this->reserva = reserva;
    }
};