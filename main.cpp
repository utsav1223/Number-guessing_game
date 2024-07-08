#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int secret_number = rand() % 100 + 1;
    int guess, attempts=0;
    cout<<"Welcome ! to guess the number game "<<endl;
    do{
    cout<<"Enter your guess between (1-100) : ";
    cin >>guess;
    attempts++;
    if(guess < secret_number){
        cout<<"Too low try again ! "<<endl;
    }
    else if(guess > secret_number){
        cout<<"Too high try again ! "<<endl;
    }
    else{
        cout<<"Congratulations ! you guessed the correct number ! [Total Attempts ! "<<attempts<<" ] "<<endl;
    }
    }while (guess!=secret_number);
    return 0;
    
}