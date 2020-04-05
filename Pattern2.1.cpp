//mirror no pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
    	int val=1;
    	for(int j=1; j<=n; j++){
    		if((n-j)>=i){
    			cout<<" ";
			}
			else{
				cout<<val;
				val=val+1;
			}
		}
    	
    	cout<<endl;
	}
}



