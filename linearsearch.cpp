#include<iostream>
using namespace std;
int linearSearch(int arr[],int size , int target )
{
for(int i=0;i<size;i++)
{
    if(arr[i]==target)
    {
        return i;
    }

}
return -1; 
}


int main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100};
int size=10;
int target=100;
cout<<"target value is at index "<<linearSearch(arr,size,target)<<endl;






return 0;
}