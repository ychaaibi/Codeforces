#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int     dfs(int node, vector<vector<int>> graph, vector<int> &ves, vector<int> &connection)
{
        int ret = 1;

        //cout << node << endl;
        //for (int i=0; i<graph.size(); i++) cout << connection[i] << " ";
        //cout << endl << endl;
        for (int i=0; i<graph[node].size(); i++)
        {
                if (ves[graph[node][i]])
                {
                        ret = max(ret, connection[graph[node][i]] + 1);
                        continue ;
                }
                ves[graph[node][i]] = 1;
                ret = max(dfs(graph[node][i], graph, ves, connection) + 1, ret);
        }
        connection[node] = ret;
        return (connection[node]);
}

void    solve(vector<vector<int> > graph)
{
        vector<int>     ves(graph.size(), 0);
        vector<int>     connection(graph.size(), 1);

        for (int i=0; i<graph.size(); i++)
        {
                if (ves[i]) continue ;
                ves[i] = 1;
                dfs(i, graph, ves, connection);
        }
        int     solu = INT_MIN;
        for (int i=0; i<graph.size(); i++) solu = max(solu, connection[i]);
        cout << solu << endl;
}

void    parse()
{
        int                     n;

        cin >> n;
        vector<vector<int>>     graph(n);
        for (int i=0; i<n; i++)
        {
                int     lab;

                cin >> lab;
                if (lab == -1) continue ;
                graph[lab - 1].push_back(i);
        }
        solve(graph);

}

int     main()
{
        int     cases = 1;

        while (cases--)
                parse();
        return (0);
}