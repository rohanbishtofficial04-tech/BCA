# a collection of {key:value} pairs
# ordered and changeable, no duplicates values are allowed

capitals = {"USA":"Washington DC.","India":"New Delhi","Egypt":"Cairo","China":"Beijing","Russia":"Moscow"}


print(capitals.get("USA"))
print(capitals.get("India"))
print(capitals.get("Egypt"))

if(capitals.get("USA")):
    print("Capital Exist")
else:
    print("Capital doesn't exist")

capitals.update({"Germany":"Berlin"})
capitals.update({"USA":"Detroit"})

capitals.popitem() # pop the latest value
capitals.clear()

key=capitals.keys()
print(key)

#or

for key in capitals.keys():
    print(key)

value =capitals.values()
print(value)

#or

for value in capitals.values():
    print(value)


print(capitals)