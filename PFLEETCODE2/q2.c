#include<stdio.h>
void reversestring(int s[] , int n){
    int first =0;
    int last = n-1;
    char temp;
    while(first < last){
        temp = s[first];
        s[first] = s[last];
        s[last] = temp;
        first++;
        last--;

    }
}
int main() {
    int s[5]={'h','e','l','l','o'};
    int n =sizeof(s)/ sizeof(s[0]);
     printf("{");
     reversestring(s, n);
     for(int i=0; i<n; i++) {
        printf("% c,", s[i]);
     }
     printf("}");
     return 0;
    }