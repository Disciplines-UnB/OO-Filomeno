#include <iostream>
using namespace std;   
class complexa{
    private:
        float real;
        float abcissa;
    public:
        void entrada(float r, float a){
            real = r;
            abcissa = a;
        }
        complexa soma(complexa c1, complexa c2){
            complexa c3;
            c3.real = c1.real + c2.real;
            c3.abcissa = c1.abcissa + c2.abcissa;
            return c3;
        }
        void mostra( complexa c){
            cout << c.real << " + "  << "j "<< c.abcissa << endl;
        }
    };
int main(){
    char resp;
    do{
        complexa c1, c2, c3;
        float r1, a1, r2, a2;
        char thrash1, thrash2, thrash3, thrash4;
        cout << "Digite a coordenada X no formato 'real' + j 'abcissa': "; cin >> r1 >> thrash1 >> thrash2 >> a1;
        cout << "Digite a coordenada Y no formato 'real' + j 'abcissa': : "; cin >> r2 >> thrash3 >> thrash4 >> a2;
        c1.entrada(r1, a1);
        c2.entrada(r2, a2);
        c3 = c3.soma(c1, c2);
        c3.mostra(c3);
        cout << "Deseja continuar? ('s' ou 'S') "; cin >> resp;
    }
    while(resp == 's' || resp == 'S');
    return 0;
    };
