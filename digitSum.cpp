#include <iostream>
using namespace std;
int digitSum(int num)
{
    if (num >= 0 && num <= 9)
        return num;

    return (num % 10) + digitSum(num / 10);
}

int main()
{
    int num;
    cin >> num;
    int dsum = digitSum(num);
    cout << dsum << endl;
}