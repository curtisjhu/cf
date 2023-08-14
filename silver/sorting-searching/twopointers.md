# Two Pointers Method

Iterating two pointers across array until a pair of indices satisfy some condition.
Each move a maximum of N times so the algorithm is O(N)

## Subarray Sum

Find a subarray sum that equals 8. Return true or false.

Have a left and right pointer. Move left or right when needed. Add and subtract from running sum.


## 2SUM

Given a sorted array, find two indices such that their values sum to x. Else return -1 for both.

Two pointers from both ends moving inwards.
If sum < x, then move left pointer up. If sum > x, move right pointer down.

## 3SUM

Given array, find three indices such that their values sum to x. Else return -1.

## Merging Two Sorted Arrays

Two pointers incrementing both arrays, but comparing with each other as they go.

