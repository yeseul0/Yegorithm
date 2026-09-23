#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "" ;
    for (char c : my_string) {
        if (c==' ') {
            if (temp != "") {//유효 단어 후 첫 공백 
                answer.push_back(temp);
            }
            temp=""; //지속 공백
        }
        else temp+=c;
    }
    //마지막 temp 챙겨주자
    if (temp!="") answer.push_back(temp);
    return answer;
}