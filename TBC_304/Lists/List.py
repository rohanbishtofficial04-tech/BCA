# [] ordered and mutable, can insert duplicate values
fruit=["apple","orange","banana","grapes"]
print(fruit)
print(fruit[0])
print(fruit[1])

print(len(fruit))

print("apple" in fruit)

print("pineapple" in fruit)

fruit[0]="pineapple"

fruit.append("papaya")

fruit.remove("pineapple")

fruit.insert(1,"guava")

fruit.sort()

fruit.reverse()

fruit.clear()

print(fruit.index("banana"))

print(fruit.count("banana"))

print("\n")

for i in range(len(fruit)):
    print(fruit[i])

print("\n")

for f in fruit:
    print(f)