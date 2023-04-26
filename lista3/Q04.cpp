#include <iostream>
using namespace std;

class livro{
    private: 
        int livroID, paginas; float preco;
    public:
        void obter(){
            cout << "Digite o ID do livro: "; cin >> livroID;
            cout << "Digite o numero de paginas: "; cin >> paginas;
            cout << "Digite o preco do livro: "; cin >> preco;
        }
        void mostrar(){
            cout << "ID do livro: " << livroID << endl;
            cout << "Numero de paginas: " << paginas << endl;
            cout << "Preco do livro: " << preco << endl;
        }
        void definir(int id, int pag, float pr){
            livroID = id;
            paginas = pag;
            preco = pr;
        }
        void mostrapreco(){
            cout << "Preco do livro: " << preco << endl;
        }
};

int main() {
    livro l1, l2;
    l1.obter();
    l2.definir(2, 200, 20.5);
    l1.mostrar();
    l2.mostrar();
    l1.mostrapreco();
    l2.mostrapreco();
    return 0;
}
