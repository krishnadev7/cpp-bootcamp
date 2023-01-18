#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int smallestoutput1 = fact(n - 1);
    int smallestoutput2 = fact(n - 2);

    int ans = smallestoutput1 + smallestoutput2;
    return ans;
}

int main()
{
    int n;
    cout << "Enter number to find its fibonacii: " << endl;
    cin >> n;
    int ans = fact(n);
    cout << "fibonacii of " << n << " is: " << ans << endl;
    return 0;
}