#include <iostream>
using namespace std;

int main()
{
   int arr1[100],i,n,p,inval;
    cout<<"Insert New value in the sorted array : "<<endl;
    cout<<"Input the size of array : ";
    cin>>n;
/* Stored values into the array*/
       cout<<"Input "<<n<<" elements in the array in ascending order: ";
       for(i=0;i<n;i++)
            {
	      cout<<"element --> "<<i<<" : ";
	      cin>>arr1[i];
	    }
   cout<<"Input the value to be inserted : ";
   cin>>inval;
   cout<<"The exist array list is : ";
   for(i=0;i<n;i++)
      cout<<arr1[i];
   /* Determine the position where the new value will be insert.*/
   for(i=0;i<n;i++)
   {
   	
    if(inval<arr1[i])
     {
       p = i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }
   /* move all data at right side of the array */
   for(i=n+1;i>=p;i--)
      arr1[i]= arr1[i-1];
   /* insert value at the proper position */
      arr1[p]=inval;
      cout<<endl<<"After Insert the list is : ";
   for(i=0;i<=n;i++)
      cout<<arr1[i];
	  cout<<endl;
}
