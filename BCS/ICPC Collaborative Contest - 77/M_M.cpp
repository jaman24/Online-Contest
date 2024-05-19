#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

char grid[10][10];
ll gp[10][10];
vector<set<pair<ll,ll>>> group(50);
ll r,c;

ll dx[] = {1, 0, -1, 0, -1, 1, 1, -1};
ll dy[] = {0, 1, 0, -1, -1, 1, -1, 1};

bool valid(ll x, ll y){
    if(x >= 0 and x < r and y >= 0 and y < c){
        return true;
    }
    return false;
}

bool its_free(ll i, char ch){
    for(auto [x,y]:group[i]){
        if(grid[x][y] == ch)return false;
    }
    return true;
}

bool check_sides(ll i, ll j, char ch){
    for(int k = 0; k < 8; k++){
        ll x = i + dx[k];
        ll y = j + dy[k];
        if(valid(x, y) and grid[x][y] == ch)return false;
    }
    return true;
}

void Sudoku(ll x, ll y){
    if(x >= r and y >= c){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(y >= c){
        Sudoku(x+1, 0);
        return;
    }
    if(grid[x][y] != '-'){
        Sudoku(x, y+1);
        return;
    }
    ll group_no = gp[x][y];
    ll limit = group[group_no].size();
    for(int i = 1; i <= limit; i++){
        char ch = i + '0';
        if(its_free(group_no, ch) and check_sides(x, y, ch)){
            grid[x][y] = ch;
            Sudoku(x, y+1);
            grid[x][y] = '-';
        }
    }

}

void solve(){
    cin>>r>>c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>grid[i][j];
        }
    }
    
    ll g;
    cin>>g;
    for(int i = 0; i < g; i++){
        ll n;
        cin>>n;
        for(int j = 0; j < n; j++){
            string p;
            cin>>p;
            ll x = p[1]-'0';
            ll y = p[3]-'0';
            x--;
            y--;
            gp[x][y] = i;
            group[i].insert({x,y});
        }
    }
    Sudoku(0 , 0);

}
int main(){
    int cn = 1;
   //  cin>>cn;
    while(cn--){
        solve();
    }
    return 0;
}