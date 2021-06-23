#include <string>
#include <vector>
#include <numeric> // accumulate

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int size = arr.size();
    for(auto a:arr)
        answer += a;
    answer /= size;
    return answer;
  
//     double answer = accumulate(arr.begin(), arr.end(), 0);
//     return answer / arr.size();
  
}
