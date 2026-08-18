#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int sum = A[i] + A[j] + j - i;

                if (sum < ans)
                {
                    ans = sum;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}