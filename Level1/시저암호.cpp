#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' ')
            answer.append(" ");
        else if(s[i] >= 'a'){
            if(s[i] + n > 'z')
                answer += char(s[i] + n - 26);
            else
                answer += char(s[i] + n);
        }
        else{
            if(s[i] + n > 'Z')
                answer += char(s[i] + n - 26);
            else
                answer += char(s[i] + n);
        }
    }
    return answer;
}
