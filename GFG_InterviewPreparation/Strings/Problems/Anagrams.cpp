#include <iostream>
using namespace std;

void Anagrams(string s1, string s2) {
    int s = s1.length();
    int si = s2.size(); int flag;
    if (s==si) {
        for (int i=0;i<s;i++) {
            flag =1;
            for (int j=0;j<s;j++) {
                if (s1[i] == s2[j] ){
                    flag =0;
                    break;
                }
                else {
                    continue;
                }
            }
            if (flag==1) {
                cout<<"NO"<<endl; 
                return;
            }
        }
        cout<<"YES"<<endl; return;
    }
    else {
        cout<<"NO"<<endl; return;
    }
}

int main() {
	//code
	string s,s1;
	int t;
	cin>>t;
	for (int k=0;k<t;k++) {
	    cin>>s>>s1;
	    Anagrams(s,s1);
	}
	
	return 0;
}