#include <bits/stdc++.h>
using namespace std;


bool issafe(int row,int col,vector<string>&board,int n){
	int duprow=row;
	int dupcol=col;
	while(row>=0 and col>=0){
		if(board[row][col]=='Q' )
		return false;
		row--;
		col--;
	}
	col=dupcol;
	row=duprow;
	while(col>=0){
		if(board[row][col]=='Q')return false;
		col--;
	}
	col=dupcol;
	//row=duprow;
	while(row<n and col>=0){
		if(board[row][col]=='Q')return false;
		row++;
		col--;
	}
	return true;
}
void solve(int col, vector<string>&board, vector<vector<string>>&ans, int n){
	if(col==n){
		ans.push_back(board);
		return;
	}
	for(int row=0;row<n;row++){
		if(issafe(row,col,board,n) and board[row][col]!='*'){
		board[row][col]='Q';
		solve(col+1,board,ans,n);
		board[row][col]='.';}
	}
}




int main() {
	//int n;
	//cin>>n;
	vector<vector<string>>ans;
	vector<string> board(8);
	//string s(n,'.');
	for(int i=0;i<8;i++){
	    string s;
	    cin>>s;
		board[i]=s;
	}
	solve(0,board,ans,8);
    cout<<ans.size()<<endl;
	//vector<string>gh=ans[0];
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<gh[i].size();j++){
	// 		cout<<gh[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }


}
