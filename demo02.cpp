#include <iostream>
using namespace std;

int main()
{
   int i,n,a[100];

        cout<<"Read n number of values in an array and display it in reverse order:"<<endl;
   
        cout<<"Input the number of elements to store in the array : ";
        cin>>n;
   
   cout<<"Input"<<n<<"number of elements in the array : ";
   for(i=0;i<n;i++)
      {
        cout<<"element --> "<<i<<" : ";
        cin>>a[i];

	  }
      
   cout<<endl<<"The values store into the array are : "<<endl;
   for(i=0;i<n;i++)
     {
       cout<<a[i];
	 }

    cout<<endl<<"The values store into the array in reverse are : "<<endl;
   for(i=n-1;i>=0;i--)
      {
       cout<<a[i];
	  }
      cout<<endl;
} 
