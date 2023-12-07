#include <iostream>

using namespace std;
int wierdalgo(long a){
    cout<<a<<" ";
    if(a%2==0){
        return wierdalgo(a/2);
    }
    else if(a!=1){
        return wierdalgo(3*a+1);
    }
    else{
        return 1;
    }
}
int main() {
    long a;
    cin>>a;
    wierdalgo(a);
}