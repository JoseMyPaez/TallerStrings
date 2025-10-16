#include <iostream>

using namespace std;

bool validateLarge(string password){
    cout<<"Length: "<<password.size()<<endl;
    return password.size()>=8;
}

bool validateSpecialChar(string password){
    int counter = 0;
    for (int i = 0; i < password.size(); i++)
    {
        char textChar = password[i];
        if (textChar >='!' && textChar <= '/')
        {
            counter++;
        }
    }
    cout<<"Special Char: "<<counter<<endl;
    return counter >= 3;    
}

bool validateMayus(string password){
    int counter = 0;
    for (int i = 0; i < password.size(); i++)
    {
        char textChar = password[i];
        if (textChar>'A' && textChar < 'Z')
        {
            counter++;
        }
    }
    cout<<"Mayus: "<<counter<<endl;
    return counter >= 1;    
}

bool validateMinus(string password){
    int counter = 0;
    for (int i = 0; i < password.size(); i++)
    {
        char textChar = password[i];
        if (textChar>'a' && textChar < 'z')
        {
            counter++;
        }
    }
    cout<<"Minus: "<<counter<<endl;
    return counter >= 1;    
}
void passwordValidator(){
    string password = "Hell0W0rld*+!";
    if (validateLarge(password) && validateSpecialChar(password) && validateMayus(password) && validateMinus(password))
    {
        cout<<"Password valid"<<endl;
    } else
    {
        cout<<"Password invalid"<<endl;
    }


}

int main (){
    passwordValidator();
    return 0;
}