// Topic : Island Perimeter
// Tags : Matrix, Vectors

// You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.

// Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

// The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

 

// Example:

// Input:
// [[0,1,0,0],
//  [1,1,1,0],
//  [0,1,0,0],
//  [1,1,0,0]]

// Output: 16

// Explanation: The perimeter is the 16 yellow stripes in the image below:

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rt=0,dn=0;
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
              if(grid[i][j]==1)
                
              {
                  count++;
              
            
            if(j+1<grid[0].size() && grid[i][j+1]==1)
                rt++;
            if(i+1<grid.size() && grid[i+1][j]==1)
                dn++;
            }
        }
        }
        return count*4-(dn+rt)*2;
    }
};