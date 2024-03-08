

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    float stairs, steps;
    cout << "enter no of stairs\n";
    cin >> stairs;
    cout << "enter qunatity of steps\n";
    cin >> steps;

    float total = stairs / steps; // Convert to double to handle decimal values
    int totals = ceil(total);
    cout << "total no of steps\n"
         << totals;
}
