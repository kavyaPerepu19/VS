#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    { 
        for(int j=i;j<sizeof(arr)/sizeof(arr[0])-i+1;j++)
        {   
            for(int k=i;k<sizeof(arr)/sizeof(arr[0])-j+1;k++)
                cout<<arr[k] <<" ";
            cout<<endl;
        }
    }
    return 0;
}