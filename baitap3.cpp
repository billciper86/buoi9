#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    while (a != b)
    {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    cout << "uoc chung lon nhat la: " << a << endl;
    return 0;
}
