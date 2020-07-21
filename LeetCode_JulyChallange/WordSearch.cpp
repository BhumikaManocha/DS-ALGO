// Tags : DFS, Backtracking
// Given a 2D board and a word, find if the word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

// Example:

// board =
// [
//   ['A','B','C','E'],
//   ['S','F','C','S'],
//   ['A','D','E','E']
// ]

// Given word = "ABCCED", return true.
// Given word = "SEE", return true.
// Given word = "ABCB", return false.
 

// Constraints:

// board and word consists only of lowercase and uppercase English letters.
// 1 <= board.length <= 200
// 1 <= board[i].length <= 200
// 1 <= word.length <= 10^3

class Solution {
public:
    int n, m;
    bool exist(vector<vector<char>>& board, string word) 
    {
        n = board.size();
		m = board[0].size();
		for(int i = 0;i<n;i++) 
        {
			for(int j = 0;j<m;j++) 
            {
				bool ans = dfs(board, word, i,j, 0);
				if(ans)
                    return true;
			}
		}
	    return false;
    }
	bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) 
    {
		if(i<0 || i>=n || j < 0 || j>=m || board[i][j] == ' ' || word[k] != board[i][j])return false;
        if(k == word.size() - 1)return true;
		char c = board[i][j];
		board[i][j] = ' ';
		bool res = false;
		res = res || dfs(board, word, i + 1, j, k + 1);
		res = res || dfs(board, word, i, j+ 1, k + 1);
		res = res || dfs(board, word, i - 1, j, k + 1);
		res = res || dfs(board, word, i, j - 1,  k + 1);
        board[i][j] = c;
		return res;
    }
};