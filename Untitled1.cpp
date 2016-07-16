#include <iostream>
using namespace std;

int m,n,i,a[50];

int check(int b){
    for(int i=0;i<n;i++){
        
        if(a[i]==b){
            return 1;
        }
    }
    return 0;
}

int main() {
    
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n;
        cin>>m>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int step=1;
        for(int j=0;j<=m;j++){
            if(check(j)){
                if(check(j+2)){
                    if(check(j+3)){
                        cout<<"NO";
                        return 0;
                    }else{
                        step=step+3;
                    }
                }else{
                    step=step+2;
                }
            }else{
                step=step+1;
            }
            if(step==m-1){
                cout<<"YES"<<step<<j;
                return 0;
            }
        }
        
    }
    
    return 0;
}

