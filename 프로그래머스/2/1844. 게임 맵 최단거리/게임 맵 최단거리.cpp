#include<vector>
#include<queue>

using namespace std;

int solution(vector<vector<int> > maps)
{   
    //좌표는 항상 (n,m) n이 아래깊이,m이 가로깊이
    int n = maps.size();
    int m = maps[0].size();
    vector<vector<int>> memo(n, vector<int> (m,0));
    
    queue<pair<int, int>> q;
    q.push({0,0}); 
    memo[0][0]++;
    
    while(!q.empty()) {
        pair<int,int> now =q.front(); q.pop();
        
        //상
        if(now.first-1 >= 0 && maps[now.first-1][now.second] == 1 ){ //앞이 false면 뒤를 아예 안봄 ㄱㅊ
            if(memo[now.first-1][now.second] == 0 ) {
                q.push({now.first-1, now.second});
                memo[now.first-1][now.second] = memo[now.first][now.second]+1;
            }
        }
        
        //하
        if(now.first+1 <= n-1 && maps[now.first+1][now.second] == 1) {
            if(memo[now.first+1][now.second] == 0 ){
                q.push({now.first+1, now.second});
                memo[now.first+1][now.second] = memo[now.first][now.second] +1;
            }
        }
        
        //좌
        if (now.second-1 >=0 && maps[now.first][now.second-1] == 1) {
            if(memo[now.first][now.second-1] == 0 ){
                q.push({now.first, now.second-1});
                memo[now.first][now.second-1] = memo[now.first][now.second]+1;
            }
        }
        
        //우
        if (now.second+1<=m-1 && maps[now.first][now.second+1]==1) {
            if(memo[now.first][now.second+1] == 0 ) {
                q.push({now.first, now.second+1});
                memo[now.first][now.second+1]=memo[now.first][now.second]+1;
            }
        }
    }
    
    if (memo[n-1][m-1] == 0 ) return -1;

    return memo[n-1][m-1];
}