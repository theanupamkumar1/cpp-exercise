#include <iostream>
using namespace std;
class Base
{
public:
    int age;
    int marks;

}
 class Derived : private Base
{
    int code;
}