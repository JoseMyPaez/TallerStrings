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

int nonAlphabeticCounter(string userName){
    int counter=0;
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName[i]<='z'&& userName[i]>='A')
        {
        continue;
        }else
        {
        counter++;
        }
    }
    cout<<"Hay "<<counter<<" caracteres no alfabeticos "<<endl;
    return counter;
}

void textCounter(){
    string userName = "Hell0W0rld!";
    consonantsCounter(userName);
    vowelCounter(userName);
    nonAlphabeticCounter(userName);
}

int main()
{
    textCounter();
    return 0;
}