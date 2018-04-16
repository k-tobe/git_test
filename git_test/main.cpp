#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//　メイン関数
int main(void){
    // 入力格納用
    int parm = 0;
    
    // 高さを標準入力より指定する
    scanf("%d",&parm);
    
    if(parm%2==0) {
        // 偶数の場合「invalid」を出力
        printf("invalid");
    } else {
        int turnPoint = parm/2;
        int endPoint = parm-1;
        int subNum=1;
        
        for(int i=0; i<parm; i++){
            char lineData[parm];
            memset(&lineData, '.', parm);
            lineData[endPoint] = 'j';
            lineData[parm] = '\0';
            
            if (i == parm-1) {
                memset(lineData, 'j', sizeof(lineData));
            } else if(i > turnPoint) {
                lineData[0] = 'j';
                subNum++;
            }
            printf("%s\n", lineData);
        }
    }
    return 0;
}
