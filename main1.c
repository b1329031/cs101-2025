#include <stdio.h>

void run_length_encoding(const char *input){
    for(int i = 0; input[i] != '\0';){
        char current = input[i];
        int count = 0;

        while (input[i] == current && count < 9){
            count++;
            i++;
        }
        printf("%c%d", current, count);
    }
    printf("\n");
}

int main(){
    char a[] = "AABBBCCCCddd";
    run_length_encoding(a);
    return 0;

}
