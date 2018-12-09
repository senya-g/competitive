max, n = map(int, input().split())
count = [1, 1] + [0] * (1 + n - 2)

for i in range(2, max + 1):
    count[i] = count[i - 1] << i

for i in range(max + 1, n + 1):
    count[i] = (count[i - 1] << 1) - count[i - 1 - max]

print(count[n])
