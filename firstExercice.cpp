#include <iostream>

using namespace std;

void newStringOfConsonants(){
    string example = "Hello World";
    string news = "";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar == 'a' || textChar == 'e' || textChar == 'i' || textChar == 'o' || textChar == 'u')
        {
            news += "";
        } else {
            news += textChar;
        }
    }
    cout<<news<<endl;
}

int main (){
    newStringOfConsonants();
    return 0;
}