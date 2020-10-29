def digitSum(n):
    s = 0
    while( n > 0 ):
      s += n % 10;
      m //= 10;
    return s;
n = int(input())
digitSum(n)
