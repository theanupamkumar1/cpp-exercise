#include <iostream>
#include <string>
using namespace std;

class parent
{

public:
    int roll_no = 1;
    string name = "hari";
};

class child1 : virtual public parent
{

public:
    int roll_no;
};

class child2 : virtual public parent
{

public:
    int roll_no;
};

class grand_child : public child1, public child2
{

public:
    int roll_no;
};

int main()
{
    grand_child gc_1;
    child1 c1;
    cout << c1.name << endl;
    cout << gc_1.name;
    return 0;
}
