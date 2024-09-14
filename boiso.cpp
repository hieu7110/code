#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    string s = to_string(n);
    for(char x : s)
        if(x != '0' && x != '1') return false;
    return true;
}

int main(){
    int n; cin >> n;

    for(int i = n; i <= 2e9; i += n)
        if(check(i)){
            cout << i;
            return 0;
        }
    
    cout << "0";

    return 0;
}
