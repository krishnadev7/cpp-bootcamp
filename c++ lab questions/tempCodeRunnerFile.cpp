double power(double, int = 2);

int main()
{
    int p;
    double n, r;
    cout << "Enter number : ";
    cin >> n;
    cout << "Enter exponent : ";
    cin >> p;
    r = power(n, p);
    cout << "Result is " << r;
    r = power(n);
    cout << "\nResult without passing exponent is " << r;

    return 0;
}

double power(double a, int b)
{
    double x = 1;
    for (int i = 1; i <= b; i++)
        x = x * a;
    return x;
}