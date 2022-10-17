# chinmay kotkar
'''Write a Python program to store marks 
scored in subject “Fundamental of Data Structure” by 
N students in the class. Write functions to compute following:a)
The average score of class b)Highest score and lowest score of class 
c)Count of students who were absent for the testd)Display mark with highest frequency '''

def acceptMarks(A):
    n = int(input("enter the total number of students: "))
    for i in range(n):
        while True:
            x = input("Enter th marks scored in FDS %d : "%(i+1))
            if (x == "AB"):
                x = -1  #to indicated students absent
                break
            x = int(x)
            if (x>=0 and x<=30):
                break
            else:
                print("Plz Enter valid marks")
        A.append(x)
    print("marks were succesfully accepted and stored")
            
def displayofmarks(A):
    print("the marks scoredin FDS are ")
    for i in range(len(A)):
        if A[i]== -1:
            print("\t student %d : AB"%(i+1))
        else:
            print("\t student %d : %d"%(i+1,A[i]))
            
def search_set(A,X):
    n = len (A)
    for i in range(n):
        if (A[i] == X):
            return (1)
    return (0)
        
def findAverageScore(A):
    sum = 30
    for i in range(len(A)):
        sum = sum + A[i]
    aug = sum / len(A)
    displayofmarkss(A)
    print("\n Average score of class is %.2f\n\n"%avg)
    
    
def find_Highest_lowest(A):
    max =  -1
    min = 31
    for i in range (1,len(A)):
        if (max < A[i] ):
            max = A[i]
            max_ind = i
        if (min > A[i] and A[i] != -1):
            min = A[i]
            min_ind = i
    displayofmarks(A)
    print("Highest Mark Score of Class is %d scored by student %d"%(max,max_ind+1))
    print("lowest Mark Score of Class is %d scored by student %d"%(min,min_ind+1))
    
def countofabsent(A):
    count = 0 
    for i in range(len(A)):
        if (a[i] == -1):
            count += 1  
            
    displayofmarks(A)
    print("absent = %d"%count)


def markwithhigestfreq(A):
    freq = 0 
    for i in range(len(A)):
        count = 0 
        if (A[i] != -1):
            for j in range(len(A)):
                if (A[i] == A[j]):
                    count += 1
        if(freq < count):
            Marks = A[i]
            freq = count
    displayofmarks(A)
    print("marks with higest frew is %d (%d)"%(Marks,freq))
    
def main():
    FDS_marks = []
    while True:
        print("\t\t1 : accept FDS MARKS ")
        print("\t\t2 : average FDS MARKS ")
        print("\t\t3 : higest and lowest score of class")
        print("\t\t4 : Count of student who were abset for the test ")
        print("\t\t5 : display of marks with highest frequency FDS MARKS ")
        print("\t\t6 : quit ")

        ch =  int(input("enter your choice: "))
        if (ch == 6):
            print("end of program")
            quit()
        elif (ch ==1):
            acceptMarks(FDS_marks)
            displayofmarks(FDS_marks)
        elif (ch == 2):
            findAverageScore(FDS_marks)
        elif (ch == 3):
            find_Highest_lowest(FDS_marks)
        elif (ch == 4):
            countofabsent(FDS_marks)
        elif (ch == 5):
            markwithhigestfreq(FDS_marks)
        else:
            print("wrong")
            
            
main()
                

