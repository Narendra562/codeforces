#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3,s4,s5,s6,s7,s8;
        cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8;
        if(s1=="RRRRRRRR" || s2=="RRRRRRRR" || s3=="RRRRRRRR" || s4=="RRRRRRRR" || s5=="RRRRRRRR" || s6=="RRRRRRRR" || s7=="RRRRRRRR" || s8=="RRRRRRRR"){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
}