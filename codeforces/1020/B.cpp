#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

void    parse()
{
        int             size;
        int             graph[1001];

        cin >> size;
        for (int i=0; i<size; i++)
        {
                cin >> graph[i];
                graph[i]--;
        }
        for (int s=0; s<size; s++)
        {
                int     vis[1001];

                memset(vis, 0, sizeof(int) * size);
                int     i = s;
                while (!vis[i])
                {
                        vis[i] = 1;
                        i = graph[i];
                }
                cout << i + 1 << " ";
        }
}

int     main()
{
        int     cases = 1;

        //cin >> cases;
        while (cases--)
                parse();
        return (0);
}
