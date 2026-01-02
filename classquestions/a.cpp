#include <bits/stdc++.h>
using namespace std;

int main() {
int k,n,m;
cin>>k>>n>>m;
string s;
cin>>s;
int count=0;
for(int i=0;i<k;i++){
        int asc=(int)s[i];
        if(asc>=n && asc<=m){
                count++;
        }
}
cout<<count;

}
