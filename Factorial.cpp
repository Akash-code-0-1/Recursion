#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num;
    cin >> num;
    int fact = factorial(num);
    cout << fact << endl;
}