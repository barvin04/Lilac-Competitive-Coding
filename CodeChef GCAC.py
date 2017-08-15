#codechef aug17 gcac

T = input()#test cases

while (T): #10^1
    candidates_n = raw_input()
    candidates_n = candidates_n.split()
    companies_m = int(candidates_n[1])
    candidates_n = int(candidates_n[0])
    first_candiSelect = second_sum =0
    #third_compy_Select = [0]*companies_m
    candidates_ar = [None]*candidates_n

    inputt =raw_input() #all candi's min sal demand in a line
    inputt = inputt.split()
    for x in range(candidates_n): #10^3
        candidates_ar[x] = int(inputt[x])#candi's min sal demand
    
    companies_ar= [[0 for x in range(2)] for y in range(companies_m)]
    companies_arr= [[0 for x in range(2)] for y in range(companies_m)]

    for y in range(companies_m): #10^3
        inputt = raw_input() #compi's sal offer and limit_of_candi
        inputt = inputt.split()
        companies_ar[y][0] = int(inputt[0])  #sal
        companies_arr[y][0] = int(inputt[0])
        companies_ar[y][1] = int(inputt[1])   #candi_num
        companies_arr[y][1] = int(inputt[1])
    
    #matrix = [[0 for x in range(companies_m)] for y in range(candidates_n)]
    ''''''
    str_arr = [None]*candidates_n
    for x in range(candidates_n): #10^6
        inputt = raw_input()
        str_arr[x] = inputt
        #for y in range(companies_m):
            #matrix[x][y] = int(inputt[y]) #matrix[candi][compy]
        
        
    for x in range(candidates_n): #10^6
        compy_max=0
        compy_select=None

        for y in range(companies_m):
            if (int(str_arr[x][y])==1 and candidates_ar[x]<=companies_ar[y][0] and companies_ar[y][1]>0):
                if (companies_ar[y][0] >compy_max): #this one sucked me up
                    compy_max = companies_ar[y][0] 
                    compy_select = y
                    
        if (compy_select != None): #selec the candi #
                first_candiSelect += 1
                second_sum += companies_ar[compy_select][0]
                #third_compy_Select[compy_select] += 1
                companies_ar[compy_select][1] -= 1
                
    third_ans =0
    for s in range(companies_m):#10^3
        if (companies_ar[s][1] == companies_arr[s][1]):
            third_ans += 1
            
    print first_candiSelect, second_sum, third_ans
    T-=1             

                
                
                
