/*
Escreva uma classe Pessoa que tenha como atributos Id (Identidade), Nome e
Endereço. Ela tem um construtor para inicializar, uma função membro para
entrada e uma função membro para mostrar os dados membros. Crie outra classe
Estudante que herda a classe Pessoa. Ela tem como atributos adicionais a
matrícula e a nota. Que também tenha uma função membro para entrada e mostrar
os dados membros. 
*/

#include <iostream>

using namespace std;

class Pessoa{
    private:
        int Id;
        string Nome,Endereço;
    public:
    Pessoa(){
        this -> Id = Id;
        this -> Nome = "Nome";
        this -> Endereço = "Endereço";
    }
    ~Pessoa(){}
    void entrada(){
        
        do {cout << "digite o Id: ";
        cin >> Id;} while(Id < 0);
        cout << endl;
        cout << "digite o Nome: ";
        cin >> Nome;
        cout << endl;
        cout << "digite o Endereço: ";
        cin >> Endereço;
        cout << endl;
    }
    void mostra(){
        
        cout <<' '<< Id << ' ' << Nome << ' ' << Endereço << endl;; 
    }
};

class estudante:public Pessoa{
    private:
    int matricula;
    float nota;
    public:
    void entradaE(){
        cout << "digite a matricula: ";
        cin >> matricula;
        cout << endl;
        
        do{cout << "digite o nota: ";
        cin >> nota;} while( nota < 0 || nota > 10);
    }
    void mostraE( ){
        cout << "A nota é: " << nota << " E a matricula é: " << matricula << endl;
    }
};

int main()
{
    estudante e[2];
    for(int i = 0 ; i < 3; i++){
        e[i].Pessoa::entrada();
        e[i].entradaE();
        e[i].Pessoa::mostra();
        e[i].mostraE();
}
    return 0;
}
