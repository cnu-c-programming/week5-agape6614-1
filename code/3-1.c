//for문안쪽 print넣기
#include <stdio.h>

void read_only(int *arr ,int size){
    // arr[0] = 999;
    for(int i = 0; i < size-1; i++){
        printf("%d", *(arr+i));
        printf("\n");
    }
    printf("%d", *(arr+(size-1)));
    
}

int main(){
    int nums[] = {10, 20, 30, 40, 50};
    read_only(nums, 5);
    return 0;
}