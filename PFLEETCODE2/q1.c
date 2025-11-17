#include<stdio.h>
void zero(int nums[] , int n){
 int index = 0;
 for(int i = 0; i < n; i++){
    if(nums[i] != 0  ){
        nums[index] = nums[i];
           index++;

    }
 }
 while(index < n){
    nums[index] =0;
    index++;

 }
}
 int main() {
    int nums[5] ={0,2,0,4,5};
    int n = sizeof(nums)/ sizeof(nums[0]);
    zero(nums, n );
    printf("{");
    for (int i =0; i<n; i++){
        printf("%d,", nums[i]);
    }
    printf("}");
return 0;
 }

