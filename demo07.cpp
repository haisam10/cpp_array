#include <iostream>
using namespace std;

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;
	
	
       cout<<"Merge two arrays of same size sorted in decending order."<<endl;
	   
       cout<<"Input the number of elements to be stored in the first array :";
       cin>>s1;
   
       cout<<"Input "<<s1<<" elements in the array :";
       for(i=0;i<s1;i++)
            {
	      cout<<"element --> "<<i<<" ";
	      cin>>arr1[i];
	    }


        cout<<"Input the number of elements to be stored in the second array :";
        cin>>s2;
   
        cout<<"Input "<<s2<<" elements in the array :";
       for(i=0;i<s2;i++)
            {
	        cout<<"element --> "<<i<<" ";
	        cin>>arr2[i];
	    }

    /* size of merged array is size of first array and  size of second array */
    s3 = s1 + s2;
/*----------------- insert in the third array------------------------------------*/
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }
/*----------------- sort the array in decending order ---------------------------*/
   for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-1;k++)
             {
         
                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }  
              }
         }                      

/*--------------- Prints the merged array ------------------------------------*/
    cout<<"The merged array in decending order is :"<<endl;
    for(i=0; i<s3; i++)
    {
        cout<<arr3[i]<<"  ";
    }
	cout<<endl;
}
