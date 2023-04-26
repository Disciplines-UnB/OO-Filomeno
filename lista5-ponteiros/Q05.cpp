#include <iostream>
using namespace std;

struct Item
{
    int codigo;
    int quantidade;
    float custo;
};


int main(){
    char inf, inf2;
    struct Item agora;

    agora.codigo = 0;
    agora.quantidade = 0;
    agora.custo = 0.0;

    cout << "digite '.' para inserir uma informacao: ";

    cin >> inf;

    while (inf == '.')
    {
        
        cout << "insira o valor do codigo: ";
        cin >> agora.codigo;

        cout << "insira o valor da quantidade: ";
        cin >> agora.quantidade;

        cout << "insira o valor do custo: ";
        cin >> agora.custo;

        cout << "digite '.' se deseja reinserir uma informacao ou '>' se deseja imprimir na tela: ";
        cin >> inf;
    
    }

    cout << "aqui esta a impressao que solicitou: ";

    cout << "codigo: " << agora.codigo << endl;
    cout << "quantidade: " << agora.quantidade << endl;
    cout << "custo: " << agora.custo << endl;

    return 0;
}
