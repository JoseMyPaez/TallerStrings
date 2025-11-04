#include <iostream>

using namespace std;

int vowelCounter(string text){
    int counter=0;
    for (int i = 0; i < text.size(); i++)
    {
        char userChar= text[i];
        if (userChar=='a'||userChar=='e'||userChar=='i'||userChar=='o'||userChar=='u'||userChar=='A'||userChar=='E'||userChar=='I'||userChar=='O'||userChar=='U')
        {
            counter++;
        }
    }
    cout<<"Hay "<<counter<<" vocales"<<endl;
    return counter;
}

bool validateLetter(char letter){
    return (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z');
}

int consonantsCounter(string userName){
    int counter=0;
    for (int i = 0; i < userName.size(); i++)
    {
        char userChar= userName[i];
        if (validateLetter(userChar))
        {
            if (userChar=='a'||userChar=='e'||userChar=='i'||userChar=='o'||userChar=='u'||userChar=='A'||userChar=='E'||userChar=='I'||userChar=='O'||userChar=='U')
            {
                continue;
            }else 
            {
                counter++;
            }
        }
    }
    cout<<"Hay "<<counter<<" consonantes"<<endl;
    return counter;
}

void textCounter(){
    string texto = "Desarrollo de Software";
    consonantsCounter(texto);
    vowelCounter(texto);
}

int main(){
    textCounter();
    return 0;
}