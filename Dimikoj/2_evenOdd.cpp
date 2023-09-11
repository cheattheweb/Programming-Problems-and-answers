#include<iostream>
using namespace std;
int main(){
    int T, i;
    string number, result;
    scanf("%d",&T);
    for (i = 0; i < T; i++)
    {
        cin >> number;
        result = (number[number.length() - 1] % 2)? "odd" : "even";
        cout << result << endl;

    }
    return 0;
}