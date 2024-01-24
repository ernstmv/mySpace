from random import randint as rd


class River:
    def __init__(self, size):
        self.spaces = [0] * size
        self.size = size
        self.k = -1

    def __setitem__(self, index, item):
        self.spaces[index] = item

    def __getitem__(self, n):
        return self.spaces[n]

    def __str__(self):
        str_spaces = []
        for element in self.spaces:
            if element is None: str_spaces.append('None')
            else: str_spaces.append(element.spc)
        return str(str_spaces)

    def __next__(self):
        self.k += 1
        if self.k < len(self.spaces):
            return (self.spaces[self.k])
        else:
            raise StopIteration()

    def __iter__(self):
        return self

    def show(self):
        print(str(self))

    def move(self, element):
        self.spaces[element.next_loc] = element
        self.spaces[element.loc] = None
        element.loc = element.next_loc

    def kill(self, element):
        self.spaces[element.loc] = None


class Animal:

    def __init__(self, loc, spc, gender, strenght):
        self.loc = loc
        self.next_loc = loc
        self.spc = spc
        self.gender = gender
        self.strenght = strenght

    def __eq__(self, other):
        return self.spc == other.spc

    def nxt_loc(self, size):
        mv = rd(-1, 1)
        self.next_loc += mv
        if self.next_loc == -1: self.next_loc = 0
        elif self.next_loc >= (size - 1):self.next_loc = size - 1 

    def status(self):
        print(f'{self.spc}|{self.strenght}|{self.gender}|{self.loc}->{self.next_loc}')


def main():
    size = int(input("Please enter the number of spaces in the river:\n"))
    river = River(size)
    for i in range(size):
        spc = rd(-1, 1)
        gender = rd(0, 1)
        strenght = rd(10, 100)
        if spc == -1: river[i] = Animal(i, 'Bear', bool(gender), strenght)
        if spc == 0: river[i] = None
        if spc == 1: river[i] = Animal(i, 'Fish', bool(gender), strenght)

    river.show()
    cicles = int(input("Please enter the number of cicles:\n"))
    for _ in range(cicles):
        for element in river:
            if element is None: continue
            element.nxt_loc(size)
            element.status()
        river.k = -1

        for element in river:
            if element is None: continue
            next_element = river[element.next_loc]
            if next_element is None:
                river.move(element)
            else:
                if element == next_element: 
                    if element.gender == next_element.gender: 
                        if element.strenght > next_element.strenght:
                            river.move(element)
                        elif element.strenght ==  next_element.strenght:
                            element.next_loc = element.loc
                        else:
                            river.kill(element)
                    else:
                        try:
                            empty = [i for i in range(size) if river[i] is None]
                            new_loc = empty[rd(0,(len(empty) - 1))]
                            river[new_loc] = Animal(new_loc, element.spc, bool(rd(0, 1)), rd(10, 100))
                            print(f'A new baby {element.spc} has born, its position is {new_loc}')
                        except Exception:
                            print("OVERPOPULATION")
                        element.next_loc = element.loc
                else:
                    if element.spc == 'Bear':
                        river.move(element)
                    else:
                        river.kill(element)
        river.show()
        river.k = -1


if __name__ == '__main__':
    main()
