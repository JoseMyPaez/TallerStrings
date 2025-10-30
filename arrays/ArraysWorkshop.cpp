#include <iostream>

using namespace std;

void printEmployers(){
    cout<<"Primer ejercicio"<<endl;
    int size = 4;
    string employees[size] = {"Ana", "Luis", "María", "Pedro"};
    cout << "Lista de empleados:" << endl;
    for(int i = 0; i < size; i++){
        cout << employees[i] << endl;  
    }
}

void makeAverage(){
    cout<<endl<<endl<<"Segundo ejercicio"<<endl;
    int size = 5;
    float grades[size] = {3.5, 4.0, 2.8, 3.9, 4.2};
    float sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += grades[i];
    }
    float average = sum / size;
    cout << "El promedio de las calificaciones es: " << average << endl;
}

void printMax(){
    cout<<endl<<endl<<"Tercer ejercicio"<<endl;
    int size = 6;
    int numbers[size] = {8, 12, 5, 20, 7, 15};
    int max = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    cout << "El número máximo es: " << max << endl;
}

void evenCounter(){
    cout<<endl<<endl<<"Cuarto ejercicio"<<endl;
    int size = 8;
    int values[size] = {2, 5, 7, 8, 10, 13, 16, 19};
    int evenCount = 0;
    for(int i = 0; i < size; i++){
        if(values[i] % 2 == 0){
            evenCount++;
        }
    }
    cout << "Cantidad de números pares: " << evenCount << endl;
}

void printTwoArrays(){
    cout<<endl<<endl<<"Quinto ejercicio"<<endl;
    int size = 3;
    string products[size] = {"Pan", "Leche", "Queso"}; 
    float prices[size] = {1500, 3200, 4800};
    cout << "Lista de productos y precios:" << endl;
    for(int i = 0; i < size; i++){
        cout << products[i] << " - " << prices[i] <<"$"<< endl;
    }
}

int main() {
    printEmployers();
    makeAverage();
    printMax();
    evenCounter();
    printTwoArrays();
    return 0;
}