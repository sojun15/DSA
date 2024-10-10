# var = open("F:/DSA/python/file.txt","r")

def read_file_skip_comments(filename):
    with open(filename, 'r') as file:
        skip_line = False
        for line in file:
            skip_line = False
            for char in line:
                if char == '#':
                    skip_line = True
                    break  # Skip the entire line if we find a '#'
                if not skip_line:
                    print(char, end='')  # Print the character if not skipping the line
            if skip_line:
                continue  # Move to the next line when skipping

# Usage
filename = 'file.txt'  # Replace with your file path
read_file_skip_comments(filename)
