#include <iostream>

using namespace std;

//Validar si un nombre de usuario cumple con las siguientes condiciones:
//1. Debe tener entre 6 y 12 caracteres.
//2. Debe empezar con una letra.
//3. No debe contener espacios.
bool validateSize(string userName){
    int sizeUsername = userName.size();
    cout<<"Tamaño "<<sizeUsername<<endl;
    if (sizeUsername<=12&&sizeUsername>=6)
    {
        return true;
    }else
    {
        return false;
    }    
}

bool validatefirstLetter(string userName){
    cout<<"Prmera letra "<<userName[0]<<endl;
    return (userName[0] >= 'a' && userName[0] <= 'z') || (userName[0] >= 'A' && userName[0] <= 'Z');
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
    cout<<"El estado de espacios es "<<status<<endl;
    return status;
}

void userNameValidation(){
    string userName = "hll0W0rld!";
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
