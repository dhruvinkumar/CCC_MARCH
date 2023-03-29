#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool checkrow(int a[9][9]){
   
    for(int i=0;i<9;i++){
          set<int> s;
        for(int j=0;j<9;j++){
             s.insert(a[i][j]);
        }
        if(s.size()!=9)return false;        
    }
    return true;
}

bool checkcol(int a[9][9]){
   
    for(int i=0;i<9;i++){
          set<int> s;
        for(int j=0;j<9;j++){
             s.insert(a[j][i]);
        }
        if(s.size()!=9)return false;        
    }
    return true;
}

bool small(int a[9][9],int l,int r){
    set<int> s;
    for(int i=l;i<l+3;i++){
        for(int j=r;j<r+3;j++){
            s.insert(a[i][j]);
        }
    }
    if(s.size()!=9)return false;
    
    return true;
}

bool checkbox(int a[9][9]){
    bool b=true;
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
        if(!small(a,i,j)){
            b=false;
        }
    }
    }
    return b;
    
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int a[9][9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>a[i][j];
            }
        }
        
        if(checkrow(a) && checkcol(a) && checkbox(a)){
            cout<<"Valid"<<endl;
        }else{
            cout<<"inValid"<<endl;
        }
        
    }
    return 0;
}
