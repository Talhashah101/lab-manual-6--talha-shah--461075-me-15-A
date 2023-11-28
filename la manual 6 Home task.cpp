#include<iostream>
using namespace std;
int main()
{
	//task :2
	
	int n;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	
	{
		for(int j=1;j<=i;j++)
	
			cout<<j<<" ";
        cout<<endl;
        
	}



    
	 //task:03
     

int n, k = 2;	
cout<<"Enter the number of rows you would like"<<endl;	
cin>>n;
cout<<"1"<<endl;

for ( int i=1; i<=n-1; i++ ) {
			
	for ( int j = 1; j <= (i)*2; j = j+1) {
		cout<<k;
	}
	k=k+2;
	cout<<endl;
						
}
	
return 0;










 //task 1
	   
int sum = 0;	

for ( int i=2; i<=50; i++) {	
			
	for (int  j=2; j<=25; j++ ) {	
	
		if ( i%j == 0 ) {		
			break;
		}
	}
	if ( j > i/2 )      
	sum = sum + i;	
	
}

cout<<"The sum of all prime numbers between 1 and 50 is: "<<sum;
return 0;
	   
	   
}


