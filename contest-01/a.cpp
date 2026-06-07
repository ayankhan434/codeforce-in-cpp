#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x, p;
    cin >> x >> p;
    double result = (-100 * p) / (x - 100);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
