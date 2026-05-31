#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        ch += 'A' - 'a';
        cout << ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch += 'a' - 'A';
        cout << ch;
    }

    return 0;
}