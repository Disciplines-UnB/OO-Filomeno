#include <iostream>
using namespace std;   
class tempo{
    private:
        int hora;
        int minuto;
        int segundo;
    public:
        void add_tempo(){
            tempo t1, t2;
            cout << "Digite o tempo 1: " << endl; 
            cout << "Horas: "; cin >> t1.hora;
            cout << "Minutos: "; cin >> t1.minuto;
            cout << "Segundos: "; cin >> t1.segundo;
            cout << "Digite o tempo 2: " << endl;
            cout << "Horas: "; cin >> t2.hora;
            cout << "Minutos: "; cin >> t2.minuto;
            cout << "Segundos: "; cin >> t2.segundo;
            hora = t1.hora + t2.hora;
            minuto = t1.minuto + t2.minuto;
            segundo = t1.segundo + t2.segundo;
            if (segundo > 60){
                segundo = segundo - 60;
                minuto = minuto + 1;
            }
            if (minuto > 60){
                minuto = minuto - 60;
                hora = hora + 1;
            }
            if (hora > 24){
                hora = hora - 24;
            }
            cout << "Tempo total em hh mm ss: " << endl;
            cout << "Horas: " << hora << endl;
            cout << "Minutos: " << minuto << endl;
            cout << "Segundos: " << segundo << endl;     
        }
    };
int main(){
    char resp;
    do{
        tempo t1;
        t1.add_tempo();
        cout << "Deseja continuar? ('s' ou 'S') "; cin >> resp;
    }
    while (resp == 's' || resp == 'S');
    return 0;
    };
