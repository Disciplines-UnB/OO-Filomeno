#include <iostream>
using namespace std;

class Cartesiano{
    private:
        float x, y;
    public:
        void entrada_dados();
        void mostra_dados();
        void mostra_quadrante();
};

void Cartesiano::entrada_dados(){
    cout << "Digite a coordenada de x: ";
    cin >> x;
    cout << "Digite a coordenada de y: ";
    cin >> y;
}

void Cartesiano::mostra_dados(){
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void Cartesiano::mostra_quadrante(){
    if(x > 0 && y > 0){
        cout << "1º Quadrante" << endl;
    }else if(x < 0 && y > 0){
        cout << "2º Quadrante" << endl;
    }else if(x < 0 && y < 0){
        cout << "3º Quadrante" << endl;
    }else if(x > 0 && y < 0){
        cout << "4º Quadrante" << endl;
    }else{
        cout << "Origem" << endl;
    }
}

int main(void){
    Cartesiano dc;
    dc.entrada_dados();
    dc.mostra_dados();
    dc.mostra_quadrante();

    return 0;
}
