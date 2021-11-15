#include <bits/stdc++.h>

using namespace std;

/*
Things to keep in mind :-
1. There are two ways to rotate an array 
   -left rotate
   -right rotate

2. If our array is sorted then the position (index) of minimum element will be 0 
3. If we right rotate our array, then what will be position of minimum element ? 
   A = {2, 3, 6, 12, 15, 18}    position of minimum element = 0
   right rotate by 1 -: {18, 2, 3, 6, 12, 15}   position of minimum element = 1
   right rotate by 2 -: {15, 18, 2, 3, 6, 12}   position of minimum element = 2
   right rotate by 3 -: {12, 15, 18, 2, 3, 6}   position of minimum element = 3
   right rotate by 4 -: {6, 12, 15, 18, 2, 3}   position of minimum element = 4
   right rotate by 5 -: {3, 6, 12, 15, 18, 2}   position of minimum element = 5
   right rotate by 6 -: {2, 3, 6, 12, 15, 18}   position of minimum element = 0
   right rotate by 7 -: {18, 2, 3, 6, 12, 15}   position of minimum element = 1

    from this we can observe if we right rotate any sorted array k times, the position of minimum element will always be k % n (n : size of array)

4. If we left rotate our array,. then what will be position of minimum element ? 
    
   A = {2, 3, 6, 12, 15, 18}   position of minimum element = 0
   left rotate by 1 -: {3, 6, 12, 15, 18, 2}    position of minimum element = 5
   left rotate by 2 -: {6, 12, 15, 18, 2, 3}    position of minimum element = 4
   left rotate by 3 -: {12, 15, 18, 2, 3, 6}    position of minimum element = 3
   left rotate by 4 -: {15, 18, 2, 3, 6, 12}    position of minimum element = 2 
   left rotate by 5 -: {18, 2, 3, 6, 12, 15}    position of minimum element = 1
   left rotate by 6 -: {2, 3, 6, 12, 15, 18}    position of minimum element = 0
   left rotate by 7 -: {3, 6, 12, 15, 18, 2}    position of minimum element = 5

    from this we can observe if we left rotate any sorted array k times, the position of minimum element will always be 

        position of minimum element = {(n - k), when k <= n}    where n : size of array
        position of minimum element = {n - (|n - k|), when k > n}   where n : size of array 
*/

int main()
{
}