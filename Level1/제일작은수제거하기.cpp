#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int min = 2147483647;
    int minidx = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=min){
            min=arr[i];
            minidx=i;
        }
    }
    arr.erase(arr.begin()+minidx);
    if(arr.size()==0)
        arr.push_back(-1);
    return arr;
}
