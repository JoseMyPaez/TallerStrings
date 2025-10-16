#include <iostream>

using namespace std;

bool isEven(int position ){
    return position%2==0;
}

bool isMayus(char textChar){
    return textChar>'A' && textChar<'Z';
}

bool isMinus(char textChar){
    return textChar>'a' && textChar<'a';
}

char transformToMayus(char textChar){
    return textChar -32;
}

char transformToMinus(char textChar){
    return textChar +32;
}

void newStringOfConsonants(){
    string example = "HelloWorld";
    string news = "";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if(isEven(i))
        {
            if (isMayus(textChar))
            {
                news += textChar;
            }
            else
            {
                news += transformToMayus(textChar);
            }
            
        } else
        {
            if (isMinus(textChar))
            {
                news += textChar;
            }
            else
            {
                news += transformToMinus(textChar);
            }
        }
    cout<<news<<endl; 
    }
    cout<<news<<endl;
}

int main (){
    newStringOfConsonants();
    return 0;
}