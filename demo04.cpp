#include <iostream>
using namespace std;
int main()
{
    int arr1[100], arr2[100];
    int i, n;
	
	
       cout<<"Copy the elements one array into another array : "<<endl;
	   
       cout<<"Input the number of elements to be stored in the array :";
       cin>>n;
   
       cout<<"Input "<<n<<" elements in the array : ";
       for(i=0;i<n;i++)
        {
	      cout<<"element --> "<<i<<": ";
          cin>>arr1[i];
	    }

    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout<<endl<<"The elements stored in the first array are : "<<endl;

    for(i=0; i<n; i++)
    {
        cout<<" "<<arr1[i];
    }

    cout<<endl<<"The elements copied into the second array are : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<" "<<arr2[i];
    }
    cout<<endl;
}
