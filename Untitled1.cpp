#include <iostream>
using namespace std;

int m,n,i;

int check(int b,int *a){
	for(i=0;i<n;i++){
		cout<<*(a+i);
	}
    for(int i=0;i<n;i++){
    	
        if(a[i]==b){
            return 1;
        }
    }
    return 0;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int m,n;
	    cin>>m>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }  
	    int step=1;
	    for(int j=0;j<=m;j++){
	    	int a=check(j,&a);
	    	cout<<"a"<<a;
	        if(a){
	            cout<<"j - "<<j<<endl;
	            if(check(j+2,&a)){
	                cout<<"j+1 - "<<j+1<<endl;
	                if(check(j+3,&a)){
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
	        cout<<"int - steps - "<<step<<" j -"<<j<<endl;
	        if(step==m-1){
	            cout<<"YES"<<step<<j;
	            return 0;
	        }
	    }
	    
	}
	
	return 0;
}


