#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int *arr, int n)
{
    int small = INT_MAX;
    int secondSmall = INT_MAX;
    ;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int findSecondLargestest(int *arr, int n)
{
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    ;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large)
        {
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int main()
{
    int arr[] = {2, 5, 1, 6, 7, 9 };
    int n = 6;
    int secSmall = findSecondSmallest(arr, n);
    int secLarge = findSecondLargestest(arr, n);

    cout << "2nd smallest is : " << secSmall << endl;
    cout << "2nd largest is : " << secLarge << endl;
    return 0;
}