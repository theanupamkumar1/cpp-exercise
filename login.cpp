#include <iostream>
#include <string>
using namespace std;
class userInfo
{
    string email[1];
    string pw[1];
    string em[1];
    string pass[1];
    int emCorrect;

public:
    void registration()
    {
        cout << "email:\n";
        cin >> email[0];
        cout << "password:\n";
        cin >> pw[0];
    }

    void login()
    {
        cout << "email:" << endl;
        cin >> em[0];
        int f1 = emailChecker(em[0]);
        if (f1 == 1)
        {
            cout << "password:\n";
            cin >> pass[0];
            passwordChecker(pass[0]);
        }
        else
        {
            cout << " either your mail is incorrect or you are not registered.\nif you wanna register press: y ";
        }
    }
    int emailChecker(string mail)
    {
        if (email[0] == mail)
        {
            emCorrect = 1;
        }
        else
        {
            emCorrect = 0;
        }
        return emCorrect;
    }
    int passwordChecker(string password) {}
};