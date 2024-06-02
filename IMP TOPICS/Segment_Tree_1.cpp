#include <bits/stdc++.h>
using namespace std;
class SegmentTree
{
public:
    vector<int> seg;

    SegmentTree(int n)
    {
        seg.resize(4 * n + 1);
    }

    /**
     * @brief The Build function is used to construct a segment tree.
     *        A segment tree is a tree data structure used for efficient range minimum/maximum queries on an array.
     *
     * @param idx The index of the current node in the segment tree.
     * @param low The starting index of the current segment in the array.
     * @param high The ending index of the current segment in the array.
     * @param arr The input array.
     * @param seg The segment tree.
     */
    void Build(int idx, int low, int high, vector<int> &arr)
    {
        // Base case: If the current segment has only one element, assign that element to the current node.
        if (low == high)
        {
            seg[idx] = arr[low];
            return;
        }

        // Calculate the midpoint of the current segment.
        int mid = (low + high) / 2;

        // Recursively build the left child of the current node.
        Build(2 * idx + 1, low, mid, arr);

        // Recursively build the right child of the current node.
        Build(2 * idx + 2, mid + 1, high, arr);

        // Assign the minimum value between the left and right children to the current node.
        seg[idx] = min(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    /**
     * This function is used to query the minimum value in a given range [l, r]
     * of the segment tree rooted at index idx.
     *
     * @param idx The index of the current node in the segment tree.
     * @param low The starting index of the current segment in the array.
     * @param high The ending index of the current segment in the array.
     * @param l The left endpoint of the range to query.
     * @param r The right endpoint of the range to query.
     * @param seg The segment tree.
     *
     * @return The minimum value in the range [l, r] of the segment tree.
     */
    int query(int idx, int low, int high, int l, int r)
    {
        // Check if the current segment overlaps with the given range [l, r].
        // If it does, return the value at the current node.
        if (low >= l && high <= r)
        {
            return seg[idx];
        }

        // If there is no overlap between the current segment and the given range,
        // return the maximum value of an int.
        if (low > r || high < l)
        {
            return INT_MAX;
        }

        // If there is partial overlap between the current segment and the given range,
        // recursively query the left and right children of the current node.
        // The midpoint of the current segment is calculated.
        int mid = (low + high) / 2;

        // Recursively query the left child of the current node.
        int left = query(2 * idx + 1, low, mid, l, r);

        // Recursively query the right child of the current node.
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        // Return the minimum value between the left and right children.
        return min(left, right);
    }

    /**
     * @brief The update function is used to update the segment tree at a given position with a new value.
     *
     * @param idx The index of the current node in the segment tree.
     * @param low The starting index of the current segment in the array.
     * @param high The ending index of the current segment in the array.
     * @param pos The position in the array to update.
     * @param val The new value to update the segment tree at the given position with.
     */
    void update(int idx, int low, int high, int pos, int val)
    {
        // Check if the current segment overlaps with the given position.
        if (low == high)
        {
            // If the current segment is a leaf node, update the value at the current node with the new value.
            seg[idx] = val;
            return;
        }

        // Calculate the midpoint of the current segment.
        int mid = (low + high) / 2;

        // Check if the given position is in the left half of the current segment.
        if (pos <= mid)
        {
            // Recursively call the update function on the left child of the current node.
            update(2 * idx + 1, low, mid, pos, val);
        }
        else
        {
            // Recursively call the update function on the right child of the current node.
            update(2 * idx + 2, mid + 1, high, pos, val);
        }

        // Update the value at the current node to be the maximum value between the left and right children.
        seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
    }
};

/// @brief This function is used to test the segment tree. It takes user input for the size of the array and the elements of the array.
/// It then builds the segment tree using the array and the segment tree vector.
/// It takes user input for the number of queries. It then processes each query by calling the query function.
/// The query function returns the maximum value between two positions in the segment tree.
/// The maximum value is then printed to the output.
///
void Test()
{
    // Prompt the user for the size of the array and read the size from the user.
    int n;
    cin >> n;

    // Create vectors to store the array and the segment tree.
    // The array vector will store the elements of the array.
    // The segment tree vector will store the intermediate values of the segment tree.
    vector<int> arr(n);     // Array to store elements.
    vector<int> seg(4 * n); // Segment tree to store intermediate values.

    SegmentTree st(n);
    // Read the elements of the array from the user.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Build the segment tree using the array.
    st.Build(0, 0, n - 1, arr);

    // Prompt the user for the number of queries and read the number of queries from the user.
    int q;
    cin >> q;

    // Process each query.
    while (q--)
    {
        int l, r, type, val, id; 
        cin >> type;             

        // If the query type is 1, read the left and right positions from the user.
        // Call the query function to get the maximum value between the left and right positions.
        if (type == 1)
        {
            cin >> l >> r;
            int maximumValue = st.query(0, 0, n - 1, l, r);
            cout << maximumValue << endl;
        }
        // Update the value in the array at the given index.
        else
        {
            cin >> id >> val;
            st.update(0, 0, n - 1, id, val);
            arr[id] = val;
        }
    }
}
int main()
{
    Test();
    return 0;
}