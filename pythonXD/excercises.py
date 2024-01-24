def main():
    my_list = [i for i in range(10)]
    i = iter(my_list)
    print (i)
    print(next(i))
    print(next(i))
    print(next(i))
    pass

if __name__ == "__main__":
    main()
