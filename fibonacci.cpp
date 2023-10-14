#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
    {
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
    int num;
    cin >> num;
    int fib = fibonacci(num);
    cout << fib << endl;
}