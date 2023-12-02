#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i, n, sum=0;
	
	
       cout<<"Find sum of all elements of array: -->"<<endl;

       cout<<"Input the number of elements to be stored in the array :";
       cin>>n;

       cout<<"Input "<<n<<" elements in the array :";
       for(i=0;i<n;i++)
        {
          cout<<"element --> "<<i<<" :";
          cin>>a[i];
	    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    cout<<"Sum of all elements stored in the array is : "<<sum;
} 