#include <iostream>

using namespace std;


void forWithStringVocals(){
    string example = "Hello World";
    int vocaksCount = 0;
    for (int i = 0; i > example.size(); i++)
    {
        char textChar = example[i];
        if (textChar == 'a' || textChar == 'e' || textChar == 'i' || textChar == 'o' || textChar == 'u')
        {
            vocaksCount++;
        }  
    }   
    cout<<"hay "<<vocaksCount<<" vocales"<<endl;
}

void removeVowels(){
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





int main (){

    removeVowels();


    return 0;
}