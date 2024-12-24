#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch;
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1;
    }
    // Mo file bt06.txt de ghi
    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Khong the mo file bt06.txt de ghi.\n");
        fclose(file1);
        return 1;
    }
    // Sao chep noi dung tu file bt01.txt sang bt06.txt
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }
    fclose(file1);
    fclose(file2);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt.\n");
    return 0;
}

