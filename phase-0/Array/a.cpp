#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int marks[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> marks[i];
        sum += marks[i];
    }

    cout << abs(sum) << endl;

    return 0;
}