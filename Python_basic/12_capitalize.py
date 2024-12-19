def capitalize_name(s):
    result = ""
    capitalize_next = True  
    
    for char in s:
        if char == " ":  
            result += char
            capitalize_next = True
        elif char.isalpha() and capitalize_next:  
            result += char.upper()
            capitalize_next = False
        else:
            result += char  

    return result

# Input
full_name = input("Enter full name: ")

# Output
print(capitalize_name(full_name))
