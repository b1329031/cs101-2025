#include <stdio.h>

void binary_to_hex(const char *binary){
    int decimal = 0;

    for(int i = 0; i < 8; i ++){
        decimal = decimal* 2 + (binary[i] - '0');
    }
    printf("%X\n", decimal);
}

int main(){
    char a[] = "10001111";
    binary_to_hex(a);
    return 0;

}
