#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    string date_str1 = "", date_str2 = "";
    for ( int i : date1) {
        date_str1 += to_string(i);
    }
    for ( int i : date2) {
        date_str2 += to_string(i);
    }
    return stoi(date_str1) < stoi(date_str2) ? 1: 0;
}