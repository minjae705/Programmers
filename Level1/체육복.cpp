#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {   
    set<int> los(lost.begin(), lost.end());
    vector<int> lendable;

    for (auto r : reserve) {
        if (los.count(r)) 
            los.erase(r);   // 자신의 여벌 사용
        else 
            lendable.push_back(r);
    }
    
    lost.assign(los.begin(), los.end());
    
    for(auto stu:lendable){
        for(int i=0;i<lost.size();i++){
            if(lost[i]==stu-1 || lost[i]==stu+1){
                lost.erase(lost.begin()+i);
                break;
            }
        }
    }

    return n - lost.size();
}
