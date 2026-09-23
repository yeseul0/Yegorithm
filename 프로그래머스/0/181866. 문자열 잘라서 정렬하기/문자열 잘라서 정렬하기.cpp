#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp="";
    for (char c : myString) {
        if (c!='x') temp +=c;
        else if (temp!="") {
            answer.push_back(temp);
            temp = "";
        }
    }
    if (temp!="") answer.push_back(temp);
    sort(answer.begin(), answer.end());
    return answer;
}