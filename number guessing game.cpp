#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time());

    int secretnum = rand();

    int guess;

    cout<<"******Number Guessing Game******"<<endl;

    do {
        cout<<"enter your guess number:";
        cin>>guess;

        if(guess == secretnum){
            cout<<"Congratulations!"<<endl;
        } else if(guess < secretnum){
            cout<<"Too Low"<<endl;
        } else {
            cout<<"Too High"<<endl;
        }

    } while (guess != secretnum);

    return 0;
}
