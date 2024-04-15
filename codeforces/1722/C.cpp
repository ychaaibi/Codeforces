#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <map>

using namespace std;

void    solve(map<string, int>  words, vector<vector<string>> words_players)
{
        vector<int>     score(3, 0);

        for (int i=0; i<3; i++)
        {
                for (int j=0; j<words_players[i].size(); j++)
                {
                        if (words[words_players[i][j]] == 1)
                                score[i] += 3;
                        else if (words[words_players[i][j]] == 2)
                                score[i]++;
                }
        }
        for (int i=0; i<3; i++) cout << score[i] << " ";
        cout << endl;
}

void    parse()
{
        int             word_size;
        vector<vector<string>>  people_words(3);
        map<string, int>        mp;

        cin >> word_size;
        for (int i=0; i<3; i++)
        {
                string word;

                for (int j=0; j<word_size; j++)
                {
                        cin >> word;

                        people_words[i].push_back(word);
                        if (mp.find(word) != mp.end())
                                mp[word]++;
                        else
                                mp[word] = 1;
                }
        }
        solve(mp, people_words);
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
