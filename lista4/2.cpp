#include <iostream>
using namespace std;


// Escreva uma classe "resultado" que contenha a matricula,
// nome e três notas de uma disciplina. As notas são
// armazenadas num vetor. A classe contém também as
// seguinte funções:
// - função entrada() é usada para adentrar os valores dos
// membros de dados
// - função mostra() é usada para mostrar os valores dos
// membros de dados
// - função total() retorna o total de notas de um estudante
// - função media() retorna a média das notas de um
// estudante.
// O programa deve criar um objeto dessa classe e chamar as
// funções membros.


class resultado{
    private:
        int matricula;
        char nome[30];
        float nota[3];
    public:
        void entrada(){
            cout << "Digite a matricula: "; cin >> matricula;
            cout << "Digite o nome: "; cin >> nome;
            cout << "Digite a primeira nota: "; cin >> nota[0];
            cout << "Digite a segunda nota: "; cin >> nota[1];
            cout << "Digite a terceira nota: "; cin >> nota[2];
        }
        void mostra(){
            cout << "Matricula: " << matricula << endl;
            cout << "Nome: " << nome << endl;
            cout << "Primeira nota: " << nota[0] << endl;
            cout << "Segunda nota: " << nota[1] << endl;
            cout << "Terceira nota: " << nota[2] << endl;
        }
        float total(){
            float total = nota[0] + nota[1] + nota[2];
            return total;
        }
        float media(){
            float media = total() / 3;
            return media;
        }
};

int main() {
    resultado r1, r2;
    r1.entrada();
    r2.entrada();
    r1.mostra();
    r2.mostra();
    cout << "Total de r1: " << r1.total() << endl;
    cout << "Media de r1: " << r1.media() << endl;
    cout << "Total de r2: " << r2.total() << endl;
    cout << "Media de r2: " << r2.media() << endl;
    return 0;
}
