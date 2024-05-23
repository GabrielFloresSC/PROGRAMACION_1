#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivos();
void LeerArchivo();

int main()
{
    system("cls");
    EscribirArchivos();
    LeerArchivo();
    return 0;
}

void EscribirArchivos()
{
    ofstream archivoOriginal, archivoCopia;
    archivoOriginal.open("original.txt");
    archivoOriginal << "Texto";
    string copia;
    archivoCopia.open("copia.txt");
    archivoCopia << "Texto";
    archivoOriginal.close();   
}

void LeerArchivo()
{
    ifstream archivo;
    archivo.open("hola.txt");
    string leer;
    getline(archivo, leer);
    cout << leer <<endl;
    archivo.close();   
}