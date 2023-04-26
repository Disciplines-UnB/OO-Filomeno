/*
Elabore um programa que leia o comprimento de um vetor a partir do programa
principal pelo usuário e declara um vetor de inteiro cujo comprimento foi
especificado pelo usuário. O programa lê os valores do vetor e mostra-os.
Saída:
Digite o nro - a:
Digite o nro - b:
*/


#include <iostream>
using namespace std;

int main(){
    int tam; 

    cout << "digite o tamanho do seu vetor: ";
    cin >> tam;

    int vetor[tam] = {};

    for (int i = 0; i < tam; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < tam; i++)
    {
        cout << *(vetor + i) << " ";
    }
    
    


    return 0;
}
