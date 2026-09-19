#include <iostream>
#include <vector>
using namespace std;

void sorted(vector<int>& a){
    int pos=0;    
    for(int i =0;i < a.size();i++){
        if(a[i] !=0){
            a[pos++] = a[i];
        }
    }
    
    while(pos < a.size()){
        a[pos++] =0;
    }
    for(auto i: a){
        cout << i << endl;
    }
}

int main() {
    vector<int> a = {1,0,3,5,0};
    sorted(a);
}

