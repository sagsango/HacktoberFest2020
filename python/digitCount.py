def countDigit(n):
  d = 0
  while( n > 0 ):
    d += 1
    n //= 10
  return d
n = int(input())
print( countDigit(n) )
