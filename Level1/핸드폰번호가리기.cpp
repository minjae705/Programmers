#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int len = phone_number.length();
    string last = phone_number.substr(len - 4);
    for(int i = 0; i < len - 4; i++)
        answer.append("*");
    answer.append(last);
  
//     for (int i = 0; i < phone_number.size() - 4; i++)
//         phone_number[i] = '*';
//     answer = phone_number;
  
    return answer;
}
