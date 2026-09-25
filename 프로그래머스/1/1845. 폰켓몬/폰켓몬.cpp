#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums){
    unordered_set<int> count;
    for (int n : nums) {
        count.insert(n);
    }
    //그냥 총 몇종류인지..내가 가져갈 동물이 몇마리인지가 중요. 둘중 작은값이 데려갈 동물종류 ㅇㅇ
    if (count.size()<nums.size()/2) return count.size();
    else return nums.size()/2;
    
    int answer = 0;
    return answer;
}