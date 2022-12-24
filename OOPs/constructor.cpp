#include <iostream>
#include <string>

using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone();                                                       // default constructor
    Phone(const string &name, const string &os, const int &price); // parameter constructor
    Phone(const Phone &);
    string getName()
    {
        return _os;
    }
    ~Phone(); // destructor for clearing memory
};


// default constructor
Phone::Phone() : _name(), _os("android"), _price()
{
    cout << "Running default constructor" << endl;
};

// constructor parameter
Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    cout << "Running constructor parameter" << endl;
}

// copy constructor
Phone::Phone(const Phone &values)
{
    cout << "Running copy constructor" << endl;
    _name = values._name;
    _os = "copied " + values._os;
    _price = values._price;
}

// Destructor
Phone::~Phone(){
    cout<<"Destructor called for %s\n", _name.c_str();
}

int main()
{
    Phone realme;
    cout << realme.getName() << endl;

    Phone Oneplus("oneplus8", "android-oxy", 50000);
    cout << Oneplus.getName() << endl;

    Phone Oneplus8 = Oneplus;
    cout << Oneplus8.getName() << endl;

    return 0;
}