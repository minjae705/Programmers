#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    vector<int> divisor;
    int total = brown + yellow;

    for(int i=3; i*i<=total; i++)
        if(total%i==0)
            divisor.push_back(i);

    for(auto x:divisor){
        if((x-2)*(total/x-2)==yellow){
            answer={x, total/x};
            break;
        }
    }
    sort(answer.begin(), answer.end(), greater<int>());
    return answer;
}
