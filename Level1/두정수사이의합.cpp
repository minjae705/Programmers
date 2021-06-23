#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++)
        answer += i;
    return answer;
  
//     return (long long)(a + b) * (abs(a - b) + 1) / 2; 시그마 공식
}
