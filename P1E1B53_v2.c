// P1E1B53.c
// 電機一B53 石祐瑋
// 程式作業1：基本輸入輸出與選擇指令練習

/*
心得說明：
這次作業讓我更熟悉 C 語言的輸入輸出、條件判斷 (if)、字元處理等基本語法。
在實作過程中，我特別學到了如何使用 system("pause") 與 system("cls") 來控制畫面流程，
也體會到清除輸入緩衝區 (fflush(stdin)) 的必要性，避免輸入錯誤。
整體而言，這是一個很好入門的實作練習，幫助我建立信心！

作業功能簡介：
1. 使用者輸入密碼（正確密碼為 2024）。
2. 若密碼正確，顯示選單並提示輸入一個字元。
3. 判斷輸入的字元是大寫、小寫、數字或其他。
4. 印出對應的文字結果。
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch;        // 儲存使用者輸入的字元
    int password;   // 儲存密碼

    // Step 1: 密碼驗證
    printf("請輸入4位數密碼：");
    scanf("%d", &password);

    if (password != 2024) {
        printf("%c", '\a'); // 警告聲
        printf("密碼錯誤，程式結束。\n");
        return 0; // 結束程式
    }

    printf("密碼正確，歡迎進入系統！\n");
    system("pause"); // 等待使用者按任意鍵
    system("cls");   // 清除螢幕畫面

    // Step 2: 顯示主選單
    printf("-------------------------------\n");
    printf("|  'A'...'Z' : Uppercase       |\n");
    printf("|  'a'...'z' : Lowercase       |\n");
    printf("|  '0'...'9' : Digit           |\n");
    printf("|  Others    : E1B53 石祐瑋      |\n");
    printf("-------------------------------\n");

    // Step 3: 輸入字元並判斷
    fflush(stdin); // 清除輸入緩衝區，避免輸入錯誤
    printf("請輸入一個字元：");
    scanf(" %c", &ch); // 注意前面空格是為了跳過換行符號

    // Step 4: 判斷字元種類
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("E1B53 石祐瑋\n");
    }

    system("pause"); // 等待按鍵後結束程式
    return 0;
}

