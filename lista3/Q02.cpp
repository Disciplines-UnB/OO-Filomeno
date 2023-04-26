#include <iostream>
using namespace std;
 

class círculo{
    private: 
        float raio;
    public:
        void le_raio(){
            cout << "Digite o raio: "; cin >> raio;
        }
        float area(){
            return 3.14 * raio * raio;
        }
        float circum(){
            return 2 * 3.14 * raio;
        }
};


int main() {
    círculo c1;
    c1.le_raio();
    cout << "Area: " << c1.area() << endl;
    cout << "Circunferencia: " << c1.circum() << endl;
    return 0;
}
