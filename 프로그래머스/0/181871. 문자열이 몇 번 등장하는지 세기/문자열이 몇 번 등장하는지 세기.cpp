#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {

    int count =0;
    while(myString.find(pat)!=string::npos) {
        int idx = myString.find(pat);
        count++;
        myString.erase(myString.begin(), myString.begin()+idx+1);
    }
    return count;
}