
#include <iostream>

#include <fstream>
using namespace std;

int main()
{
    ofstream obj;

    obj.open("hello.txt");
    obj << "this is line onon one " << endl;
    obj.put('a');
    obj.close();

    ifstream obj1;
    obj1.open("hello.txt");
    string data;
    while (obj1)
    {
        getline(obj1, data);
        cout << data;
    }
    return 0;
}