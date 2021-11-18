#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> books, int n, int m, int max_pages)
{
    int st = 1;
    int curr_pages = 0;
    for(int i = 0; i < n; i++)
    {
        curr_pages += books[i];

        if(curr_pages > max_pages)
            st++, curr_pages = books[i];
        
        if(st > m)
            return false;
    }
    return true;
}

int findPages(vector<int> books, int n, int m)
{
    int sum, max_pages = INT_MIN, res = -1;;
    for(int el : books)
        sum += el, max_pages = max(max_pages, el);

    int start = max_pages, end = sum;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(isValid(books, n, m, mid))
            res = mid, end = mid - 1;
        
        else
            start = mid + 1;
    }
    return res;
}

int main()
{
    vector<int> books = {12, 34, 67, 90};
    int m = 2, n = books.size();
    cout << findPages(books, n, m) << endl;
}