#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Write the value of m(rows): ";
    cin >> m;
    cout << "Write the value of n(col): ";
    cin >> n;
    int **p = new int *[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[i];
        for (int j = 0; j < n; j++)
        {
            cout << "the value is:";
            cin >> p[i][j];
            cout << i << j << endl;
        }
    }
    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;
}

// #include <iostream>
// using namespace std;

// #define SQUARE(x) x*x   //called (macro)

// int main()
// {
//     int x = 36 / SQUARE(6); //36/6*6 = (36/6)*6  
//     int x = 36 / (SQUARE(6)); // it gives me '1'
//     cout << x;
// }