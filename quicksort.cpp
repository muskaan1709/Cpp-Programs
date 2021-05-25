#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int lb,int ub)
{
   int pivot=a[lb];
   int start=lb;
   int  end=ub;
   while(start<end)
   {
       while(a[start]<=pivot)
       {
           start++;
       }
       while(a[end]>pivot)
       {
           end--;
       }
       if(start<end)
       swap(a[start],a[end]);
       
   }
   swap(a[lb],a[end]);
   return end;
}
void quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc;
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);

    }
}
void print(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[]={7,6,10,5,9,2,1,15,7};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"After quicksort"<<endl;
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}
