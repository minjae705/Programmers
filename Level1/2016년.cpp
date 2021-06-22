#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    string day[7]={"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int x=-1;
    for(int i=1;i<=a-1;i++)
        x+=month[i];
    x+=b;
    return day[x%7]; 
}
