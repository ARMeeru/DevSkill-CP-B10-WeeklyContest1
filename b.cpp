#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[13] = {4,7,44,47,74,77,444,447,474,477,744,747,774};

    bool isTrue = false;
    for (int i = 0; i < 13; i++) {
        if (n % arr[i] == 0) {
            isTrue = true;
            break;
        }
    }

    if (isTrue)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}