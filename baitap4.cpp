#include <iostream>
using namespace std;
int main()
{
    int nums_sc = 9;
    int CURRENT = 7;
    bool doan_dung = false;
    do {
        int input;
        cout << "doan so: ";
        cin >> input;
        if (input != nums_sc)
        {
            CURRENT -= 1;
            if (input < nums_sc)
            {
                cout << "nho hon, " << "con so luot la: " << CURRENT << endl;
             } else if (input > nums_sc)
             {
                 cout << "lon hon, " << "con so luot la: " << CURRENT << endl;
             }
        } else {
            cout << "ban da doan dung";
            doan_dung = true;
            break;
        }
    } while ( CURRENT != 0);
    if (doan_dung == false)
    {
        cout << "da het luot" << " so bi mat la: " << nums_sc << endl;
    }
}
