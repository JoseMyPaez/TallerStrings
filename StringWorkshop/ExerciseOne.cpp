#include <iostream>

using namespace std;

//Validar si un nombre de usuario cumple con las siguientes condiciones:
//1. Debe tener entre 6 y 12 caracteres.
//2. Debe empezar con una letra.
//3. No debe contener espacios.
bool validateSize(string userName){
    int sizeUsername = userName.size();
    if (sizeUsername<=12&&sizeUsername>=6)
    {
        return true;
    }else
    {
        return false;
    }    
}

bool validatefirstLetter(string userName){
    if (userName[0]<='z'&& userName[0]>='A')
    {
        return true;
    }else
    {
        return false;
    }
}

bool validatewithoutSpace(string userName){
    bool status = true;
    for (int i = 0; i < userName.size(); i++)
    {
        char userChar= userName[i];
        if (userChar==' ')
        {
            status = false;
        }
    }
    return status;
}

void userNameValidation(){
    string userName = "Hell0W0rld!";
    if (validatefirstLetter(userName)&&validateSize(userName)&&validatewithoutSpace(userName))
    {
        cout<<"Nombre de usuario correcto"<<endl;
    } else
    {
        cout<<"Nombre de usuario incorrecto"<<endl;
    }
}
int main()
{
    userNameValidation();
    return 0;
}
