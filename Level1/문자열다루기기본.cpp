#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    int len = s.length();
    if(len==4 || len==6){
        for(int i=0;i<len;i++){
            if(s[i]-'0'>=0 && s[i]-'0'<=9)
                continue;
            return false;
          
//           if (!isdigit(s[i]))
//              answer = false;
        }
        return true;
    }
    else
        return false;
}
