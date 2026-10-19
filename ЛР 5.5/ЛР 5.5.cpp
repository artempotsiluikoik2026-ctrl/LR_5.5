
#include <iostream>
using namespace std;

int pascal(int i, int j)
{
    if (j == 0 || j == i)              // край трикутника
        return 1;

    return pascal(i - 1, j - 1) + pascal(i - 1, j);   // сума двох над ним
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << pascal(i, j) << " ";
        cout << endl;
    }
}