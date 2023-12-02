#include <iostream>
using namespace std;
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       cout<<"Print all unique elements of an array:"<<endl;
       cout<<"Input the number of elements to be stored in the array: ";
       cin>>n;
       cout<<"Input "<<n<<" elements in the array :";
       for(i=0;i<n;i++)
            {
                cout<<"element --> "<<i<<" ";
                cin>>arr1[i];
	    }
    cout<<endl<<"The unique elements found in the array are: ";
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          cout<<arr1[i];
        }
    }
       cout<<endl;
}
