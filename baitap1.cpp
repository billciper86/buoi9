#include <iostream>
using namespace std;
int main()
{
    long long n;
    cout << "nhap n: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "nhap so nguyen duong: ";
        return 0;
    }
    long long current_nums = n;
    int cnt = 0;
    int max_digital = 0;
    while (current_nums > 0)
    {
        short digit = current_nums % 10;
        if (digit > max_digital)
        {
            max_digital = digit;
        }
        cnt += 1;
        current_nums /= 10;
    }
    cout << "so " << n << " co " << cnt << " chu so" << endl;
    cout << "so lon nhat la: " << max_digital << endl;

}
