#include<stdio.h>
int count(char str[]){
    int i = 0;
    while(str[i] != '\0'){
      i++;
    }
    return i;
}
void reverse(char input[], char result[]) {
    int a = count(input) - 1;
    int b = 0;
    while(a >= 0){
      result[b++] = input[a--];
    }
}
int main()
{
    char input[1024];
    int i = 0;
    input[i] = getchar();
    
    while (input[i] !='\n'){
        i++;
        input[i] = getchar();
    }
    char result[1024];
    reverse(input, result);
    printf("%s\n", result);
}