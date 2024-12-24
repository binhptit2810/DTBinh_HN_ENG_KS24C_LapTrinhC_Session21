#include <stdio.h>

int main() {
    FILE *file;
    int n;
    char line[256];
    // Yeu cau nguoi dung nhap so dong
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar(); 
    // Mo file de ghi
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    // Nhap noi dung cho tung dong
    for (int i = 0; i < n; i++) {
        printf("Nhap noi dung cho dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin); 
        fprintf(file, "%s", line); 
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }
    // In noi dung file ra man hinh
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

