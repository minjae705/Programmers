#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    int add = x;
    vector<long long> answer;
    while(n--) {
        answer.push_back(x);
        x += add;
    }
    return answer;
}
