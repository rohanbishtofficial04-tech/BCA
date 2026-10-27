# () ordered and immutable, can insert duplicate values and faster than list
fruit=("apple","orange","banana","grapes")

print(len(fruit))

print("apple" in fruit)

print("pineapple" in fruit)

fruit[0]="pineapple"

fruit.sort()

print(fruit.index("banana"))

Pprint(fruit.count("banana"))

for f in fruit:
    print(f)