import time

fwcopy = open("GB_copy.txt", 'w')
t = time.time()
for j in range(5):
    fw = open("1GB.txt", 'r')
    for i in fw:
        fwcopy.write(i)
    fw.close()
    print((time.time() - t))
