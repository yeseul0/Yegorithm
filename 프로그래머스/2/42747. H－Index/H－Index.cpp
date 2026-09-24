#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    for (int h=citations.size(); h>=1; h--) {
        int count = 0;
        for (int i : citations) {
            if(i>=h) count++;
        }
        if(count>=h) return h;
    }
    return 0;
}