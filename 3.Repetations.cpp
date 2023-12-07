#include <iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    int maxx=1;
    for(int i=0;i<s.size();i++){
        int j=1;
        while(i+j<s.size()){
            if(s[i+j]!=s[i+j-1]){
                break;
            }
            ++j;
        }
        if(j>maxx){
            maxx=j;
        }
        i=i+j-1;
    }
    cout<<maxx;
    return 0;
}