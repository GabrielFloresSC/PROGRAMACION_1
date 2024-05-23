#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivo();
void LeerArchivo();

int main()
{
    system("cls");
    EscribirArchivo();
    LeerArchivo();
    return 0;
}

void EscribirArchivo()
{
    ofstream archivo;
    archivo.open("hola.txt");
    archivo << "hola mundo";
    archivo.close();   
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
