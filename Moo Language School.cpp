#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<vector>
using namespace std;
#define ll long long int

void solve(){
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    int farms = N / K;
    vector<bool> own(farms, false);
    for(int i = 0; i < N; i++){
        if(s[i] == '0'){
            int farmindx = i / K;
            own[farmindx] = true;
        }
    }
    int count = 0;
    for(int f = 0; f < farms; f++){
        if(!own[f])
            count++;
    }
    cout << count << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T--)
        solve();
}
