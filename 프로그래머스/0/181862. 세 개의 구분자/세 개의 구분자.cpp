#include <string>
#include <vector>
//string temp에 넣어놓고, 구분자 나오면 vector에 푸시!
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    for (char s : myStr) {
        if (s == 'a' || s == 'b' || s == 'c') {
            if (temp != "") {
                answer.push_back(temp);
                temp = "";
            }
        }
        else temp += s;
    }
    if ( temp != "") answer.push_back(temp);
    
    return answer.size() == 0 ?  vector<string>{"EMPTY"}: answer;
}