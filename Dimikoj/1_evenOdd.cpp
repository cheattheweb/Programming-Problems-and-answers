#include <iostream>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}