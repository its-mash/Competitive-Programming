import random
import time
from threading import Thread


def sleeper(i):
    a = random.randint(1, 10)
    print("Thread %d sleeps for  " % i, a, " seconds")
    time.sleep(a) 	#wait()
    print("Thread %d woke up after " % i, a, " seconds")

for i in range(10):
    t = Thread(target=sleeper, args=(i,))
    t.start()		#signal()
