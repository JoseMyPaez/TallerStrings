#include <iostream>

using namespace std;

/*Objetivo: Verificar si un código de acceso cumple con estas reglas:
1. Debe contener al menos un dígito.
2. Debe incluir al menos un símbolo especial (@, #, $, %).
3. No debe contener espacios*/

bool numberValoration(string userName){
    bool valoration = false;
    for (int i = 0; i <= userName.size()-1; i++)
    {
        char userChar= userName[i];
        if (userName[i]<='9'&& userName[i]>='0')
        {
            valoration = true;
        }
    }
    cout<<"hay numeros "<<valoration<<endl;
    return valoration;
}

bool counterPunction(string userText){
    string punctions = "@#$%";
    bool status = false;
    for (int i = 0; i <= userText.size()-1; i++)
    {
        for (int j = 0; j <= punctions.size()-1; j++)
        {
            if (userText[i] == punctions[j])
            {
                status = true;
            }
        }  
    }
    cout<<"Hay caracteres especiales"<<status<<endl;
    return status; 
}

bool validatewithoutSpace(string userName){
    bool status = true;
    for (int i = 0; i < userName.size()-1; i++)
    {
        if (userName[i]==' ')
        {
            status = false;
        }
    }
    cout<<"El estado de espacios es "<<status<<endl;
    return status;
}

bool validationcode(){
    string code = "#2";
    validatewithoutSpace(code);
    counterPunction(code);
    numberValoration(code);
    //return validatewithoutSpace(code) && counterPunction(code) && numberValoration(code);
    return false;
}

int main(){
    validationcode();
    return 0;
}