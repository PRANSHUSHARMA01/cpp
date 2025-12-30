#include <bits/stdc++.h>
using namespace std;
int n;
bool prime(int x)
{ 
        if(x<2)
        return 0;
        

        for(int i=2;i<x;i++){
                if(x%i==0)
                return 0;
                
        }
        return 1;
}
int fac (int y){
         int ans=1;
     
        for(int i=1;i<=y;i++){
                  
                 ans=ans*i;}
                 
                
        
         return ans;
        
        
        
        
}

int main() {
        int x,y;
        cin>>x>>y;
        cout<<prime(x)<<endl;
        cout<<fac(x)<<endl;
        cout<<prime(y)<<endl;
        cout<<fac(y)<<endl;
         cout<<prime(y-x)<<endl;
        cout<<fac(y-x)<<endl;
	

}
