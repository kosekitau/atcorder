n = int(input())

ans = dict()

for i in range(n):
    s=input()
    if s not in ans:
        ans[s]=1
    else:
        ans[s]+=1

print(max(ans, key=ans.get))
