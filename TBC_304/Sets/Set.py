# {} unordered and immutable, but we can add or remove values from it, no duplicate allowed

fruit={"apple","orange","banana","grapes"}

#print(fruit[0]) it will not work since the elements are unordered

# but we can add or remove elements

fruit.add("pineapple")

fruit.remove("pineapple")

fruit.pop()
#fruit.clear()

for f in fruit:
    print(f)