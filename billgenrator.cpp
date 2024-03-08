#include <iostream>
using namespace std;

int main()
{

    int pizza, puff, coldrink;
    cout << "enter qunatity of pizza\n";
    cin >> pizza;
    cout << "enter qunatity of puff\n";
    cin >> puff;
    cout << "enter qunatity of coldrink\n";
1
    cin >> coldrink;

    int total = (100 * pizza) + (20 * puff) + (10 * coldrink);
    cout << "total bill is total\n"
         << total;
}
