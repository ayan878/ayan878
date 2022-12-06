#include<stdio.h>
int main(){
    int Max[2][3]={{1,4,2},{3,6,8}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d", Max[i][j]);
        }
    }
    return 0;
}