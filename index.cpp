#include <iostream>
using namespace std;
int main()
{

    int n, i, j, space;

    cout << "Enter the number of rows (odd number): ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Number of rows must be odd." << endl;
        return 0;
    }

    // Upper part of the diamond
    for (i = 0; i < (n + 1) / 2; i++)
    {
        for (space = 0; space < (n + 1) / 2 - i; space++)
            cout << " ";

        for (j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    // Lower part of the diamond
    for (i = (n + 1) / 2 - 2; i >= 0; i--)
    {
        for (space = 0; space < (n + 1) / 2 - i; space++)
            cout << " ";

        for (j = 0; j < 2 * i + 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}