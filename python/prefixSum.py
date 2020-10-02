def prefixSum(arr,n):
  for i in range(1,n):
    arr[i]+=arr[i-1]

arr=[1,2,3,4,5]
prefixSum(arr,5)
print(*arr)
