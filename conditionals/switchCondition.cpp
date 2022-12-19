#include <iostream>
using namespace std;

int main()
{
    int rating;
    cout << "Enter a number between 1 to 5 for Rating" << endl;
    cin >> rating;
    switch (rating)
    {
    case 1:
        cout << "You rated as 1" << endl;
        break;
    case 2:
        cout << "You rated as 2" << endl;
        break;
    case 3:
        cout << "You rated as 3" << endl;
        break;
    case 4:
        cout << "You rated as 4" << endl;
        break;
    case 5:
        cout << "You rated as 5" << endl;
        break;
    default:
        cout << "Invalid number!. Please enter a number between 1 to 5" << endl;
    }
    cout << "The rating is " << (rating >= 4 ? "Awesome" : "Good");

    return 0;
}