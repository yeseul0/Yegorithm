#include <string>
#include <vector>

using namespace std;

void dfs(int idx, int num, vector<int>& numbers, int target, int& answer ) {
    if (idx==numbers.size()) {
        if(target==num) answer++;
        return;
    }
    dfs(idx+1, num + numbers[idx], numbers, target, answer );
    dfs(idx+1, num - numbers[idx], numbers, target, answer );
}

//dfs로 풀자.. 
// numbers : [1, 1, 1, 1, 1]

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(0, 0,numbers, target, answer);
    return answer;
}