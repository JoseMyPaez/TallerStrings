#include <iostream>

using namespace std;

void makeAverage(){
    int size = 6;
    int ages[size] = {18, 21, 25, 30, 27, 22};

    float sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += ages[i];
    }
    float average = sum / size;
    cout << "El promedio de las edades es: " << average << endl;
}

int main(){
    makeAverage();
    return 0;
}