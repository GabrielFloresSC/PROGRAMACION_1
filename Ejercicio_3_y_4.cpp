#include <iostream>
#include <fstream>

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
    archivo.open("ascii.txt");
    for (int i = 32; i < 255; i++)
    {
        archivo << "ASCII " << i << ": "<< char(i) << endl;
    }
    archivo.close();   
}

void LeerArchivo()
{
    ifstream archivo;
    archivo.open("ascii.txt");
    for (int i = 32; i < 255; i++)
    {
        cout << char(i) << endl;
    }
    archivo.close();   
}