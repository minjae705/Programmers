#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> m;
    int answer = 1;
    for(auto x:clothes){
        if(m.find(x[1])==m.end()) //처음 들어온 종류
            m.insert({x[1],1});
        else //이미 있는 종류
            m.find(x[1])->second++;
    }
    for(auto y:m)
        if(y.second!=0)
            answer *= (y.second+1); //이 종류의 옷을 안입는 경우 +1
    return answer-1; //아무것도 안입는 경우 -1
}
