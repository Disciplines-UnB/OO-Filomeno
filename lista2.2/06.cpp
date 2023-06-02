#include <iostream>
using namespace std;

class Cartesiano{
    private:
        float x, y;
    public:
        void entrada_dados();
        void mostra_dados();
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

int main(void){
    Cartesiano dc;
    dc.entrada_dados();
    dc.mostra_dados();

    return 0;
}
