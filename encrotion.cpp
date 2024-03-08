#include <iostream>
#include <fstream>
using namespace std;

void encrypt(string outfile, string infile, int code)
{
    ofstream output(outfile, ios::binary);
    output << "abcdefgh" << endl;
    char data;
    ofstream its(infile);
    ifstream input(outfile, ios::binary);
    while (input.get(data))
    {
        data = data + code;
        its.put(data);
        cout << data;
    }
    output.close();
}

int main()
{
    int code;
    cin >> code;
    encrypt("outfile.txt", "infile.txt", code);
    return 0;
}