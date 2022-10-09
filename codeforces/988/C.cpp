# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>

# define    vi  vector<int>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long
# define    vpi vector<pair<int, int> >
# define    mps map<int, pair<int, int> >

using namespace std;

void    solve()
{
    int k;
    mps mp;

    cin >> k;
    for (int i=0; i<k; i++)
    {
        int         n;
        int         sum = 0;

        cin >> n;
        vi  seq(n);
        for (int j=0; j<n; j++)
        {
            cin >> seq[j];
            sum += seq[j];
        }
        for (int j=0; j<n; j++)
        {
            if (mp.find(sum - seq[j]) != mp.end())
            {
                if (mp[sum - seq[j]].first == i + 1)
                    continue ;
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << endl;
                cout << mp[sum - seq[j]].first << " " << mp[sum - seq[j]].second << endl; 
                return ;
            }
            else
                mp[sum - seq[j]] = make_pair(i + 1, j + 1);
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}