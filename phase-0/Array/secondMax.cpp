#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {10, 5, 8, 20, 15};
    int n = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
    {
        cout << -1;
    }
    else
    {
        cout << "Second Largest: " << secondLargest;
    }

    return 0;
}