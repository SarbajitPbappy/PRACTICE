#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> convert( vector<vector<int>> a)
{
	vector<vector<int>> adjList(a.size());
	for (int i = 0; i < a.size(); i++)
	{
		
		for (int j = 0; j < a[i].size(); j++)
		{
			if (a[i][j] != 0)
			{
				adjList[i].push_back(j);
			}
		}
	}
	return adjList;
}
int main()
{
    int num_of_vertices;
    cin>>num_of_vertices;
	vector<vector<int>>matrix(num_of_vertices,vector<int>(num_of_vertices));
    for(int i=0;i<num_of_vertices;i++){
        for(int j=0;j<num_of_vertices;j++){
            cin>>matrix[i][j];
        }
    }
	vector<vector<int>> AdjList = convert(matrix);\
	for (int i = 0; i < AdjList.size(); i++)
	{
		cout << i<<":";
		for(int j = 0; j < AdjList[i].size(); j++)
		{
			if(j == AdjList[i].size() - 1)
			{
				cout << " " << AdjList[i][j] << endl;
				break;
			}
			else
				cout << " " << AdjList[i][j];
		}
	}
}
