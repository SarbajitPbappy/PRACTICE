def input_single_person_info(template):
    person_info = template.copy()  # Use a copy of the template for each person
    print("\nEnter information for the person. Press enter directly to skip any detail.")
    for key in template.keys():
        value = input(f"Enter Your {key}:").strip()
        if value:  # Only update if the user provided a value
            person_info[key] = value
    return person_info

def input_all_persons_info():
    persons = []  # List to store all persons' information
    n = int(input("Enter the number of persons: "))

    # Define a template for the person's information
    person_info_template = {
        'name': '',
        'father name': '',
        'mother name': '',
        'address': '',
    }

    for _ in range(n):
        person_info = input_single_person_info(person_info_template)
        persons.append(person_info)

    return persons

# Function to display the collected information
def display_persons_info(persons):
    for person in persons:
        print("\nPerson Information:")
        # for key, value in person.items():
        #     print(f"{key}: {value}")
        print(person)
        print("-" * 20)  # Just a separator for readability

persons_info = input_all_persons_info()
display_persons_info(persons_info)
