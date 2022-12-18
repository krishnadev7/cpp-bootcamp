#include <iostream>
using namespace std;

int main()
{
    int score = 90;

    // pointer declaration
    int *pScore = &score;

    cout << "value of score is: " << score << endl;
    cout << "value of pointer is: " << pScore << endl;

    // c++ reference
    int &another_score = score;
    another_score = 100;

    cout << "value of score after ref is: " << another_score << endl;
    cout << "value of pointer after ref is: " << pScore << endl;

    return 0;
}