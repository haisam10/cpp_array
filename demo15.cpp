#include <iostream>
using namespace std;

int main(){
  int arr1[50],i,pos,n;
  
       cout<<"Delete an element at desired position from an array : ";
  
       cout<<"Input the size of array : ";
       cin>>n;
    /* Stored values into the array*/
        cout<<"Input "<<n<<" elements in the array in ascending order: ";
       for(i=0;i<n;i++)
            {
	      cout<<"element --> "<<i<<" : ";
	      cin>>arr1[i];
	    }

  cout<<"Input the position where to delete: ";
  cin>>pos;
/*---- locate the position of i in the array -------*/
  i=0;
  while(i!=pos-1)
            i++;
/*---- the position of i in the array will be replaced by the 
       value of its right */
  while(i<n){
            arr1[i]=arr1[i+1];
            i++;
  }
  n--;
   cout<<endl<<"The new list is : "; 
  for(i=0;i<n;i++)
        {
		    cout<<" "<<arr1[i];
		}  
            cout<<endl;

}
