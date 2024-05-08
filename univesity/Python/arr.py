a=[]
for _ in range(5):
    a.append(float(input()))

for i, v in enumerate(a):
    if v <= 10:
        print(f"A[{i}] = {v}")
