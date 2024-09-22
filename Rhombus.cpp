

#include <iostream>
using namespace std;
main(){
    int n;
    cout<<" Enter No. of lines you want to draw a Rhombus:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1; j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
