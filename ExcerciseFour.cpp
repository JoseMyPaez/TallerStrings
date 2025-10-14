#include <iostream>

using namespace std;

void countWordsLongerThanNumber(int minLength, string text) {
    int count = 0;
    string word = "";
    for (int i = 0; i < text.size(); i++) {
        if (text[i] != ' ') {
            word += text[i];
        } else {
            if (word.size() > minLength) {
                count++;
            }
            word = "";
        }
    }
    cout << "Cantidad de palabras con más de " << minLength << " letras: " << count << endl;  
}

int main() {
    string text;
    int minLength;
    cout << "Ingrese un texto: " << endl;
    getline(cin, text);
    cout << "Ingrese la longitud mínima: " << endl;
    cin >> minLength;
    countWordsLongerThanNumber(minLength, text);
    return 0;
}