#include <iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cout << "Enter number of terms : ";
    cin >> n;
    a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += 3;
    }
}