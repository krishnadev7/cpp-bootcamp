#include <iostream>
using namespace std;

struct User
{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
    User mikey = {01, "mikey", "mikey@gmail.com", 2};
    User donald = {02, "donald", "donald@gmail.com", 3};

    User *d = &mikey;

    cout << mikey.name << endl;
    cout << donald.name << endl;

    d->course_count = 12;
    cout<< mikey.course_count<<endl;
}