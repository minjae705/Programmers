#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string ary[3] = {"4","1","2"};
string solution(int n) {
    string answer = "";
    while(n>=3){
        answer+=ary[n%3];
        if(n%3==0)
            n=n/3-1;
        else
            n/=3;
    }
    if(n>0)
        answer+=ary[n];
    reverse(answer.begin(),answer.end());
    return answer;
}

// 알고리즘 헤더가 필요가 없었던 것이다...
// string ary[3] = {"4","1","2"};
// string solution(int n) {
//     string answer = "";
//     while(n>=3){
//         answer=ary[n%3]+answer;
//         if(n%3==0)
//             n=n/3-1;
//         else
//             n/=3;
//     }
//     if(n>0)
//         answer=ary[n]+answer;
//     return answer;
// }
