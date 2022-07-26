#include <iostream>

using namespace std;

int main(){
	
    int t;
	cin >> t;
	
    while(t){
		
        t--;
        string s;
		cin >> s;
		
        sort(s.begin(), s.end());
		
        cout << s << endl;

	}

    return 0;

}