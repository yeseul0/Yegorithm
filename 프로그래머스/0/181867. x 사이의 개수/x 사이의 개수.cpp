#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(string myString) {
    stringstream ss(myString);
    string temp;
    vector<int> answer;
    while(getline(ss, temp, 'x')) {
        answer.push_back(temp.size());
    }
    if (myString.back()=='x') answer.push_back(0);
    return answer;
}