def main():
    lines=int(input("Enter the number of lines: "))
    line_lens=[i+1 for i in range(lines)]
    for line_len in line_lens:
        line=["*" for i in range(line_len)]
        for symbol in line: print (symbol, end=" ")
        print("\n")
    pass

if __name__=="__main__":
    main()
