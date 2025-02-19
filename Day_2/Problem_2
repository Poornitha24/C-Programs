#include<stdio.h>
#include<string.h>
int findLenght(char* str)
{
    int  lenght=0;
    for(char* p_ch=str;(*p_ch)!='\0';p_ch++)
    {
        lenght++;
    }
    return lenght;
}
void reverseString(char *str)
{
    int len=findLenght(str);
    for(int left=0, right=len-1; left < right; left++, right--)
    {
        char temp=*(str+left);//*(str+left)==str[left]
        *(str+left)=*(str+right);
        *(str+right)=temp;
    }
}
int main()
{
    char str[255];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Before reversing: %s\n",str);
    reverseString(str);
    printf("Reversed string: %s\n",str);
    return 0;
}
