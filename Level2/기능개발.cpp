#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    while(!progresses.empty()){
        int tmp = 0;
        for(int i=0;i<progresses.size();i++)
            progresses[i]+=speeds[i];
        while(!progresses.empty() && progresses.front()>=100){
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            tmp++;
        }
        if(tmp)
            answer.push_back(tmp);
    }
    return answer;
}
