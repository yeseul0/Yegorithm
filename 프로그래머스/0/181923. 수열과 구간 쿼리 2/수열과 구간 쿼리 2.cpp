#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> q: queries) {
        int temp = -1;
        for(int i = q[0];i<=q[1];i++) {
            if(arr[i]>q[2] && (arr[i] < temp || temp ==-1) ){
                temp=arr[i];
            }
        }
        answer.push_back(temp);
    }
    return answer;
}