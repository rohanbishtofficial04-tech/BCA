file=open("hello.txt","r")
file.close()
#write
file=open("hello.txt","w")
file.write("Hello World\n")
file.close()
#writelines
lines=["Line1\n","Line2\n","Line3\n"]
file=open("hello.txt","w")
file.writelines(lines)
file.close()
#append
file=open("hello.txt","a")
file.write("Hello Again")
file.close()
#read
with open("hello.txt","r") as file:
    lines=file.readlines()   
content="".join(lines)
first_line=lines[0]
second_line=lines[1]
print(content)
print(first_line,second_line)