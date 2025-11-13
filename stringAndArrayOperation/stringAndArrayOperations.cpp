#include<iostream>

using namespace std;

/*void printArray(string products[],int prices[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Posicion " << i + 1 << " - Producto: " << products[i]<< " - Precio: "<< prices[i] << endl;
    }
}*/

/*void modifyArray(string products[], int prices[], int size) {
    int positionToModify;
    printArray(products,prices,size);
    cout << "Ingrese la posicion a modificar: ";
    cin >> positionToModify;
    positionToModify = positionToModify - 1;
    string newProductName;
    int newPrice;
    cout << "Ingrese el nuevo nombre de Producto: ";
    cin >> newProductName;
    cout << "Ingrese el nuevo Precio de Producto: ";
    cin >> newPrice;
    products[positionToModify] = newProductName;
    prices[positionToModify] = newPrice;
    printArray(products,prices,size);
}*/

/*void ProductBrowser(string products[], int prices[], int size) {
    string productToSearch;
    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> productToSearch;
    for (int i = 0; i < size; i++)
    {
        if (products[i] == productToSearch) {
            cout << "Producto encontrado: " << products[i] << " - Precio: " << prices[i] << endl;
            break;
        }
    }
}

/*void productsInRange(string products[], int prices[], int size) {
    int minPrice, maxPrice;
    cout << "Ingrese el precio minimo: ";
    cin >> minPrice;
    cout << "Ingrese el precio maximo: ";
    cin >> maxPrice;
    cout << "Productos en el rango de precios " << minPrice << " - " << maxPrice << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        if (prices[i] >= minPrice && prices[i] <= maxPrice) {
            cout << "Producto: " << products[i] << " - Precio: " << prices[i] << endl;
        }
    }
}
    */

/*void calculateTotalSales(int prices[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    cout << "El total de ventas es: " << total << endl;
}*/

/*int getUserAction() {
    int userAction;
    cout << "---------------------" << endl;
cout<<"Implemente un menú con las siguientes opciones:"<<endl<<
"1. Registrar o reiniciar las ventas."<<endl<<
"2. Mostrar todas las ventas."<<endl<<
"3. Modificar el valor de una venta específica."<<endl<<
"4. Buscar una venta por nombre."<<endl<<
"5. Mostrar ventas dentro de un rango de precios."<<endl<<
"6. Calcular el total de ventas."<<endl<<
"0. para salir: " << endl;
    cin >> userAction;
    cout << "---------------------" << endl;
    return userAction;
}*/

/*string* getNewStringList(int size) {
    string* productName = new string[size];
    for (int i = 0; i < size; i++)
    {
        string newValue;
        cout << "Ingrese el nombre del producto para la posicion " << i + 1 << ": ";
        cin >> newValue;
        productName[i] = newValue;
    }
    return productName;
}

int* getNewIntList(int size) {
    int* values = new int[size];
    for (int i = 0; i < size; i++)
    {
        int newValue;
        cout << "Ingrese el precio de producto para la posicion " << i + 1 << ": ";
        cin >> newValue;
        values[i] = newValue;
    }
    return values;
}
 */

/*void run() {
    int arraySize = 0;
    string* products = getNewStringList(arraySize);
    int* prices = getNewIntList(arraySize);
    bool continueRunning = true;
    while (continueRunning)
    {
        int userAction = getUserAction();
        switch (userAction)
        {
        // Modificar
        case 3:
            modifyArray(products,prices, arraySize);
            break;
        // Imprimir    
        case 2:
            printArray(products,prices, arraySize);
            break;
        // Re-inicializar    
        case 1:
            cout << "Ingrese el tamaño de la lista: ";
            cin >> arraySize;
            products = getNewStringList(arraySize);
            prices= getNewIntList(arraySize);
            break;
        // Buscar
        case 4:
            ProductBrowser(products,prices, arraySize);
            break;
        // Rango
        case 5:
            productsInRange(products,prices, arraySize);
            break;
        // Total
        case 6:
            calculateTotalSales(prices, arraySize);
            break;
        // Salir    
        case 0:
            delete[] prices;
            delete[] products;
            continueRunning = false;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
}
*/
/*int main() {
    run();
    return 0;
}
    */