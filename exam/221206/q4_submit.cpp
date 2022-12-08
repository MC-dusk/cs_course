#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    struct squad{
        string name;
        int score=0;
        int goal=0;
    };
    struct squad party[n];
    for(int i=0; i<n; i++){
        cin >> party[i].name;
    }
    for(int i=0; i<(n*(n-1)/2); i++){
        string match, team1, team2, score1, score2;
        getline(cin,match);
        string::size_type pos=0;
        while ( (pos = match.find(" ")) != string::npos )
        {
            match.replace(pos,1,"");
        }
        // auto *p = find(match[0],match[match.length()-1],party);
        istringstream iss(match);
        getline(iss,team1,'-');
        getline(iss,team2,':');
        getline(iss,score1,'-');
        getline(iss,score2);
        // auto *index = find(party,party+n,team1);
        if (score1>score2){
            party[find(party,party+n,team1)-party].score+=3;
            party[find(party,party+n,team2)-party].score+=0;
        }
        else if (score1<score2){
            party[find(party,party+n,team1)-party].score+=0;
            party[find(party,party+n,team2)-party].score+=3;
        }
        else{
            party[find(party,party+n,team1)-party].score+=1;
            party[find(party,party+n,team2)-party].score+=1;
        }
        party[find(party,party+n,team1)-party].goal+=stoi(score1)-stoi(score2);
        party[find(party,party+n,team2)-party].goal+=stoi(score2)-stoi(score1);
    }
    for(int i=0; i<n; i++){
        cout << party[i].name << " " << party[i].score << " " << party[i].goal << endl;
    }
    return 0;
}