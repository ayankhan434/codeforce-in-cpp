#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;

        int arr[n];

        int max1 = INT_MIN;
        int secondMax = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] > max1)
            {
                secondMax = max1;
                max1 = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] != max1)
            {
                secondMax = arr[i];
            }
        }

        cout << secondMax << endl;
    }

    return 0;
}