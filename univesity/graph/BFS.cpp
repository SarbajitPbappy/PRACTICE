#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int> adj_list[N];
queue<int> bfs_queue;
vector<int> traversal_order;

void printQueue(queue<int> q) {
    if (q.empty()) {
        cout << "Queue: " << endl;
    } else {
        cout << "Queue: ";
        while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << ",";
        }
        cout << endl;
    }
}

void printOutput(const vector<int>& order) {
    cout << "Output: ";
    for (int node : order) {
        cout << node << " ";
    }
    cout << endl;
}

void bfs(int src) {
    visited[src] = 1;
    bfs_queue.push(src);

    while (!bfs_queue.empty()) {
        printQueue(bfs_queue);  // Print the current state of the queue
        int head = bfs_queue.front();
        bfs_queue.pop();
        traversal_order.push_back(head);
        printOutput(traversal_order);  // Print the current traversal output

        for (int adj_node : adj_list[head]) {
            if (visited[adj_node] == 0) {
                visited[adj_node] = 1;
                bfs_queue.push(adj_node);
            }
        }
    }
    // Final state after the queue is empty
    printQueue(bfs_queue);
    printOutput(traversal_order);
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 2;
    memset(visited, 0, sizeof(visited)); // Initialize visited array to 0
    bfs(src);
}
