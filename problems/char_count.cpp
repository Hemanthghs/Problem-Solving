#include <stdio.h>

int main() {
    char ch;
    int l_c=0, s_c=0, d_c=0;
    do{
        scanf("%c",&ch);
        if(ch>='a' && ch<='z'){
            l_c++;
        }
        else if(ch>='0' && ch<='9'){
            d_c++;
        }
        else if(ch==' ' || ch=='\n' || ch=='\t'){
            s_c++;
        }
    }while(ch!='$');
    printf("%d %d %d",l_c,d_c,s_c);
}