#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNo = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout<<"Welcome to the Guessing Number game!"<<endl;
    do {
        cout<<"Enter your guess number between (1-100): ";
        cin>>guess;
        attempts++;
        if (guess < secretNo) {
            cout<<"It's too low! Try again!"<<endl;
        } else if (guess > secretNo) {
            cout<<"It's too high! Try again!"<<endl;
        } else {
            cout<<"Yupppp Congratulations! You've guessed the number ("<<secretNo<<") in "<<attempts<<" attempts."<<endl;
        }
    } while (guess != secretNo);
    return 0;
}
