#include <iostream>

using namespace std;
/*Objetivo: Analizar una frase ingresada por el usuario y:
1. Contar cuántas palabras tiene (separadas por espacios).
2. Contar cuántos signos de puntuación aparecen.
3. Verificar si la frase termina con un punto (.).*/

int counterSpaces(string userText){
    int counter=0;
    bool insideWord = false;
    int i = 0;
    while (i < userText.length()) {
        if (userText[i] != ' ') 
        {
            if (!insideWord)
            {
                counter++;
                insideWord= true;
            }
        } else 
        {
            insideWord = false;
        }
        i++;
    }
    cout << "Total de palabras: " << counter << endl;
    return counter;
}

int counterPunction(string userText){
    string punctions = ".,;:!¡¿?'()-[]{}";
    int counter = 0;
    for (int i = 0; i <= userText.size()-1; i++)
    {
        for (int j = 0; j <= punctions.size()-1; j++)
        {
            if (userText[i] == punctions[j])
            {
                counter++;
            }
        }  
    }
    cout<<"Hay "<<counter<<" signos de puntuacion"<<endl;
    return counter; 
}

bool validateLastPoint(string userName){
    char lastLetter = userName[userName.size()-1];
        if (lastLetter =='.')
        {
            cout<<"La ultima posicion es un punto"<<endl;
            return true;
        }else
        {
            cout<<"La ultima posicion no es un punto"<<endl;
            return false;
        }
}

void verifyText(){
    string text ="El bucle while es una estructura de repetición que ejecuta un bloque de código mientras la condición sea verdadera.";
    counterSpaces(text);
    validateLastPoint(text);
    counterPunction(text);
}

int main(){
    verifyText();
    return 0;
}
