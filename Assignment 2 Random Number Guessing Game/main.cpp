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
