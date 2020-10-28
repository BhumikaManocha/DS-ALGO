/*
Remove duplicates from sorted array (inPlace)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if(arr.empty())
            return NULL;
        int j=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                arr[++j] = arr[i];
                
            }
        }
        return j+1;
    }
};