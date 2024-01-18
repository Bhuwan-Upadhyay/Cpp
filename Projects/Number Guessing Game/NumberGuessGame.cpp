#include <iostream>
#include <cstdlib>
// #include <ctime>

using namespace std;

class NumberTricks
{
    private:
    int guess;
    int secretNumber;

    public : NumberTricks()
    {
        guess = 0;
    }

    public : void RandomNumberGenerator()
    {
        srand(static_cast<unsigned int>(time(0)));

        // Range 1 to 100
        secretNumber = rand() % 100 + 1;
    }

    public : void MainTrick()
    {
        cout << "I have chosen a number between 1 and 100"<< endl;
        cout << "Can you guess what it is?" << endl;

        while(guess != secretNumber)
        {
            cout <<"Enter the guess: ";
            cin >> guess;

            if(guess < secretNumber)
            {
                cout << "Number is too low! Try Again" << endl;
            }
            else if(guess > secretNumber)
            {
                cout << "Number is too high! Try Again" << endl;
            }
            else
            {
                cout << "That's the number! You guessed it right" << endl;
            }
        }
    }
};

int main()
{
    NumberTricks obj;
    obj.RandomNumberGenerator();
    obj.MainTrick();
    return 0;
}