#include <iostream>

using namespace std;

void counterOfEqualLetters(){
    string word1, word2;
    cout<<"Palabra 1: "<<endl;
    cin>>word1;
    cout<<"Palabra 2: "<<endl;
    cin>>word2;      
    int count = 0;
    for (int i = 0; i < word1.size(); i++)
    {
        for (int j = 0; j < word2.size(); j++)
        {
            if (word1[i]==word2[j])
            {
                count++;
            }
        }
    }
    cout<<"Cantidad de letras iguales: "<<count<<endl;
}

int main() {
    counterOfEqualLetters();
    return 0;
}