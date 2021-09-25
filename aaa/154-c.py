n = int(input())
N = set()
A = input().split()
for a in A:
    N.add(int(a))


if len(N) == n:
    print("YES")
else:
    print("NO")