#include <iostream>

using namespace std;

int main(){
    int n,a,b,flag=1;
    cin >> n;
    
    for (int i=1;i<=n;i++){
        cin >> a;
        cin >> b;
    
    if ( a != b )
        flag=0;
    }

if (flag)
    cout << "Poor Alex" << endl;
else
    cout << "Happy Alex" << endl;

return 0;
}