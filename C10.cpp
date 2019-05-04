#include <iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    if(n==1)
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i>=j)
            cout<<"*";
            else 
                cout<<"-";
        }
       
        cout<<"\n";
    }
    else if(n==2)
    for(int i=1;i<=7;i++){
         for(int j=1;j<=7;j++){
            if(i+j<=8)
            cout<<"*";
            else 
                cout<<"-";
        }
        
        cout<<"\n";
    }
    else if(n==3)
    for(int i=1;i<=7;i++){
         for(int j=7;j>0;j--){
            if(i>=j)
            cout<<"*";
            else if(i<=j)
                cout<<"-";
        }
        
        cout<<"\n";
    }
    else if(n==4)
    for(int i=1;i<=7;i++){
         for(int j=1;j<=7;j++){
            if(i<=j)
            cout<<"*";
            else if(i>=j)
                cout<<"-";
        }
        
        cout<<"\n";
    }
}
