#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    // Mo file de doc
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    // Doc dong dau tien
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file: %s", line);
    } else {
        printf("File rong hoac khong co dong nao.\n");
    }
    fclose(file);
    return 0;
}

