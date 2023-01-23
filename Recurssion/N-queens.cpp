#include <bits/stdc++.h>
using namespace std;


bool issafe(int row,int col,vector<string>&board,int n){
	int duprow=row;
	int dupcol=col;
	while(row>=0 and col>=0){
		if(board[row][col]=='1')
		return false;
		row--;
		col--;
	}
	col=dupcol;
	row=duprow;
	while(col>=0){
		if(board[row][col]=='1')return false;
		col--;
	}
	col=dupcol;
	//row=duprow;
	while(row<n and col>=0){
		if(board[row][col]=='1')return false;
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
		if(issafe(row,col,board,n)){
		board[row][col]='1';
		solve(col+1,board,ans,n);
		board[row][col]='0';}
	}
}




int main() {
	int n;
	cin>>n;
	vector<vector<string>>ans;
	vector<string> board(n);
	string s(n,'0');
	for(int i=0;i<n;i++){
		board[i]=s;
	}
	solve(0,board,ans,n);
	vector<string>gh=ans[0];
	for(int i=0;i<n;i++){
		for(int j=0;j<gh[i].size();j++){
			cout<<gh[i][j]-'0'<<" ";
		}
		cout<<endl;
	}


}
