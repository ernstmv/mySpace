from random import randint as rd
class Person:
    day=0
    month=0

    def __init__(self, day, month):
        self.day=day
        self.month=month

def main():
    n=int(input("Please enter the number of participants:\n"))
    persons=[Person(rd(1,31), rd(1,12)) for i in range(n)]
    for person in persons:
        count=0
        for person2 in persons:
            if person.day == person2.day and person.month == person2.month: count+=1
        if count>1: print("At least two persons have the same birthday")

if __name__=="__main__":
    main()
