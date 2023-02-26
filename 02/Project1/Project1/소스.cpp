#include <iostream>
using namespace std;

#define width 15
#define height 15

int main()
{
    cout << "\n***   Merry Chritsmas   ***\n\n";

    for (int a = 0; a < width - 1; a++)
    {
        cout << " ";
    }
    cout << "@\n";

    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < width - i; j++)
        {
            cout << " ";
        }
        for (int a = 0; a < i; a++)
        {
            cout << "*";
        }

        for (int b = 0; b < i - 1; b++)
        {
            cout << "*";
        }

        cout << "\n";
    } // ÀÌÆÄ¸®
    for (int a = 0; a < width - 2; a++)
        cout << " ";
    cout << "|||\n"; // ±âµÕ
    return 0;
}