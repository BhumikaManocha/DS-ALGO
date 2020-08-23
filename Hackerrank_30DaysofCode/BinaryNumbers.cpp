// Objective
// Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

// Task
// Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation.

// Input Format

// A single integer, .

// Constraints

// Output Format

// Print a single base- integer denoting the maximum number of consecutive 's in the binary representation of .

// Sample Input 1

// 5
// Sample Output 1

// 1
// Sample Input 2

// 13
// Sample Output 2

// 2
// Explanation

// Sample Case 1:
// The binary representation of  is , so the maximum number of consecutive 's is .

// Sample Case 2:
// The binary representation of  is , so the maximum number of consecutive 's is .


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int rem=0,count=0,maxcount=0;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        if(rem==1)
        {
            count++;
            if(count>maxcount)
                maxcount=count;
        }
        else
            count=0;
    }
    cout<<maxcount;

    return 0;
}
