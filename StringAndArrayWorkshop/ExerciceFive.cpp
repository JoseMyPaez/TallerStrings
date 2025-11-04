#include <iostream> 

using namespace std;

void printUpperAge(string names[], int ages[], int size, int ageLimit){
    cout << "Nombres con edad mayor a " << ageLimit << ":" << endl;
    for(int i = 0; i < size; i++){
        if(ages[i] > ageLimit){
            cout << names[i] << endl;
        }
    }
}

void ageFilter(){
    int size = 5;
    string names[size] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"};
    int ages[size] = {20, 16, 22, 15, 19};
    int ageLimit = 18;
    printUpperAge(names, ages, size, ageLimit);
}

int main(){
    ageFilter();
    return 0;
}