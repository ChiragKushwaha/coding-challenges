allStudents = {'CS': [], 'IT': [], 'ECE': [], 'EEE': [], 'Mech': []}


def print_group_students(branch):
    for i in range(len(branch['CS'])):
        print(f"Group {i+1}:{branch['CS'][i]},{branch['IT'][i]},{branch['ECE'][i]},{branch['EEE'][i]},{branch['Mech'][i]}")


if __name__ == "__main__":
    numberOfStudents = int(input("Enter number of Students :"))
    branches = ('CS', 'IT', 'ECE', 'EEE', 'Mech')
    for j in range(len(branches)):
        for i in range(numberOfStudents):
            name = input(f"{branches[j]} branch student {i+1} name : ")
            allStudents[branches[j]].append(name)

    print_group_students(allStudents)