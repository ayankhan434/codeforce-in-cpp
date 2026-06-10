#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    int result = (a * b * c * d) % 100;
    if (result < 10)
    {
        cout << "0" << result << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}
