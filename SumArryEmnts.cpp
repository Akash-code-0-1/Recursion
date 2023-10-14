#include <iostream>
using namespace std;
int arraySum(int array[], int size)
{
    if (size == 0)
        return 0;
    return array[size - 1] + arraySum(array, size - 1);
}

int main()
{
    int size, key, i, indx = 0;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];

    int sum = arraySum(array, size);
    cout << sum << endl;
}