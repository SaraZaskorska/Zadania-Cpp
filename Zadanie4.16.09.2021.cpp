#include <iostream>
using namespace std;
int main()
{

    int tablica[10][10];
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
            if (a == b)
            {
                tablica[a][b] = a;
            }
            else
            {
                tablica[a][b] = 0;
            }
            cout << tablica[a][b] << " ";
        }
        cout << endl;

    }
}