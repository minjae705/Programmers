#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len=s.length();
    if(len%2)
        answer=s[len/2];
    else{
        answer.append(1,s[len/2-1]);
        answer.append(1,s[len/2]);
    }
    return answer;

//     if(len%2==0)
//         return s.substr(len/2-1,2);
//     else 
//         return s.substr(len/2,1);

}
