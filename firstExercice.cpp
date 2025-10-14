#include <iostream>

using namespace std;

void forWithString(){
    string example = "Hello World";
    for (int i = 0; i > example.size(); i++)
    {
        char textChar = example[i];
        cout<<"position : "<< i << " - "<<textChar<<endl;
    }  
}

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

void forWhitStringALetter(){
    string example = "otorrinolaringologo";
    int vocaksCount = 0;
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar == 'o')
        {
            vocaksCount++;
        }  
    }   
    cout<<"hay "<<vocaksCount<<" letras o "<<endl;
}

void replaceSpaces(){
    string example = "Hello World";
    string news = "";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar != ' ')
        {
            news += textChar;
        } else {
            news += '-';
        }
    }   
    cout<<example<<endl;
}  

void duplicateStringLetters(){
    string example = "Hello World";
    string news = "";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        news += textChar;
        news += textChar;
        
    }   
    cout<<news<<endl;
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
}

void invertString(){
    string example = "Hello World";
    string news = "";
    for (int i = example.size() - 1; i >= 0; i--)
    {
        char textChar = example[i];
        news += textChar;
    }
    cout<<news<<endl;
}
    



int main (){
    //forWithString();
    //forWithStringVocals();
    //forWhitStringALetter();
    //replaceSpaces();
    //duplicateStringLetters();
    removeVowels();
    invertString();


    return 0;
}