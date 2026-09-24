#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for ( vector<int> q : commands) {
        vector<int> temp(array.begin()+q[0]-1, array.begin()+q[1]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[q[2]-1]);
        sort(temp.begin()+q[0]-1, temp.begin()+q[1]);
    }
    return answer;
}