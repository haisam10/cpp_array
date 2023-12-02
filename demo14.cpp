#include <iostream>
using namespace std;

int main()
{
   int arr1[100],i,n,p,x;
   
       cout<<"Insert New value in the unsorted array : ";
 
       cout<<"Input the size of array : ";
       cin>>n;
    /* Stored values into the array*/
       cout<<"Input "<<n<<" elements in the array in ascending order: ";
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
	
	
   cout<<"Input the value to be inserted : ";
   cin>>x;
   cout<<"Input the Position, where the value to be inserted :";
   cin>>p;
   
   cout<<"The current list of the array :";
   for(i=0;i<n;i++)
      cout<<arr1[i];   
   /* Move all data at right side of the array */
   for(i=n;i>=p;i--)
      arr1[i]= arr1[i-1];
   /* insert value at given position */
      arr1[p-1]=x;

 
   cout<<endl<<"After Insert the element the new list is : ";
   for(i=0;i<=n;i++)
      cout<<arr1[i];
	  cout<<endl;
}
