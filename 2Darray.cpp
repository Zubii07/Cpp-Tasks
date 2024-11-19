// 2d Array

#include <iostream>
#include<climits>
using namespace std;
main(){
   int i,j;
   cout<<" Enter i: "<<endl;
   cin>>i;
   cout<<" Enter j: "<<endl;
   cin>>j;
   int arr[i][j];
   for(int n=0;n<i;n++){
    for(int m=0;m<j;m++){
        cin>>arr[n][m];
    }
   }
   cout<<" matrix is  "<<endl;

for(int n=0;n<i;n++){
    for(int m=0;m<j;m++){
        cout<<arr[n][m]<<" ";
    }
    cout<<endl;
   }


    return 0;
}
