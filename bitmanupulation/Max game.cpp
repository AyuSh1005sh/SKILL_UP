#include<bits/stdc++.h>
using namespace std;

int solve (int n) {
   //000101101
   int cnt=0;
   
   while(n>0){
       n=n>>1;
       
       cnt++;
   }
   return 1<<(cnt-1);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;

        int out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}   