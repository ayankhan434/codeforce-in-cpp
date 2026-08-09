#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];

        if (Arr[i] > 0)
        {
            Arr[i] = 1;
        }
        else if (Arr[i] < 0)
        {
            Arr[i] = 2;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}