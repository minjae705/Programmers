#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto &x:commands){ //for(auto command:commands) 이거 맘에 드네
        int i,j,k;
        i=x[0]-1;
        j=x[1]-1;
        k=x[2]-1;
        vector<int> tmp;
        for(int t=i;t<=j;t++)
            tmp.push_back(array[t]);
        sort(tmp.begin(),tmp.end());
        answer.push_back(tmp[k]);
    }
    return answer;
}
