#include <iostream>
#include <string>

using namespace std;

class User
{
    int secret = 12;

public:
    string name = "your default name";
    void getName()
    {
        cout << "Your name is: " << name << endl;
    }

    void setSecret(const int & newSecret){
        secret = newSecret;
    }

    int getSecret(){
        return secret;
    }
};

int main()
{
    User krish;
    krish.name = "Krishnadev";
    krish.getName();
    krish.setSecret(42);
    cout << krish.getSecret()<< endl;
}