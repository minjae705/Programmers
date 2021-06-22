#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
  vector<int> answer;
  answer.push_back(arr[0]);
  for(int i = 1; i<arr.size();i++){
      if(arr[i-1]!=arr[i])
          answer.push_back(arr[i]);
    }
  
//   arr.erase(unique(arr.begin(), arr.end()),arr.end()); unique와 erase로 벡터의 중복원소 제거하기
//   vector<int> answer = arr;
    
  return answer;
}
