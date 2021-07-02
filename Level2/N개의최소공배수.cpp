#include <string>
#include <vector>
#include <queue>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return a*(b/gcd(a,b));
}

int solution(vector<int> arr) {
    deque<int> dq(arr.begin(),arr.end());
    while(dq.size()>1){
        int tmp1,tmp2;
        tmp1=dq.front();
        dq.pop_front();
        tmp2=dq.front();
        dq.pop_front();
        dq.push_back(lcm(tmp1,tmp2));
    }
    return dq.front();
}

// int gcd(int x, int y) { return x % y == 0 ? y : gcd(y, x % y); }
// int lcm(int x, int y) { return x * y / gcd(x, y); }
// int solution(vector<int> arr) {
//     int answer = arr[0];
//     for (int i = 1; i < arr.size(); i++)
//         answer = lcm(answer, arr[i]);
//     return answer;
// }
