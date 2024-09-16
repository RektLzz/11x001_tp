import os

# Directory names
image_directory = 'tp0\part4\images'
test_directory = 'tp0\part4\\test'

# Create test folder to order the images
if (not os.path.exists(test_directory)):
    os.makedirs(test_directory)

for x in os.listdir(image_directory):
    
    # Split the file names
    file_name = os.path.basename(x)
    split_file_name = file_name.split("_")

    # Create a new directory if it doesn't exist already
    new_dir = test_directory + "/" + split_file_name[1] + "/" + split_file_name[3]

    if not os.path.exists(new_dir):
        os.makedirs(new_dir)

    # Rename the file extension to jpg and move it to the new directory (using rename moves it automatically to the new directory you put it in)
    new_file_name = file_name.split(".")[0] + ".jpg"
    os.rename(image_directory + "/" + file_name, new_dir + "/" + new_file_name)