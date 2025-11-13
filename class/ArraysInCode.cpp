#include<iostream>

using namespace std;

class IntOfArrayManager {
    public:
        bool continueRunning = true;
        int arraySize = 0;
        int* prices; ;
        string* products;

    void run() {
        while (continueRunning)
        {
            int userAction = getUserAction();
            switch (userAction)
            {
            // Modificar
            case 3:
                modifyArray();
                break;
            // Imprimir    
            case 2:
                printArray();
                break;
            // Re-inicializar    
            case 1:
                cout << "Ingrese el tamaño de la lista: ";
                cin >> arraySize;
                products = getNewStringList();
                prices= getNewIntList();
                break;
            // Buscar
            case 4:
                ProductBrowser();
                break;
            // Rango
            case 5:
                productsInRange();
                break;
            // Total
            case 6:
                calculateTotalSales();
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
    
    int* getNewIntList() {
        int* newList = new int[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            int userValue;
            cout << "Ingrese el precio para la posicion " << i + 1 << ": ";
            cin >> userValue;
            newList[i] = userValue;
        }
        return newList;
    }

    string* getNewStringList() {
        string* newList = new string[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            string userValue;
            cout << "Ingrese el producto para la posicion " << i + 1 << ": ";
            cin >> userValue;
            newList[i] = userValue;
        }
        return newList;
    }

    void productsInRange() {
        int minPrice, maxPrice;
        cout << "Ingrese el precio minimo: ";
        cin >> minPrice;
        cout << "Ingrese el precio maximo: ";
        cin >> maxPrice;
        cout << "Productos en el rango de precios " << minPrice << " - " << maxPrice << ":" << endl;
        for (int i = 0; i < arraySize; i++)
        {
            if (prices[i] >= minPrice && prices[i] <= maxPrice) {
                cout << "Producto: " << products[i] << " - Precio: " << prices[i] << endl;
            }
        }
    }

    void modifyArray() {
        int positionToModify;
        printArray();
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
        printArray();
    }

    void ProductBrowser() {
        string productToSearch;
        cout << "Ingrese el nombre del producto a buscar: ";
        cin >> productToSearch;
        for (int i = 0; i < arraySize; i++)
        {
            if (products[i] == productToSearch) {
                cout << "Producto encontrado: " << products[i] << " - Precio: " << prices[i] << endl;
                break;
            }
        }
    }   

    void printArray() {
        cout << "Lista actual" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < arraySize; i++)
        {
            cout << "Posicion " << i + 1 << " -> Producto: " << products[i] <<" precio: "<<prices[i]<< endl;
        }
    }
    
    void calculateTotalSales() {
        int total = 0;
        for (int i = 0; i < arraySize; i++)
        {
            total += prices[i];
        }
        cout << "El total de ventas es: " << total << endl;
    }

    int getUserAction() {
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
    }
};

int main() {
    IntOfArrayManager arrayManager;
    arrayManager.run();
    return 0;
}