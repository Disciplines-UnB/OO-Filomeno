#include <iostream>
using namespace std;

class marca {
    private:
        char name[80]; int matricula; float notas[3];
    public:
        void entrada(){
            cout << "Digite a matrícula do estudante: "; cin >> matricula;
            cout << "Digite o nome do estudante: "; cin >> name;
            for (int i = 0; i<3; i++){
                cout << "Digite a nota " << i+1 << " do estudante: "; cin >> notas[i];
            }
        };
        float soma(){
            float soma = 0;
            for (int i = 0; i<3; i++){
                soma += notas[i];
            }
            return soma;
        }
        float media(){
            return soma()/3;
        }
        
};

int main() {
    marca a[3];
    for (int i = 0; i<3; i++){
        a[i].entrada();
        a[i].soma();
        a[i].media();
    }
    for (int i = 0; i<3; i++){
        cout << "A média do estudante " << i+1 << " é: " << a[i].media() << endl;
    }
    return 0;
}
