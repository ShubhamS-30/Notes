#include<bits/stdc++.h>
using namespace std;
/*
Space - O(n)
Time - O(nlog(n))
*/
void merge(int a[], int l[], int r[], int nl, int nr)
{
	int i, j, k;
	i = j = k = 0;
	while (i < nl && j < nr)
	{
		if (l[i] <= r[j])
		{
			a[k] = l[i];
			i++;
		}
		else
		{
			a[k] = r[j];
			j++;
		}
		k++;
	}
	while (i < nl)
	{
		a[k] = l[i];
		i++;
		k++;
	}
	while (j < nr)
	{
		a[k] = r[j];
		j++;
		k++;
	}
}
void MergeSort(int a[], int na)
{
	int mid = na / 2;
	int nl = mid;
	int nr = na - mid;
	int l[nl];
	int r[nr], i;
	if (na >= 2)
	{
		for (i = 0; i < mid; i++)
		{
			l[i] = a[i];
		}
		for (i = mid; i < na; i++)
		{
			r[i - mid] = a[i];
		}
		MergeSort(l, nl);
		MergeSort(r, nr);
		merge(a, l, r, nl, nr);
	}
}
int main()
{
    int n = 9;
    int v[] = {5,34,65,3,57,31,56,9,1};
    MergeSort(v,n);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}