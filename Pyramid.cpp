// Compiled with: g++ -Wall -std=c++14 -pthread

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=12;
    vector<vector<int>> ans(n,vector<int>(n));
    int id=1;
    for(int i=n/2;i>=0;i--){
        int x=n-1,y=i;
        while(y<=n/2){
           ans[x][y]=id++;
           x--;
           y++;
        }
        x+=2;
        while(x<n){
            ans[x][y]=id++;
            y++;
            x++;
        }
    }
    for(int i=n-2;i>=n/2;i--){
        int x=i,y=0;
        while(y<=n/2){
           ans[x][y]=id++;
           x--;
           y++;
        }
        x+=2;
        while(y<n){
            ans[x][y]=id++;
            y++;
            x++;
        }
    }
    for(int i=(n/2)-1;i>=0;i--){
        int x=i,y=0;
        while(x>=0){
           ans[x][y]=id++;
           x--;
           y++;
        }
        x=0;
        y--;
        y=(n/2)+((n/2)-y);
        while(y<n){
            ans[x][y]=id++;
            y++;
            x++;
        }
    }
    for(int i=0;i<n;i++,cout<<'\n')for(int j=0;j<n;j++)cout<<ans[i][j]<<' ';
    return 0;
}
