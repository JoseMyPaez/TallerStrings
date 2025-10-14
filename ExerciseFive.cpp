#include <iostream> 

using namespace std;

void itsPalindrome(string word){
    bool isPalindrome = true;
    for (int i = 0; i < word.size()/2; i++)
    {
        if (word[i] != word[word.size()-1-i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout<<"Es palíndromo"<<endl;
    } else {
        cout<<"No es palíndromo"<<endl;
    }
    
}   

int main(){
    string word;
    cout<<"Ingrese una palabra: "<<endl;
    cin>>word;
    itsPalindrome(word);
    return 0;

}