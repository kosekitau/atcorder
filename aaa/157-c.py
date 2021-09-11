n, m = tuple(input().split())
n = int(n)
m = int(m)

S = []
C = []
for _ in range(m):
    s, c = tuple(input().split())
    S.append(int(s))
    C.append(c)

lm = 10**n
ans=-1

for i in range(10**n):
    num = str(i).rjust(n, 'x')
    f = True
    for j in range(m):
        if num[S[j]-1] != C[j]:
            f = False
    if f and len(str(i))==n:
        ans=i
        break

print(ans)