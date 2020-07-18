// Tags:Graph, Maps, DFS, Vcetors
// There are a total of n courses you have to take, labeled from 0 to n-1.

// Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

// Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.

// There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

// Example 1:

// Input: 2, [[1,0]] 
// Output: [0,1]
// Explanation: There are a total of 2 courses to take. To take course 1 you should have finished   
//              course 0. So the correct course order is [0,1] .
// Example 2:

// Input: 4, [[1,0],[2,0],[3,1],[3,2]]
// Output: [0,1,2,3] or [0,2,1,3]
// Explanation: There are a total of 4 courses to take. To take course 3 you should have finished both     
//              courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. 
//              So one correct course order is [0,1,2,3]. Another correct ordering is [0,2,1,3] .
// Note:

// The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
// You may assume that there are no duplicate edges in the input prerequisites.
//    Hide Hint #1  
// This problem is equivalent to finding the topological order in a directed graph. If a cycle exists, no topological ordering exists and therefore it will be impossible to take all courses.
//    Hide Hint #2  
// Topological Sort via DFS - A great video tutorial (21 minutes) on Coursera explaining the basic concepts of Topological Sort.
//    Hide Hint #3  
// Topological sort could also be done via BFS.


class Solution {
public:
    bool impossible;
    void dfs(vector<vector<int>>&map1,int i,vector<bool>&visited,vector<int>&donecourse){
        if(visited[i]){
            impossible=true;
            return;   
        }
        visited[i]=true;
        if(map1[i].size()==0){
            donecourse.push_back(i);
            return; 
        }
        else{
            for(auto it=map1[i].begin();it!=map1[i].end();it++){
            if(find(donecourse.begin(),donecourse.end(),*it)!=donecourse.end())
                continue;
            else{
                dfs(map1,*it,visited,donecourse);
                    if(impossible) return;
            }
        }
        donecourse.push_back(i);
          }
 }
 
    vector<int> findOrder(int numCourses, vector<vector<int>>& courses) {
        impossible=false;
        vector<vector<int>>v(numCourses);
        vector<int>donecourse;
        vector<bool>visited(numCourses,false);
        for(auto it:courses){
            v[it[0]].push_back(it[1]);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i])
                dfs(v,i,visited,donecourse);
        }
        if(impossible){
            vector<int>ans;
            return ans;
        }
        return donecourse;
    }
};