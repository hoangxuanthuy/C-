#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i=0; i<s.size();i++){
        s[i]=toupper(s[i]);
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}