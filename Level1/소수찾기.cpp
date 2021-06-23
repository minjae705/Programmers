#include <string>
#include <vector>
#include <cmath>
using namespace std;

int primeNum[1000001];
int solution(int n) {
    for(int i=2;i<=n;i++)
        primeNum[i]=i;
    
    for(int i=2;i<=sqrt(n);i++){
        if(primeNum[i]==0)
            continue;
        for(int j=i*i;j<=n;j+=i)
            primeNum[j]=0;
    }
    
    int answer = 0;
    for(int i=2;i<=n;i++)
        if(primeNum[i]!=0)
            answer++;
    return answer;
}
