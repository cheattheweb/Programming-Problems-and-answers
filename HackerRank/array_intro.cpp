#include <algorithm>
using namespace std;


int main() {
    int arr[1000] = {};
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for (int i = n - 1;i > 0;i--) {
        cout << arr[i] << " ";
    }
    cout << arr[0] << endl;
    return 0;
}

