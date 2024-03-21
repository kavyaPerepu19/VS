#include<iostream>
using namespace std;
int main()
{   int curlen=0;
    int maxlen=0;
    int diff=0;
    
    int arr[]={10,7,2,4,6,4,8,10,11,9};
    int prev=arr[0]-arr[1];
    for (int i=1;i<sizeof(arr)/sizeof(arr[0]);i++)
    {   
        diff=arr[i-1]-arr[i];
        if(diff==prev)
        {
            curlen++;
            maxlen= max(maxlen,curlen);

        }
        else{
            
            prev=diff;
            curlen=0;
            i=i-1;


        }
       

    }
    cout<<maxlen;
}
