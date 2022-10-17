"""
Bubble sort / selction sort
CHINMAY KOTKAR
AI-DS SE B 29 
13 oct 2022

Write a Python program to store first year percentage of students in array. Write function for
sorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores.
"""

def bubblesort(list):
	n = len(list)
	for i in range(n-1):
		for j in range(n-1-i):
			if list[j] > list[j+1]:
				temp = list[j]
				list[j] = list[j+1]
				list[j+1] = temp
	return list

def selectionsort(list):
	h = len(list)
	for i in range(0, h-1):
		min_ind = i
		for j in range(i+1, h):
			if list[j] < list[min_ind]:
				min_ind = j
				if min_ind != i:
					temp = list[min_ind]
					list[min_ind] = list[i]
					list[i] = temp
	return list
def main():
	numbers=[]
	
	print("Enter 1 for bubble sorting\n"
		"Enter 2 for Selection sort\n")
	case= int(input("Enter your choice code: "))

	if case == 1:
		no_students =int(input("enter the number of students: "))
		for i in range(no_students):
			numbers.append(int(input("Enter the value: ")))
		print("unsorted list: ",numbers)
		print("Sorted list: ",bubblesort(numbers))
		top5list=[]
		numberss = bubblesort(numbers)
		k = len(numberss)
		for i in range(1,6):
			top5list.append(numberss[k-i])
		print("Top Five scores: ",top5list)
	
	if case == 2:
		no_students =int(input("enter the number of students: "))
		for i in range(no_students):
			numbers.append(int(input("Enter the value: ")))
		print("unsorted list: ",numbers)
		print("Sorted list: ",bubblesort(numbers))
		top5list=[]
		numberss = bubblesort(numbers)
		k = len(numberss)
		for i in range(1,6):
			top5list.append(numberss[k-i])
		print("Top Five scores: ",top5list)
		

main()

	                    
	

