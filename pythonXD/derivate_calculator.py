def get_terms(pol):
    term=""
    terms=[]
    for i  in range(len(pol)):
        if not pol[i] == " ": term=term+pol[i]
        if pol[i] == " " or i  == (len(pol)-1): 
            terms.append(term)
            term=""
    return terms

def derivate(terms):
    derivates=[]
    for term in terms:
        coef=int(term[0])
        exp=int(term[3])

        new_coef=coef*exp
        new_exp=exp-1

        derivate_term=f"{new_coef}x^{new_exp}"
        derivates.append(derivate_term)
    return derivates


def main():
    pol=input("Please enter your polinom in regular algebraic notation:\n")
    terms=get_terms(pol)
    derivates=derivate(terms)
    print(derivates)

if __name__ == "__main__":
    main()
