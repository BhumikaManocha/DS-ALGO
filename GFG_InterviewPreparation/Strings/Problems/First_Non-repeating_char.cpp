#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    map<char, int> m;
    int i;
    string s;
    cin>>s;
    for (i =0; i<s.length(); i++){
        m[s[i]]++;
    }
    for (i=0; i<s.length(); i++) {
        if (m[s[i]] == 1){
            cout<<s[i]<<endl;
            break;
            return 0;
        }
    }

    if (i==s.length()) {
        cout<<"No such element"<<endl;
    }
    return 0;
    
    
}
