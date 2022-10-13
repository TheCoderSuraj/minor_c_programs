
def find_prime(max):
    count = 2
    prime = [False, False, True, True]

    for i in range(2, max):
        prime.append(1)

    while count < max:
        
        if prime[count]:
            for i in range(count * count, max + 1, count):
                prime[i] = False
        count += 1
        # print(f"count is {count}")
    
    len = 0
    for i in range(0, max):
        if(prime[i]):
            # print(f"\t {i}")
            len += 1
    
    print(f"Total prime numbers are {len}");


try: 
    max = int(input("Enter max number: "))
    if(max < 2000000000):
        find_prime(max)
    else:
        print("Sorry... Max limit is 2 Billion only...")
except:
    print("error occurred")
