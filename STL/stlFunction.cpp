#include <iostream>
#include <string>
using namespace std;

class Myfloat
{
    float ft;

public:
    Myfloat()
    {
        ft = 1.1;
    }
    void getValue()
    {
         cout << "float value is: " << ft<<endl;
    }
    void operator()(float v){
        ft +=v;
    }
};

int main()
{
    Myfloat floaty;
    floaty.getValue();
    floaty(3.5);
    floaty.getValue();
    return 0;
}