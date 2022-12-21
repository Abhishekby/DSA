#include <iostream>
using namespace std;
int main()
{
    int z, v = 0, i, j, n, k = 0, steps = 0, sum = 0;
    cin >> n;
    int a[n];
    int b[n];
    int count[n];
    for (i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    for (j = 0; j <= n - 1; j++)
    {
        cin >> b[j];
    }
    while (a[0] - k * b[0] >= 0)
    {
        for (z = 1; z <= n - 1; z++)
        {
            v = 0;
            while (a[z] - v * b[z] >= 0)
            {
                if (a[z] - v * b[z] == a[0] - k * b[0])
                {
                    break;
                }
                v++;
            }
            if (a[z] - v * b[z] < 0)
            {
                break;
            }
            else
            {
                count[z] = v;
            }
        }
        if (z == n)
        {
            break;
        }
        k++;
    }
    if (a[0] - k * b[0] < 0)
    {
        cout << "-1";
    }
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            sum = sum + count[i];
        }
        steps = k + sum;
        cout << steps;
    }
    return 0;
}