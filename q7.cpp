// Accepted link
// https://leetcode.com/problems/course-schedule/submissions/871335522/

// code:-
/*
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<int> a[numCourses];
			for(int i=0;i<pre.size();i++) a[pre[i][1]].push_back(pre[i][0]);
			vector<int>topo;
			vector<int>in(numCourses,0);
			queue<int>q;
			for(int i=0;i<numCourses;i++){
				for(auto j:a[i]) in[j]++;
			}
			for(int node=0;node<numCourses;node++){
				if(!in[node]) q.push(node);
			}
			while(!q.empty()){
				int node=q.front();
				q.pop();
				topo.push_back(node);
				for(auto i:a[node]){
					in[i]--;
					if(!in[i]) q.push(i);
				}
			}
			return topo.size()==numCourses;
    }
};
*/