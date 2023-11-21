def main():
    for i in range(1, 1000001):
        teiler(i)




def teiler(n):
    teilender = 0
    for i in range(1, n+1):
        if (n % i == 0):
            teilender += 1
    print(teilender)





main()