n, a, b = int(input().split())

ans = 0
c = n//(a+b)
ans += c + min(c-n, 0)
print(ans)