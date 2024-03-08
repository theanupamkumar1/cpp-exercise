#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    float t1, t2, t3;
    // t1 = t2 = t3 = 0;

    for (int i = 1; i <= 3; i++)
    {

        cout << "round" << i << "\n";
        cout << "enter o2 level of t1\n";
        cin >> t1;
        t1 += t1;
        cout << "enter o2 level of t2\n";
        cin >> t2;
        t2 += t2;
        cout << "enter o2 level of t3\n";
        cin >> t3;
        t3 += t3;
    }

    float avg_t1 = t1 / 3;
    float avg_t2 = t2 / 3;
    float avg_t3 = t3 / 3;
    float
    cout << avg_t1 << " " << avg_t2 << " " << avg_t3 << " ";
}
