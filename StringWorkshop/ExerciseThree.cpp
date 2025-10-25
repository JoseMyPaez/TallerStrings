#include <iostream>

using namespace std;
/*Objetivo: Dado un código como "A12-BX9-Z", el programa debe:
1. Contar cuántos guiones (-) hay.
2. Contar cuántos caracteres son dígitos.
3. Validar que el código termine con una letra mayúscula.*/

int counterScript(string password){
    int counter=0;
    for (int i = 0; i < password.size(); i++)
    {
        char userChar= password[i];
        if (userChar=='-')
        {
            counter++;
        }
    }
    cout<<"Hay "<<counter<<" guiones"<<endl;
    return counter;
}

int numberCounter(string userName){
    int counter=0;
    for (int i = 0; i < userName.size(); i++)
    {
        char userChar= userName[i];
        if (userName[i]<='9'&& userName[i]>='0')
        {
            counter++;
        }
    }
    cout<<"Hay "<<counter<<" numeros"<<endl;
    return counter;
}

bool validateLetter(char letter){
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}

bool validateLastLetter(string userName){
    char lastLetter = userName[userName.size()-1];
    cout<<"ultima letra "<<lastLetter<<endl;
        if (validateLetter(lastLetter) )
        {
            cout<<"La ultima posicion es una letra"<<endl;
            return true;
        }else
        {
            cout<<"La ultima posicion no es una letra"<<endl;
            return false;
        }
}

void validateCode(){
    string code = "A12-BX9-Z";
    counterScript(code);
    numberCounter(code);
    validateLastLetter(code);
}

int main()
{
    validateCode();
    return 0;
}