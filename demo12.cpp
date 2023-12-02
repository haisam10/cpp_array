#include <iostream>
using namespace std;

int main()
{
    int arr1[100];
    int n, i, j, tmp;
	
	
       cout<<"sort elements of array in descending order : ";	

    cout<<"Input the size of array : ";
    cin>>n;

       cout<<"Input "<<n<<" elements in the array : ";
       for(i=0;i<n;i++)
            {
	      cout<<"element -->"<<i<<" : ";
	      cin>>arr1[i];
	    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

     cout<<"Elements of array is sorted in descending order: ";
    for(i=0; i<n; i++)
    {
        cout<<arr1[i];
    }
	    cout<<endl;
}
