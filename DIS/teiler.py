from sympy import isprime

def main():
    primes = prime_numbers(1000000)
    kleinster_teiler(1, 1000001, primes)
    
def kleinster_teiler(start, end, primes):
    for i in range(start, end):
        for n in primes:
            if(i % n == 0):
                print(n)
                break
    
                
def prime_numbers(len):
    prime = []
    for i in range(len+1):
        if isprime(i):
            prime.append(i)
    return prime

    
main()