// Evaluation of Postfix Expression 
// Given a string representing a postfix expression, the task is to evaluate the expression and print the final value. Operators will only include the basic arithmetic operators like *,/,+ and -.

// Example 1:

// Input: str = "231*+9-"
// Output: -4
// modifiedStack = [1 2 4 5]
// Explanation:
// After solving the given expression, 
// we have -4 as result.
// Example 2:

// Input: str = "123+*8-"
// Output: -3
// Explanation:
// After solving the given postfix 
// expression, we have -3 as result.

// Your Task:
// This is a function problem. You only need to complete the function evaluatePostfixExpression() that takes the string denoting the expression as input and returns the evaluated value.

// Expected Time Complexity: O(n)
// Expected Auixilliary Space: O(n)

// Constraints:
// 1 <= length of expression <= 1000

// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    // Your code herestack<int> st;
    stack<int> st;

    int i; 

    // Scan all characters one by one 
    for (i = 0; str[i]; ++i) 
    { 
        // If the scanned character is an operand (number here), 
        // push it to the stack. 
        if (isdigit(str[i])) 
            st.push(str[i] - '0'); 

        // If the scanned character is an operator, pop two 
        // elements from stack apply the operator 
        else
        { 
            int val1 = st.top();
            st.pop();
            
            int val2 = st.top();
            st.pop();
            
            switch (str[i]) 
            { 
                case '+': st.push(val2 + val1); break; 
                case '-': st.push(val2 - val1); break; 
                case '*': st.push(val2 * val1); break; 
                case '/': st.push(val2/val1); break; 
            } 
        } 
    } 
    
    return st.top(); 
    
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends