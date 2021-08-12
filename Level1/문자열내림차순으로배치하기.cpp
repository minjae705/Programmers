#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

string solution(string s) {
    sort (s.begin(), s.end(), greater<char>());
    return s;
}

// string solution(string s) {
//     string answer = "";
//     vector<char> str;
//     for(int i=0; i<s.size(); i++){
//         str.push_back(s[i]);
//     }
//     sort(str.begin(), str.end(), greater<int>());
//     for(auto x: str){
//         answer += x;
//     }
//     return answer;
// }
