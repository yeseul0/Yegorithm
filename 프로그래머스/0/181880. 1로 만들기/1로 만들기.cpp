#include <string>
#include <vector>

using namespace std;
//가장 가까운 2제곱수가 몇제곱인지 가 답.(사이에서 아래쪽 지수!!)
//2^0 2^1 2^2 2^3 2^4
//              12
int solution(vector<int> num_list) {
    int answer=0;
    
    for (int i : num_list) {
        int k=0;//값, 지수 카운트
        while (i>1) {
            i/=2;
            k++;
        }
        answer+=k;
        
    }
    return answer;
}