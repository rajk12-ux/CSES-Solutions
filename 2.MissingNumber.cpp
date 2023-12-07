#include <iostream>

using namespace std;

int main() {
    long n;
    cin>>n;
    long sum=0;
    int a;
    for(int i=0;i<n-1;i++){
        cin>>a;
        sum+=a;
    }
    cout<<n*(n+1)/2-sum;
}