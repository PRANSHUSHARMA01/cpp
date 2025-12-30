#include <bits/stdc++.h>
using namespace std;
int swap(int&x,int & y)  //pass by reference
{
        int c;
        c=x;
        x=y;
        y=c;
        return x;
        return y;
}

int main() {
        int x,y;
        cin>>x>>y;
swap(x,y);
cout<<x<<" "<<y;

}
