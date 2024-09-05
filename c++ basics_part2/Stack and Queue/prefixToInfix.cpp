#include<bits/stdc++.h>
using namespace std;

string prefixToInfix(string s){
    stack<string> st;
    int n=s.size();
    int i=n-1;
    while(i>=0){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'
        || (s[i]>='0' && s[i]<='9'))){
            st.push(string(1,s[i]));
        }else{
            string t1=""+st.top();
            st.pop();
            string t2=""+st.top();
            st.pop();
            st.push("("+t1+s[i]+t2+")");
        }
        i--;
    }
    return st.top();
}

int main(){
    cout<<prefixToInfix("*+PQ-MN");
}