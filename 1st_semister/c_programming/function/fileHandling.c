#include <stdio.h>

void writeFile() {
    FILE *fp = fopen("data.txt", "w");
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        fprintf(fp, "%d\n", x);
    }
    fclose(fp);
}

void readFile() {
    FILE *fp = fopen("data.txt", "r");
    int x;
    while (fscanf(fp, "%d", &x) != EOF)
        printf("%d ", x);
    fclose(fp);
}

int main() {
    writeFile();
    readFile();
    return 0;
}
