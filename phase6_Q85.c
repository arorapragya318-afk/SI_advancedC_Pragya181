//File Encryption
 #include <stdio.h>
int main() 
{
    FILE *input, *output;
    char ch;
    char key = 'K';   
    input = fopen("input.txt", "r");
    output = fopen("encrypted.txt", "w");
    if (input == NULL || output == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    while ((ch = fgetc(input)) != EOF) 
    {
        fputc(ch ^ key, output);   
    }
    fclose(input);
    fclose(output);
    printf("File encrypted successfully.\n");
    return 0;
}