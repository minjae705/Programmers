#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<int> pq(priorities.begin(), priorities.end());
    queue<pair<int,int>> q;

    for(int i=0;i<priorities.size();i++)
        q.push({i,priorities[i]});

    while(!q.empty()){
        auto tmp = q.front();
        if(tmp.second==pq.top()){
            q.pop();
            pq.pop();
            answer++;
            if(tmp.first==location)
                break;
        }
        else{
            q.pop();
            q.push(tmp);
        }
    }

    return answer;
}
