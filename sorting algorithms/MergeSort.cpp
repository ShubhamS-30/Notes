#include<bits/stdc++.h>
using namespace std;
/*
Space - O(n)
Time - O(nlog(n))
*/
void merge(int *a,int low,int mid,int high)
{
	int left,right;
    left = low;
    right = mid+1;
    int temp[high - low + 1];
    int id = 0;
    while(left <= mid && right <= high)
    {
        if(a[left] < a[right])
        {
            temp[id] = a[left];
            left++;
            id++;
        }
        else 
        {
            temp[id] = a[right];
            right++;
            id++;
        }
    }
    while(left<=mid)
    {
        temp[id] = a[left];
        left++;
        id++;
    }
    while(right<=high)
    {
        temp[id] = a[right];
        right++;
        id++;
    }
    for(int i = low;i<=high;i++)
    a[i] = temp[i - low];
}
void MergeSort(int *a, int l,int r)
{
	if(l<r)
    {
        int m = (l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    int n = 9;
    int v[] = {5,34,65,3,57,31,56,9,1};
    MergeSort(v,0,n-1);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}