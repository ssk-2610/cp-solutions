n=int(input())
a=list(map(int,input().split()))
a.sort()
print(max(2*a[-1],sum(a)))