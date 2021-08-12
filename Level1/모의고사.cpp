#include <string>
#include <vector>
using namespace std;

int first(int idx){
    if(idx % 5 == 0)
        return 5;
    return idx % 5;
}

int second(int idx){
    if(idx % 8 == 0)
        return 5;
    else if(idx % 2 == 0){
        int tmp =  idx / 2 % 4 + 1;
        if(tmp == 2)
            return 1;
        else
            return tmp;
    }
    else
        return 2;
}

int third(int idx){
    int tmp  = idx / 2 % 5;
    if(tmp == 0)
        return 3;
    else if(tmp == 1 || tmp == 2)
        return tmp;
    else
        return tmp + 1;
}

vector<int> solution(vector<int> answers) {
    int cnt[4] = {0, 0, 0, 0};
    int maxcnt = -1;
    for(int i=0; i<answers.size(); i++){
        if(first(i+1)==answers[i]) cnt[1]++;
        if(cnt[1]>maxcnt) maxcnt = cnt[1];
        if(second(i+1)==answers[i]) cnt[2]++;
        if(cnt[2]>maxcnt) maxcnt = cnt[2];
        if(third(i)==answers[i]) cnt[3]++;
        if(cnt[3]>maxcnt) maxcnt = cnt[3];
    }
  
    vector<int> answer;
    for(int i=1; i<=3; i++)
        if(cnt[i]==maxcnt)
            answer.push_back(i);
    return answer;
}
