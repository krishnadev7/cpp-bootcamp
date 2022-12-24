#include <iostream>
#include <string>
using namespace std;

class Man
{
    string _name;
    int _age;
    Man() {}

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}

    void run() { cout << "I can run"; }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is: " << _name << endl;
}

class Superman : public Man
{
    bool flight;

public:
    Superman(string name) : Man(name, 26) {}
    void run() { cout << "I can run at light speed" << endl; }
};

class Spiderman : public Man
{
    bool webbing;

public:
    Spiderman(string name) : Man(name, 19) {}
    void run() { cout << "I can run at normal speed" << endl; }
};

int main(){
    Superman clark("Kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
}