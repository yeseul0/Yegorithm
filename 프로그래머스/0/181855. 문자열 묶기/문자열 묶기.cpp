#include <string>
#include <vector>


using namespace std;

int solution(vector<string> strArr) {
    vector<int> v(31, 0); //1~30까지 인덱스 사용
    for(string s : strArr) {
        v[s.size()]++;
    }
    
    int answer=0;
    for(int i : v) {
        if(answer<i) answer=i;
    }
    return answer;
}