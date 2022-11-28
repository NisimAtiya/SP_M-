#include <stdio.h>
#include  "my_mat.h"
#define size  10
int mat[size][size]={0};
int min(int i, int j){
    if(i<j){
        return i;
    }else{
        return j;
    }
}
void FW(){
    int k,i,j;
    for (int i = 0; i <size; ++i) {
        for (int j = 0; j < size; ++j) {
               if((i!=j) && (mat[i][j]==0)){
                   mat[i][j]=__INT_MAX__;
               }
        }
    }
    for(k=0; k < size; k++){
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                int temp = 0;
                if((mat[i][k]==__INT_MAX__) || (mat[k][j]==__INT_MAX__) ){
                    temp = __INT_MAX__;
                }else{
                    temp = mat[i][k] + mat[k][j];
                }
                mat[i][j] = min(temp,mat[i][j]);
            }
        }
    }
    for (int i = 0; i <size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(mat[i][j]==__INT_MAX__){
                mat[i][j]=0;
            }
        }
    }

}
void A(){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d",&mat[i][j]);
        }
    }
    FW();
}
void B(int i,int j) {
    if ( (mat[i][j] == 0) || (mat[i][j] == __INT_MAX__) ) {
        printf("False\n");
    } else {
        printf("True\n");
    }
}
void C(int i, int j){
        if( (mat[i][j] != 0) || (mat[i][j] != __INT_MAX__) ){
            printf("%d\n",mat[i][j]);
        }else{
            printf("-1\n");
        }
}




