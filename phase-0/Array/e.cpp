#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    int index = 0;
    int min = INT16_MAX;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }

    cout << min << " " << index;

    return 0;
}