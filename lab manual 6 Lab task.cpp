#include<iostream>
using namespace std;
int main()
{

	
// TASK 2	
//	
	int n;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	 	int num=1;
	 	for(int j=0;j<n-i-1;j++)
	 {
		 	cout<<" ";}
		 	for(int k=0;k<=i;k++)
		 	{cout<<num<<" ";
		 	num=num*(i-k)/(k+1);
			 }cout<<endl;
	 	
	 }
	 
	 
	 
	 

	
	// task 1
		
	int n;
	
	cout<<"How many terms would you like"<<endl;
	cin>>n;
	
	int x=1, y=0, term=0;
for ( int j=1; j<=3 ; j++ )	{

	for ( int i=1; i<=n ; i++ ) {
		
		cout<<term<<", ";
		term = x + y;
		x = y;
		y = term;		
		
		
	}

	
}
	
}
