#include <iostream>
#include <cstdio>
using namespace std;

class a
{
public:
    virtual void show()
    {

        cout << "base";
    }
};

class b : public a
{

public:
    void show()
    {

        cout << "derived";
    }
};

main()
{

    a *obj;
    b obj1;
    obj = &obj1;
    obj->show();
}
