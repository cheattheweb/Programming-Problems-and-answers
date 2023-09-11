#include <iostream>
using namespace std;

int main(){
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    
    return 0;
}