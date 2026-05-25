#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivoEntrada("input/ArchivoEntrada.txt");
    ofstream archivoSalida ("output/archivoSalida.txt");
    if (archivoEntrada.is_open()&& archivoSalida.is_open()) {
        cout << "Archivo abierto" << endl;
        string linea;
        while (getline(archivoEntrada, linea)) {
           archivoSalida<<linea<<endl;
        }
        cout << "Archivo copiado exitosamente"<<endl;
    }
    return 0;
}
