#include <stdio.h>

int main() {
    int i,j;  // i, j�����л��� 
    
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++)
            // %2d ���ƿ��Ϊ�����ַ������Ҷ��룻�����Ϊ %-2d ��Ϊ�����
            // \tΪtab����
            printf("%d*%d=%2d\t", i, j, i*j);
        printf("\n");
    }
    
    return 0;
}