#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int> adj_list[N];
stack<int> dfs_stack;
vector<int> traversal_order;

void printStack(stack<int> s) {
    if (s.empty()) {
        cout << "Stack: " << endl;
    } else {
        cout << "Stack: ";
        vector<int> items;
        while (!s.empty()) {
            items.push_back(s.top());
            s.pop();
        }
        reverse(items.begin(), items.end());
        for (size_t i = 0; i < items.size(); ++i) {
            cout << items[i];
            if (i < items.size() - 1) cout << ",";
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

void dfs(int src) {
    visited[src] = 1;
    dfs_stack.push(src);

    while (!dfs_stack.empty()) {
        printStack(dfs_stack);  // Print the current state of the stack
        int node = dfs_stack.top();
        dfs_stack.pop();
        traversal_order.push_back(node);
        printOutput(traversal_order);  // Print the current traversal output

        for (auto it = adj_list[node].rbegin(); it != adj_list[node].rend(); ++it) {
            if (visited[*it] == 0) {
                visited[*it] = 1;
                dfs_stack.push(*it);
            }
        }
    }
    // Final state after the stack is empty
    printStack(dfs_stack);
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
    dfs(src);
}
