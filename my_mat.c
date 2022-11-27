#include <stdio.h>
#include  "my_mat.h"

int mat[10][10];
int min(int i, int j){
    if(i<j){
        return i;
    }else{
        return j;
    }
}
void FW(){
    int k,i,j;
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j < 10; ++j) {
               if((i!=j) && (mat[i][j]==0)){
                   mat[i][j]=__INT_MAX__;
               }
        }
    }
    for(k=0; k < 10; k++){
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
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

}
void A(){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
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




