#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ways(int n,int sum,int val){
    if(sum+val>n)return 0;
    if(sum+val==n)return 1;
    sum+=val;
    return ways(n,sum,1)+ways(n,sum,2)+ways(n,sum,3);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    int sum=0;
    cout<<ways(n,sum,1)+ways(n,sum,2)+ways(n,sum,3);
    
    return 0;
}
