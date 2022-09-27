#include <stdio.h>
#include "index_first_even.h"
#include "index_last_odd.h"
#include "sum_between_even_odd.h"
#include "sum_before_even_and_after_odd.h"

#define MAX_LEN 100

int main(){
    int code = -1, arr[MAX_LEN], len = 0;
    char symbol;
    scanf("%d%c", &code, &symbol);

    while(len < MAX_LEN && symbol != '\n'){
        scanf("%d%c", &arr[len], &symbol);
        len++;
    }

    switch(code){
        case 0:
            printf("%d\n", index_first_even(arr, len));
            break;
        case 1:
            printf("%d\n", index_last_odd(arr, len));
            break;
        case 2:
            printf("%d\n", sum_between_even_odd(arr, len));
            break;
        case 3:
            printf("%d\n", sum_before_even_and_after_odd(arr, len));
            break;
        default:
            puts("Данные некорректны");
    }

}
