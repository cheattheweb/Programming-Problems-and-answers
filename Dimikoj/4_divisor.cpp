#include <iostream>
using namespace std;

int main()
{
    int T, n, i, j;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> n;
        cout << "Case " << i << ": ";
        for (j = 1; j < n; j++)
        {
            if (n % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
