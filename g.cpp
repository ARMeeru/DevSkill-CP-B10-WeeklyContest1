#include <iostream>

using namespace std;
 
int main(){
    
    int n, x, y, z, sumOfX=0, sumOfY=0, sumOfZ=0;
    cin>>n;
 
    while(n--){
        cin>>x>>y>>z;
        sumOfX += x;
        sumOfY += y;
        sumOfZ += z;
    }
        if(sumOfX == 0 && sumOfY == 0 && sumOfZ == 0)
            cout<<"YES"<<endl;
        
        else
            cout<<"NO"<<endl;

return 0;
}