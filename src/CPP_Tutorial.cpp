//============================================================================
// Name        : CPP_Tutorial.cpp
// Author      : Shailendra Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "vector"
#include <iostream>
using namespace std;

bool isEdge(int N);
bool isAdjacent(int N);


int main(int argc, char **argv) {
	cout << isEdge(3) << endl;
	return 0;
}

bool isEdge(int N){
	int a[N][N]={{1,0,0},
				 {0,0,0},
				 {0,0,1}};

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if( ((a[0][0]!=0 && a[N-1][N-1]!=0) && (a[0][0]==a[N-1][N-1])) ||
				((a[N-1][0]!=0 && a[0][N-1]!=0) && (a[N-1][0]==a[0][N-1]) )){
				return true;
			}
		}
	}
	return false;
}

bool isAdjacent(int N){
	int a[N][N]={{0,1,0},
				 {0,0,0},
				 {0,0,0}};

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if( (a[i][j] == a[i-1][j]) ||
				(a[i][j] == a[i+1][j]) ||
				(a[i][j] == a[i][j-1]  ||
				(a[i][j] == a[i][j-1]))){
				return true;
			}
		}
	}
	return false;
}


