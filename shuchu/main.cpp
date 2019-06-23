#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n,b=0;
    while(a>0){
        a=a/10;
        b++;
    }
    int s,k,l=1,i;
    s=pow(10,b-1);
    if(b==3){
        while(n>0){
            k=n/s;
            n=n%s;
            s=s/10;
            if(l==1){
                for(i=0;i<k;i++){
                    cout<<"B";
                }
            }
            if(l==2){
                for(i=0;i<k;i++){
                    cout<<"S";
                }
            }
            if(l==3){
                for(i=1;i<=k;i++){
                    cout<<i;
                }
            }
            l++;
        }
    }
    l=1;
    if(b==2){
        while(n>0){
            k=n/s;
            n=n%s;
            s=s/10;
            if(l==1){
                for(i=0;i<k;i++){
                    cout<<"S";
                }
            }
            if(l==2){
                for(i=1;i<=k;i++){
                    cout<<i;
                }
            }
            l++;
        }
    }
    if(b==1){
        for(i=1;i<=n;i++){
            cout<<i;
        }
    }
    return 0;
} 
