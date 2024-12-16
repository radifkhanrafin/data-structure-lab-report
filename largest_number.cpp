#include <bits/stdc++.h>
using namespace std;

int findLargestNumber(int arr[], int n)
{

    int largestNumber = arr[0];

    if (n == 0)
    {
        cout << "there is no element in the array";
        return -1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > largestNumber)
            {
                largestNumber = arr[i];
            }
        }
    }
    return largestNumber;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findLargestNumber(arr, n);

    return 0;
}