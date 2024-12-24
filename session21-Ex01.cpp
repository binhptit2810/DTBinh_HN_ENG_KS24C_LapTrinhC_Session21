#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Mo file de ghi
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    // Yeu cau nguoi dung nhap chuoi
    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Da ghi chuoi vao file bt01.txt.\n");
    return 0;
}

