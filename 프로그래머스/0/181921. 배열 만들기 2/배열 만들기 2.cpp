#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int n =l ;n<=r;n++) {
        string strnum= to_string(n);
        bool f = true;
        for (char c : strnum) {
            if(!(c=='0' || c=='5')) {
                f = false;
                break;
            }
        }
        if (f) answer.push_back(n);
    }
    return answer.size()==0? vector<int> {-1}:answer;

}