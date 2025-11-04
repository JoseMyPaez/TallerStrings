#include <iostream>

using namespace std;

void counterCharsWhithOutSpaces(){
    string userText = "Programacion  en C++";
    int counter=0;
    for (int i = 0; i < userText.size(); i++)
    {
        char userChar= userText[i];
        if (userChar != ' ')
        {
            counter++;
        }
    }
    cout<<"Cantidad de caracteres sin espacios: "<<counter<<endl;
}

int main()
{
    counterCharsWhithOutSpaces();
    return 0;
}