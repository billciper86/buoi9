#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    int dao_nguoc = 0;
    int current = n;
    while (current > 0)
    {
        int cuoi = current % 10;
        dao_nguoc = dao_nguoc * 10 + cuoi;
        current /= 10;
    }
    if (dao_nguoc == n)
    {
        cout << "so doi xung";
    } else {cout << "k ph so doi xung";}
    return 0;
}
