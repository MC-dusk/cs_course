#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

struct Team{
    string name="";
    int point=0;
    int score=0;
    //score is goal difference, point is total
};
bool cmp(const Team a, const Team b){
    return ( a.point != b.point ) ? ( a.point > b.point ) : ( a.score > b.score );
}

int main(){
    int n;
    cin >> n;
    string party[n];
    Team team[n];
    for(int i=0; i<n; i++){
        cin >> party[i];
        // team[i].name = party[i];
    }
    sort(party,party+n);
    for(int i=0; i<n; i++){
        team[i].name = party[i];
    }
    cin.get(); //discard '\n'
    for(int i=0; i<(n*(n-1)/2); i++){
        string match, team1, team2, score1, score2;
        getline(cin,match);
        string::size_type pos=0;
        while ( (pos = match.find(" ",pos)) != string::npos )
        {
            match.erase(pos,1);
        }
        istringstream iss(match);
        getline(iss,team1,'-');
        getline(iss,team2,':');
        getline(iss,score1,'-');
        getline(iss,score2);
        auto index1 = find(party,party+n,team1);
        auto index2 = find(party,party+n,team2);
        if (score1 > score2){
            team[index1-party].point += 3;
            // team[index2-party].point += 0;
        }
        else if (score1 < score2){
            // team[index1-party].point += 0;
            team[index2-party].point += 3;
        }
        else{
            team[index1-party].point += 1;
            team[index2-party].point += 1;
        }
        team[index1-party].score += stoi(score1)-stoi(score2);
        team[index2-party].score += stoi(score2)-stoi(score1);
    }
    // print result
    // for(int i=0; i<n; i++){
    //     cout << team[i].name << " " << team[i].point << " " << team[i].score << endl;
    // }
    stable_sort(team,team+n,cmp);
    for(int i=0; i<n/2; i++){
        cout << team[i].name << endl;
    }
    return 0;
}