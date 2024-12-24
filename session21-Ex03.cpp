#include <stdio.h>

int main() {
    FILE *file;
    char str[100];
    // Mo file de ghi them
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    // Yeu cau nguoi dung nhap chuoi
    printf("Nhap chuoi de ghi vao file: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Da ghi them chuoi vao file bt01.txt.\n");
    return 0;
}

