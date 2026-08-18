#include <iostream>
#include <limits.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    int max = INT_MIN;
    int min = INT_MAX;

    int minindex = 0;
    int maxindex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
            minindex = i;
            /*  cout << min;
             cout << arr[i]; */
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
        /* swap(min, max); */
    }

    swap(arr[minindex], arr[maxindex]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}