#include <iostream>

using namespace std;

void findMax(int size, float prices[]){
    float max = prices[0];
    for(int i = 1; i < size; i++){
        if(prices[i] > max){
            max = prices[i];
        }
    }
    cout << "El número máximo es: " << max << endl;
}

void findMin(int size, float prices[]){
    float min = prices[0];
    for(int i = 1; i < size; i++){
        if(prices[i] < min){
            min = prices[i];
        }
    }
    cout << "El número mínimo es: " << min << endl;
}

void finder(){
    int size = 6;
    float prices[size] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    findMax(size, prices);
    findMin(size, prices);   
}

int main(){
    finder();
    return 0;
}