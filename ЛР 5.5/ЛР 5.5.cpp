
#include <iostream>
using namespace std;

int pascal(int i, int j, int level, int& depth, bool show = false)
{
    if (show)
        cout << level << " ";
    if (level > depth)
        depth = level;

    if (j == 0 || j == i)
        return 1;

    return pascal(i - 1, j - 1, level + 1, depth, show)
        + pascal(i - 1, j, level + 1, depth, show);
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int depth = 0;
            int value = pascal(i, j, 1, depth);
            cout << value << "(" << depth << ") ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int depth = 0;
            cout << "C(" << i << "," << j << "): levels = ";
            pascal(i, j, 1, depth, true);
            cout << "| depth = " << depth << endl;
        }
    }
}