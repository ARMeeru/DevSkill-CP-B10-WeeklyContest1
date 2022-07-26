// // Failed but need to find a proper solution with regex
// #include <iostream>
// #include <regex>

// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     regex regexp("WUB");

//     cout << regex_replace(s, regexp, " ") << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main(){
    int flag = 0;
    
    string dubstep;
    cin >> dubstep;

    flag = dubstep.find("WUB");

    while(flag != -1){
        dubstep.replace(flag, 3, " ");
        flag = dubstep.find("WUB");
    }

    for (int i = 0; i < dubstep.size(); i++){
        if (dubstep[i] == ' ' && i == 0)
            continue;
        else if ( i > 0 && dubstep[i] == ' ' && dubstep[i-1] == ' ')
            continue;
        else
            cout << dubstep[i];
    }

    return 0;

}