// Write a program that generates a random number
//between 0 and 1000. and asks the user to guess
// what the number is. If the user's guess is higher than the random number,
// the program should display "Too high, try again."
// If the user's guess is lower than the random number, the program should display
// "Too low, try again." The program should use a loop that repeats until the user
// correctly guesses the random number.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess;
    int random_number;

    const int MAX_VALUE = 1000;
    const int MIN_VALUE = 0;
    unsigned seed = time (0);

    srand(seed);

    random_number =(rand()%(MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;


    cout << "Guess a whole number from 0 to 1000:  \n";

    cin >> guess;

    do
    {

        if (guess > random_number)
        {
        cout << "Too high, guess again!\n";
        cin >> guess;
        }

            else if  (guess < random_number)
            {
            cout << "Too low, guess again!\n";
            cin >> guess;
            }

    }
    while (guess != random_number);


if (guess == random_number)
    {
        cout << "Yay, you did it!";

    }



    return 0;

}
