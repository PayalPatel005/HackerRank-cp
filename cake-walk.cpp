#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // Here first count numbber of odd elements. And then we have two choices incerement and decrement so do 2^(No. of odd elements).
    int n,num,ans=1;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        cin >> num;
        if(num%2!=0) ans = (ans*2)%1000000007;
    }

    cout << ans;
    return 0;
}
