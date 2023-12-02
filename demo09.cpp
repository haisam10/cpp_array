#include <iostream>
using namespace std;

int main()
{
    int arr1[100];
    int i, mx, mn, n;
	
	
       cout<<"Find maximum and minimum element in an array :"<<endl;

       cout<<"Input the number of elements to be stored in the array :";
       cin>>n;
   
       cout<<"Input "<<n<<" elements in the array :";
       for(i=0;i<n;i++)
            {
	      cout<<"element -->"<<i<<" : ";
	      cin>>arr1[i];
	    }


    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    cout<<"Maximum element is : "<<mx<<endl;
    cout<<"Minimum element is : "<< mn;
}
