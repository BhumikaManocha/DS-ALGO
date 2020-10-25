// Input: arr[] = {3, 6, 0, 6, 3}
// Output: Palindrome

// Input: arr[] = {1, 2, 3, 4, 5}
// Output: Not Palindrome


#include <iostream> 
using namespace std; 
  
// Recursive function that returns 1 if 
// palindrome, 0 if not palindrome 
int palindrome(int arr[], int begin, int end) 
{ 
    // base case 
    if (begin >= end) { 
        return 1; 
    } 
    if (arr[begin] == arr[end]) { 
        return palindrome(arr, begin + 1, end - 1); 
    } 
    else { 
        return 0; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int a[] = { 3, 6, 0, 6, 3 }; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    if (palindrome(a, 0, n - 1) == 1) 
        cout << "Palindrome"; 
    else
        cout << "Not Palindrome"; 
  
    return 0; 
} 