#include <iostream>
using namespace std;

class Estudante{
    private:
        float nota;
        int grau;
    public:
        Estudante(float nota, int grau){
            this->nota = nota;
            this->grau = grau;   
        }
        void membro(){
            cout << "Nota: " << nota << endl;
            cout << "Grau: " << grau << endl;
        }
};

int main() {
    Estudante e1(7.4, 1);
    Estudante e2(8.5, 2);
    e1.membro();
    e2.membro();
    return 0;
}
