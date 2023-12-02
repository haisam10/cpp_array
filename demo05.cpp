#include <iostream>
using namespace std;
int main()
{
   int arr[100];
   int n,ctr=0;
   int i, j;
        cout<<"Input the number of elements to be stored in the array :";
        cin>>n;
        cout<<"Input "<<n<<" elements in the array :"<<endl;
      for(i=0;i<n;i++)
       {
            cout<<"element --> "<<i<<": ";
            cin>>arr[i];
            }
          for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
       if (arr[i] == arr[j]) {
         ctr++;
         break;
   }
   }
 }
 cout<<"Total number of duplicate elements found in the array: "<<ctr<<endl;
 return 0;
}
