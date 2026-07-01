#include <iostream>
using namespace std;

int SmallestElement(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int arr1[] = {1, 5, 9, -1, 7, -6};
    int n = 6;

    int min = SmallestElement(arr1, n);
    cout << "The smallest element in the array is: " << min << endl;

    return 0;
}