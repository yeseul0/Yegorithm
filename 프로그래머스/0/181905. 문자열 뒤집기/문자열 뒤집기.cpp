#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string temp = "";
    temp = my_string.substr(s,e-s+1);
    reverse(temp.begin(), temp.end());
    
    my_string.replace(s, e-s+1, temp);
    return my_string;
}