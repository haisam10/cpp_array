#include <iostream>
using namespace std;


int main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;
	
	
       cout<<"Separate odd and even integers in separate arrays: ";

       cout<<"Input the number of elements to be stored in the array :";
       cin>>n;
   
       cout<<"Input "<<n<<" elements in the array : ";
       for(i=0;i<n;i++)
            {
	      cout<<"element --> "<<i<<" : ";
	      cin>>arr1[i];
	    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    cout<<"The Even elements are : ";
    for(i=0;i<j;i++)
    {
	cout<<arr2[i];
    }

    cout<<endl<<"The Odd elements are : ";
    for(i=0;i<k;i++)
    {
	cout<< arr3[i];
    }
    cout<<endl;	
 }
