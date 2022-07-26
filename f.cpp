#include <iostream>

using namespace std;

int main(){

    int n,m,x,y;
    cin >> n >> m >> x >> y;

    int minimumSum = 0;

    if(m * x <= y)
        minimumSum = n * x;
    else
        minimumSum = (n/m)*y + min((n%m)*x,y);

    cout << minimumSum << endl;

    return 0;

}