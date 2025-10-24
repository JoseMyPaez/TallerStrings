#include <iostream>

using namespace std;

/*Objetivo: Analizar una cadena y determinar:
1. Cuántas vocales contiene.
2. Cuántas consonantes tiene.
3. Cuántos caracteres no alfabéticos (números o símbolos) hay.*/

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

int consonantsCounter(string userName){
    int counter=0;
    for (int i = 0; i < userName.size(); i++)
    {
        char userChar= userName[i];
        if (userName[i]<='z'&& userName[i]>='A')
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

int nonAlphabeticCounter(string userName){
    int counter=0;
    for (int i = 0; i < userName.size(); i++)
    {
        if (userName[i]<='z'&& userName[i]>='A')
        {
        continue;
        }else
        {
        counter++;
        }
    }
    cout<<"Hay "<<counter<<" caracteres no alfabeticos "<<endl;
    return counter;
}

void textCounter(){
    string userName = "Hell0W0rld!";
    consonantsCounter(userName);
    vowelCounter(userName);
    nonAlphabeticCounter(userName);
}

int main()
{
    textCounter();
    return 0;
}