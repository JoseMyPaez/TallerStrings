#include <iostream> 

using namespace std;

void printTwoArrays(string products[], float prices[], int size){
    cout<<"IMPRIMIR LA DOS LISTAS"<<endl;
    cout << "Lista de productos y precios:" << endl;
    for(int i = 0; i < size; i++){
        cout << products[i] << " - " << prices[i] <<"$"<< endl;
    }
}

void totalPrice(float prices[], int size){
    cout<<"IMPRIMIR PRECIO TOTAL"<<endl;    
    float sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += prices[i];
    }
    cout<<"El total a pagar es de $"<<sum << endl;
}

void printUpperTo(string products[], float prices[], int size, int upperTo){
    cout<<"PRODUCTOS CON PRECIO MAYOR O IGUAL A $"<<upperTo<<endl;
    for(int i = 0; i < size; i++){
        if (prices[i]>= upperTo)
        {
            cout << products[i] << " - " << prices[i] <<"$"<< endl;
        }
    }    
}




void program(){
    int size = 6;
    string products[size] = {"Manzanas", "Peras", "Uvas", "Bananas", "Mangos", "Fresas"};
    float prices[size] = {1500, 2300, 1800, 3100, 2700, 2600};    
    int minToPrint= 2500;
    printTwoArrays(products, prices, size);
    cout<<endl<<endl;
    totalPrice(prices, size);
    cout<<endl<<endl;
    printUpperTo(products, prices, size, minToPrint);
}

int main(){
    program();
    return 0;
}