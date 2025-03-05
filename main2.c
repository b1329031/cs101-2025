#include <stdio.h>
#include <ctype.h>

void run_length_encoding(const char *input){
    for(int i = 0; input[i] != '\0'; i += 2){
        char current = input[i];
        int count = input[i + 1] - '0';

        for(int j = 0; j < count; j++){
            putchar(current);
        }
    }
    printf("\n");
}

int main(){
    char a[] = "A4B3C3f3";
    run_length_encoding(a);
    return 0;

}
