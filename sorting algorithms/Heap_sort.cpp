#include<bits/stdc++.h>
using namespace std;
/*
Space - O(log(n)) for recursive calls
aux. space - O(1)
Time - O(nlog(n))
*/
void heapify(vector<int> &v, int N, int i)
{
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N and v[l] > v[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < N and v[r] > v[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(v[i], v[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(v, N, largest);
    }
}
 
// Main function to do heap sort
void HS(vector<int> &v)
{
    int N = v.size();
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(v, N, i);
 
    // One by one extract an element from heap
    for (int i = N - 1; i > 0; i--) {
 
        // Move current root to en2d
        swap(v[0], v[i]);
 
        // call max heapify on the reduced heap
        heapify(v, i, 0);
    }
}
int main()
{
    vector<int> v = {5, 34, 65, 3, 57, 31, 56, 9, 1};
    HS(v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}