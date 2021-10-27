#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[],int n){
    for (int m=0;m<n;m++){
        cout<<arr[m];
    }
    cout<<endl;
}
int main() {
    int t,n,a[100];
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        for (int j=0;j<n;j++){
            cin>>a[j];
        }
        if (next_permutation(a,a+n)){
            printArray(a,n);
        }
        else{
            sort(a,a+n);
            printArray(a,n);
        }
    }
    return 0;
    
}
