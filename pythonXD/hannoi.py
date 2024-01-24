import time


def move(lmt, start, target):
    size = len(start)
    for n in range(size):
        if start[n] == lmt:
            start[n] = 0
            break

    for m in range(size):
        if target[m] == 0:
            target[m] = lmt
            break

    print(f'{lmt}[{n}]->[{m}]')


def set_interval(value, start, aux, targ):
    if value == 1: move(value, start, targ)
    else:
        set_interval((value-1), start, targ, aux)
        move(value, start, targ)
        set_interval((value-1), aux, start, targ)


def main():
    size = int(input("Please enter the number of plates:\n"))
    start = [(size - n) for n in range(size)]
    temp = [0] * size
    targ = [0] * size
    print(f'\nBeggining:\n{start}\n{temp}\n{targ}')
    begin = time.time()
    set_interval(size, start, temp, targ)
    end = time.time()
    total = begin - end
    print(f"\nFinally:\n{start}\n{temp}\n{targ}")
    print(f"\nTotal time: {total}")


if __name__ == "__main__":
    main()
