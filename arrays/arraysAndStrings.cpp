#include <iostream>

using namespace std;

void forWithString() {
    string str = "Hola Mundo";
    for (int i = 0; i < str.size()-1; i++)
    {
        char c = str[i];
        cout << c << endl;
    }
}

void forWithArray() {
    int size = 3;
    int array [size] = {1,12,25};
    int fistValue = array[0];
    cout << "Tamaño del arreglo: " << sizeof(array) << endl;
    cout << "Primer valor: " << fistValue << endl;
    cout << "Recorriendo el arreglo: " << endl;
    for (int i = 0; i < size ; i++)
    {
        int c = array[i];
        cout << c << endl;
    }
    cout << "salida" << endl;
}

int main() {
    //forWithString();
    forWithArray();
    return 0;
}