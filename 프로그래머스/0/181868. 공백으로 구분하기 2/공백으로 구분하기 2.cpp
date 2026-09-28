#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string s="";
    for(char c : my_string) {
        
        if(c!=' ') s+=c;
        else if(c==' ' && s.size() > 0) {
            answer.push_back(s);
            s="";
        }
    }
    if(s.size()>0 ) answer.push_back(s);
    
    return answer;
}