
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
           set<char> s;
           string res;
           for(char c: A){
               if(B.find(c)==string::npos){
                   s.insert(c);
               }
           }
           for(char d: B){
               if(A.find(d)==string::npos){
                   s.insert(d);
               }
           }
           if(s.empty()){
               return "-1";
           }
           for(auto it: s){
               res+=it;
           }
           return res;
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends