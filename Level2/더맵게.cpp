#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(),scoville.end()); //우선순위큐 오름차순
    while(pq.size()>1 && pq.top()<K){
        int tmp1 = pq.top();
        pq.pop();
        int tmp2 = pq.top();
        pq.pop();
        pq.push(tmp1 + 2 * tmp2);
        answer++;
    }
    if(pq.top()<K) return -1;
    return answer;
}
