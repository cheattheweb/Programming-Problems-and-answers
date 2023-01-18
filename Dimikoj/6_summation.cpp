#include <iostream>
using namespace std;
int main()
{
    int T, n, lsd, msd;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        // cout << "Sum = " << n % 10 + n / 10000 << endl;
        lsd = n%10;
        while (n)
        {
            msd = n % 10;
            n = n / 10;
        }
        cout << "Sum = " << lsd+msd << endl;
        
    }

    return 0;
}