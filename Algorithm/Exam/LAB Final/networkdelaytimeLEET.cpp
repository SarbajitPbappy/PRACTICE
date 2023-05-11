#include<bits/stdc++.h>
using namespace std;
#define pq priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define vep vector<pair<int, int>>
class Solution
{
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k)
    {
        vector<int> vis(n+1, 0);
        vector<vep> adj_list(n+1);
        vector<int> dist(n+1, INT_MAX);
        pq p;
        for (auto& time : times) 
        {
            adj_list[time[0]].push_back({time[1], time[2]});
        }
        dist[k] = 0;
        p.push({0, k});
        while (!p.empty())
        {
            auto head = p.top();
            p.pop();
            int selected_node = head.second;
            
            if (vis[selected_node]) {
                continue;
            }
            vis[selected_node] = 1;
            
            for (auto& adj_node : adj_list[selected_node])
            {
                int next_node = adj_node.first;
                int edge_cost = adj_node.second;
                int total_cost = dist[selected_node] + edge_cost;
                
                if (total_cost < dist[next_node]) {
                    dist[next_node] = total_cost;
                    p.push({dist[next_node], next_node});
                }
            }
        }
        int max_time = *max_element(dist.begin()+1, dist.end());
        if (max_time == INT_MAX) {
            return -1;
        }
        
        return max_time;
    }
};
