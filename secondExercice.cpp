#include <iostream>

using namespace std;

void newStringOfConsonants(){
    string example = "HelloWorld";
    string news = "";
    for (int i = 0; i < example.size(); i++)
    {
        char textChar = example[i];
        if (textChar>'A' && textChar < 'Z')
        {
            if (i%2==0)
            {
                news += textChar;
            } else {
                news += textChar+32;
            }
        }else if (textChar>'a' && textChar<'z')
        {
            if (i%2==0)
            {
                news += textChar-32;
            } else {
                news += textChar;
            }
        }
        else
        {
            news+='#'; 
        }
        
    cout<<news<<endl; 
    }
    cout<<news<<endl;
}

int main (){
    newStringOfConsonants();
    return 0;
}