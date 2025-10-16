#include <iostream>

using namespace std;

int positiveSignalCounter(string signal){
    int counter = 0;
    for (int i = 0; i < signal.size(); i++)
    {
        char textChar = signal[i];
        if (textChar == '-')
        {
            counter++;
        }
    }
    cout<<"positive signal: "<<counter<<endl;
    return counter;
}

int negativeSignalCounter(string signal){
    int counter = 0;
    for (int i = 0; i < signal.size(); i++)
    {
        char textChar = signal[i];
        if (textChar == '.')
        {
            counter++;
        }
    }
    cout<<"negative signal: "<<counter<<endl;
    return counter;
}

double averageCalculator(int positiveSignal , int negativeSignal ){
    double average = positiveSignal / negativeSignal;
    return average;
}



void validatorSignal(){
    string signal = "-..-.-.--------..-.-.-..-----------..-.-";
    double average= averageCalculator(positiveSignalCounter(signal),negativeSignalCounter(signal));
    cout<<"El calculo es de :"<< average <<endl;
}

int main (){
    validatorSignal();
    return 0;
}