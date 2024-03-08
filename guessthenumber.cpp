#include <iostream>

using namespace std;
//------------------------------------biginner level----------------------------------
int n, guess, guessed = 1;
int main()
{
    cout << "welocm to guess the number game\n";

    cout << "enter value of range between 1 to n\n";

    cin >> n;

    cout << "guess the numebr\n";

    int guessed = rand() % n + 1;

    while (guess != guessed)
    {
        cin >> guess;
        if (guess > guessed)
        {
            cout << "guess lower";
        }
        else if (guess < guessed)
        {
            cout << "guess higher";
        }
        else
        {
            cout << "you guessed it right";
        }
    }
}
