#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int arr[3][3]={{1,0,0},{0,3,0},{0,6,0}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            if(arr[i][j]!=0)
            {
                count++;
            }

        }
    }
    cout<<count<<endl;
    int temp=0;
    int sparse[count][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(arr[i][j]!=0)
            {
                sparse[temp][0]=arr[i][j];
                sparse[temp][1]=i;
                sparse[temp][2]=j;
                temp++;

            }
        }

    }
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sparse[i][j]<<" ";
        }
        cout<<endl;
    }

}