//  Escreva uma classe "livro" com três membro de dados livroID, "paginas"
// e "preco".
//  Também contém as seguintes funções membro:
//  - A função obter() é usada para entrada dos valores.
//  - A função mostrar() é usada para mostrar os valores.
//  - A função definir() é usada para definir os dados membros usando
// parâmetros.
//  - A função mostrapreco() usada para retornar o valor do preço.
//  O programa deve criar dois objetos da classe e adentrar valores para esses
// objetos. Ademais o programa deve mostrar os detalhes do livro mais caro. 

#include <iostream>
using namespace std;

class Livro {
  private:
    int livroID;
    int paginas;
    float preco;
  public:
    void obter();
    void mostrar();
    void definir(int, int, float);
    float mostrapreco();


     void obter()
    {
        do{
            cout << "Digite o ID do livro: ";
            cin >> livroID;
            if (livroID < 0){
                cout << "insira um valor de ID válido! " << endl;
            }
        } while ( livroID < 0 );
        do{
            cout << "Digite o número de páginas: ";
            cin >> paginas;
            if (paginas < 0){
                cout << "insira um valor de páginas válido! " << endl;
            }
        } while ( paginas < 0 );
        do{
            cout << "Digite o preço: ";
            cin >> preco;
            if (preco < 0){
                cout << "insira um valor de preço válido! " << endl;
            }
        } while ( preco < 0 );
    };

    void mostrar()
    {
        cout << "ID do livro: " << livroID << endl;
        cout << "Número de páginas: " << paginas << endl;
        cout << "Preço: " << preco << endl;
    };
    void definir(int, int, float){
        livroID = livroID;
        paginas = paginas;
        preco = preco;
    }
    float mostrapreco(){
        return preco;
    }
};



int main(){
    Livro livro1, livro2;
    livro1.obter();
    livro2.obter();
    if (livro1.mostrapreco() > livro2.mostrapreco()){
        livro1.mostrar();
    } else {
        livro2.mostrar();
    }
    return 0;
}
