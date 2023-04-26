/*
Implemente um programa de computação que atenda a estrutura de herança
mostrada na Figura 2. 
*/

#include <iostream>

using namespace std;

class livro {
    private:
    public:
         void mostra(){
            cout << "Primeiro\n";
        }
};
class caderno: public livro{
    private:
    public:
         void mostra(){
            cout << "segundo\n";
        }
};
class cadernoDeCiencias: public caderno{
    private:
    public:
     void mostra(){
            cout << "Terceiro\n";
        }
};

int main(){
    cadernoDeCiencias c;
    c.mostra();
    c.caderno::mostra();
    c.livro::mostra();
    return 0;
}
