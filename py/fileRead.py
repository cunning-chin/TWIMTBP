readFile = open("file.txt", "r")
line = []
for lines in readFile:
    line.append(lines.strip(", ", 8))

for i in range(len(line)):
    print("L#",i,line[i])
