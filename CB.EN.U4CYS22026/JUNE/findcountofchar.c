#include <stdio.h>

int main() {
    FILE *file;         // Declare a pointer to a FILE structure
    char filename[100]; // Store the filename
    char ch;            // Store each character read from the file

    printf("Enter the filename: ");
    scanf("%s", filename);  // Read the filename from the user
    
    printf("Enter for which character to search:\n");
    char sch;
    scanf(" %c",&sch);

    // Open the file in "r" mode (read mode)
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    else{
    int count=0;
    while ((ch = fgetc(file)) != EOF) {
        if (ch==sch){
		count ++;
	}
    }
    printf("%d",count);

    // Close the file
    fclose(file);

    return 0;
    }
}
