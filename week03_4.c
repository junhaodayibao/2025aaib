// week03-4.cpp
// M90H044瘋狂程設不能打中文，會變亂碼
///程式貼到codeblocks再寫註解

#include <stdio.h>
int main()
{
    int ans = 0;///答案加到這裡面
    ///迴圈前面ans是0
    int N;///有一個整數N
    scanf("%d", &N);///讀入N
    ///人類的迴圈，從1開始，<=1
    for(int i=1; i<=N; i++){
        ans += i;
    }
    printf("%d", ans);
}

