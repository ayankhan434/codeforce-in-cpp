#include <iostream>
using namespace std;
int main()
{
    for (;;)
    {
        int n;
        cin >> n;
        if (n == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
}