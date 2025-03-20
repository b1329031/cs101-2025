#include <stdio.h>
int main() {
    FILE* fp;
    int a[] = {0, 1, 2};
    char b[] ="ABC";
    float c[] = {1.1, 1.2, 1.3};
    
    fp = fopen("a.bin", "wb");
    fwrite(a, sizeof(a), 1, fp);
    fwrite(b, sizeof(char)*3, 1, fp);
    fwrite(c, sizeof(c), 1, fp);
    fclose(fp);
    
    int ra[3];
    char rb[4] = {0};
    float rc[3];
    
    fp = fopen("a.bin", "rb");
    fread(ra, sizeof(ra), 1, fp);
    
    fseek(fp, sizeof(a), SEEK_SET);
    fread(rb, sizeof(char)*3 , 1, fp);
    rb[3] = '\0';
    
    fseek(fp, sizeof(a) + 3, SEEK_SET);
    fread(rc, sizeof(rc), 1, fp);
    fclose(fp);
    
    for(int i = 0; i < 3; i++)
        printf("%d ", ra[i]);
        printf("\n%s\n", rb);
    for(int i = 0; i < 3; i++)
        printf("%.6f ",rc[i]);
    
    return 0;
}
