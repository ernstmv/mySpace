from random import randint as rd
import numpy as np
import time

def quickSort(my_array):
    
    if len(my_array)>=1:

        pivot=my_array[0]
        minor=[]
        mayor=[]
        equal=[]
        for element in my_array:
            if element<pivot: minor.append(element)
            if element==pivot: equal.append(element)
            if element>pivot: mayor.append(element)
        minor=quickSort(minor)
        mayor=quickSort(mayor)
        my_array=minor+equal+mayor

    return my_array

def main():

    my_array=[rd(0,100) for i in range(100)]
    my_array=np.array(my_array)

    start_time=time.time()
    sorted_array=quickSort(my_array)
    seconds=time.time()-start_time

    print(f"Size={len(sorted_array)} ")
    print(f"\nSorted in {seconds} seconds")

if __name__=="__main__":
    main()
