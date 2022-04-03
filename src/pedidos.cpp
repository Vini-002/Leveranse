
class Pedido
{
    // Atributos do pedido:
    int ID; // Número de identificação única do pedido
    Item item;
    Local destino;
    Time entrega;
    char *responsavel;
    int status; /* Identificador de status:
                0 - Em espera, 1 - Em andamento, 2 - Falha, 3 - Sucesso */
};

typedef struct Local
{
    /* TODO */
} Local;

typedef struct Time
{
    /* TODO */
} Time;

typedef struct Item
{
    // Atributos do item:
    int ID; // Número de identificação única do item
    char *label; // Nome do item
    int peso; // Peso da unidade [kg]
    int qtd; // Unidades disponíveis no estoque
    Local origem; // Identificador da localização do item no estoque
} Item;
