## mid determine removing overflow

when we determine mid using mid=(first+last)/2 then there will come overflow. so for removing overflow we can use new technique, mid = start + (end-start)/2

## we can apply binary search in a Rotated sorted array

In rotated sorted total array aren't sorted but either first half or second half are sorted here. As a result we can apply binary search only the sorted part of the array.
