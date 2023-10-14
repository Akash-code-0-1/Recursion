#include <iostream>
using namespace std;
int findmaxNumber(int array[], int start, int end)
{
    if (start == end)
        return array[start];

    int mid = (start + end) / 2;
    int max1 = findmaxNumber(array, start, mid);
    int max2 = findmaxNumber(array, mid + 1, end);
 
    return (max1 > max2) ? max1 : max2;
}

int findminNumber(int array[], int start, int end)
{
    if (start == end)
        return array[start];

    int mid = (start + end) / 2;
    int min1 = findminNumber(array, start, mid);
    int min2 = findminNumber(array, mid + 1, end);

    return (min1 < min2) ? min1 : min2;
}

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];

    int maxNum = findmaxNumber(array, 0, size - 1);
    int minNum = findminNumber(array, 0, size - 1);

    cout << "Largest Number: " << maxNum << endl;
    cout << "Smallest Number: " << minNum << endl;
}