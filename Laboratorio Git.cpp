#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivoEntrada("input/ArchivoEntrada.txt");
    if (archivoEntrada.is_open()) {
        cout << "Archivo abierto" << endl;
        string linea;
        while (getline(archivoEntrada, linea)) {
            cout << linea << endl;
        }
    }
    return 0;
}
