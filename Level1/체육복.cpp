#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    vector<int> buff1(lost.size() + reserve.size());
    auto iter1 = set_intersection(lost.begin(), lost.end(), reserve.begin(), reserve.end(), buff1.begin());
    buff1.erase(iter1, buff1.end());
    
    vector<int> buff2(lost.size() + reserve.size());
    auto iter2 = set_difference(lost.begin(), lost.end(), buff1.begin(), buff1.end(), buff2.begin());
    buff2.erase(iter2, buff2.end());
    lost = buff2;
    
    vector<int> buff3(lost.size() + reserve.size());
    auto iter3 = set_difference(reserve.begin(), reserve.end(), buff1.begin(), buff1.end(), buff3.begin());
    buff3.erase(iter3, buff3.end());
    reserve = buff3;
    
    for(auto stu:reserve){
        for(int i=0;i<lost.size();i++){
            if(lost[i]==stu-1 || lost[i]==stu+1){
                lost.erase(lost.begin()+i);
                break;
            }
        }
    }

    answer = n - lost.size();
    return answer;
}
