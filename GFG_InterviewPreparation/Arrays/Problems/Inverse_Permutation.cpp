/* Given an array A of size n of integers in the range from 1 to n, we need to find the inverse permutation of that array.

For better understanding, consider the following example:
Suppose we found element 4 at position 3 in an array, then in reverse permutation, we insert 3 (position of element 4 in the array)
in position 4 (element value).

Example:
Input:
1
5
2 3 4 5 1

Output:
5 1 2 3 4

Explanation:
For element 1 we insert position of 1 from arr1 i.e 1 at position 1 in arr2. For element 4 in arr1, we insert 2 from arr1 at
position 4 in arr2. Similarly, for element 2 in arr1, we insert position of 2 i.e 4 in arr2.

*/

#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      int n;
      cin >> n;
      int a[n];
      for (int i = 1; i <= n; i++)
	{
	  cin >> a[i];
	}
      int b[n];
      for (int i = 1; i <= n; i++)
	{
	  b[a[i]] = i;
	}
      for (int i = 1; i <= n; i++)
	{
	  cout << b[i] << " ";
	}
      cout << "\n";
    }
  return 0;
}
