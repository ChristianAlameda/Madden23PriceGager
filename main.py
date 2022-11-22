a = []
def aquire_overalls(NumberOfOveralls):
    # want to make a for loop that will give user to say how many numbers he wants

    for i in range(NumberOfOveralls):
        
        
        
        price_for_Overall = int(input("Enter price for overall " + str(i+80)+": "))
        a.append(price_for_Overall)
        Overall = i + 80
        print("Overall " + str(Overall)+"'s price after tax: " + str(a[i]*.90) )
       # print("Overall " + str(Overall) +"'s price to break even from tax: "+ str(a[i]/.90))
        print("-------------------------------------------------------")
    print("All done! ")
    
    
NumberOfOveralls = int(input("Number of overalls you want: "))
aquire_overalls(NumberOfOveralls)
