// Escreva uma programa que leia valores inteiros de uma matriz 4x4 e
// mostre o produto dos elementos da diagonal principal ( diagonal( )) e soma
// dos elementos fora dessa mediante a função out_diagonal( ). 


#include <iostream>
using namespace std;

class Matriz{
    private:
        int matriz[4][4];
    public:
        void entrada_dados();
        int produto_diagonal();
        int soma_nao_diagonal();
        int out_diagonal();
};

void Matriz::entrada_dados(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
};

int Matriz::produto_diagonal(){
    int produto = 1;
    for(int i = 0; i < 4; i++){
        produto *= matriz[i][i];
    }
    cout << "Produto da diagonal principal: " << produto << endl;
    return produto;
};

int Matriz::soma_nao_diagonal(){
    int soma = 0;
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i != j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
};

int main(void){
    Matriz m;
    m.entrada_dados();
    m.produto_diagonal();
    m.soma_nao_diagonal();
    return 0;
};
