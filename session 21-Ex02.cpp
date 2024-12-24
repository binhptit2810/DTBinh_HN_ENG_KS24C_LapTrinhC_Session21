#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    //Mo file de doc
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    //Doc va in ky tu dau tien trong file
    ch = fgetc(file);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    } else {
        printf("File rong.\n");
    }
    fclose(file);
    return 0;
}

