#include <iostream>
using namespace std;
  
int  main()  
{  
    int arr[10]; 
    int i;
        cout<<"Read and Print elements of an array:"<<endl;

        cout<<"Input 10 elements in the array :"<<endl;
    for(i=0; i<10; i++)  
    {  
        cout<<"element - "<<i<<": ";
        cin>>arr[i];
    }  

    cout<<endl<<"Elements in array are: ";
    for(i=0; i<10; i++)  
    {   
        cout<<" "<<arr[i];
    } 
    cout<<endl;
}
