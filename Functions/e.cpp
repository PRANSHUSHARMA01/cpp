int swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        return b;
        return a;
}

int main() {
        int x,y;
        cin>>x>>y;
swap(x,y);
cout<<x<<y;

}