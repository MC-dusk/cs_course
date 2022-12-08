// In a certain event, there are n teams in a round robin, that is, a match must be held between any two teams. The team with the ranking within n/2 (inclusive) can win the prize. Ranking starts from 1 according to points and net scores, and then goes back. The teams with more points rank first. If the points are the same, the teams with more net points rank first. If the net points are still the same, the teams with more net points rank the same. If there are multiple teams (for example, x teams) in a ranking, the following x-1 ranking will be skipped before continuing ranking.
// The rules of points are: 3 points for winning a game, 1 point for tying a game, and no points for losing. The net score is the total score - the total score lost.
// input
// An integer n in the first line (2<=n<=1000, n is an even number), indicating the number of teams; Next n lines, each line represents the name of a team (the team name contains alphanumeric characters and spaces, and the length is no more than 50 characters); Then n (n-1)/2 lines follow, and the format of each line is name1-name2: score1-score2, which indicates the score of the two teams. There may be several spaces before and after ":" and "-". The score of each game shall not exceed 100 points.
// output
// Output the name of the winning team from top to bottom. Teams with the same rank will be output in the canonical order of team names.
// sample input
// Team1
// Team2
// Team3
// Team4
// Team1-Team2:2-0
// Team1-Team3:3-1
// Team1-Team4:4-2
// Team2-Team3:3-2
// Team2-Team4:2-0
// Team3-Team4:3-1
// sample output
// Team1
// Team2

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct team
{
    string name;
    int points;
    int net_score;
    int rank;
};

bool cmp(team a, team b)
{
    if (a.points != b.points)
        return a.points > b.points;
    else if (a.net_score != b.net_score)
        return a.net_score > b.net_score;
    else
        return a.name < b.name;
}

int main()
{
    int n;
    cin >> n;
    vector<team> teams(n);
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].name;
        teams[i].points = 0;
        teams[i].net_score = 0;
        teams[i].rank = 0;
    }
    for (int i = 0; i < (n - 1) * n / 2; i++)
    {
        string s;
        cin >> s;
        int pos = s.find('-');
        string name1 = s.substr(0, pos);
        string name2 = s.substr(pos + 1, s.find(':') - pos - 1);
        int score1 = stoi(s.substr(s.find(':') + 1, s.find('-') - s.find(':') - 1));
        int score2 = stoi(s.substr(s.find('-') + 1));
        for (int j = 0; j < n; j++)
        {
            if (teams[j].name == name1)
            {
                teams[j].net_score += score1 - score2;
                if (score1 > score2)
                    teams[j].points += 3;
                else if (score1 == score2)
                    teams[j].points += 1;
            }
            else if (teams[j].name == name2)
            {
                teams[j].net_score += score2 - score1;
                if (score2 > score1)
                    teams[j].points += 3;
                else if (score2 == score1)
                    teams[j].points += 1;
            }
        }
    }
    sort(teams.begin(), teams.end(), cmp);
    teams[0].rank = 1;
    for (int i = 1; i < n; i++)
    {
        if (teams[i].points == teams[i - 1].points && teams[i].net_score == teams[i - 1].net_score)
            teams[i].rank = teams[i - 1].rank;
        else
            teams[i].rank = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (teams[i].rank <= n / 2)
            cout << teams[i].name << endl;
    }
    return 0;
}
