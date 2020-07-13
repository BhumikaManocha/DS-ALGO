// Topic: Find Transition Point 
// You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. The transition point is a point where "0" ends and "1" begins (0 based indexing).
// Note that, if there is no "1" exists, print -1.
// Note that, in case of all 1s print 0.

// Input:
// The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.

// Output:
// Your function should return transition point.

// Your Task:
// The task is to complete the function transitionPoint() that takes array and N as input and returns the value of the position where "0" ends and "1" begins.

// Expected Time Complexity: O(LogN).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 500000
// 0 ≤ C[i] ≤ 1
// Example:

// Input
// 2
// 5
// 0 0 0 1 1
// 4
// 0 0 0 0

// Output
// 3
// -1

// Explanation:
// Testcase 1: position 3 is 0 and next one is 1, so answer is 3.
// Testcase 2: Since, there is no "1", so the answer is -1.

// { Driver Code Starts
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    for(int i=0;i<n;i++)
    {
        if(arr[0]==1)
            return 0;
        if(arr[i]==1)
            return i;
    }
    return -1;
}