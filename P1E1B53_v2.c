// P1E1B53.c
// �q���@B53 �ۯ�޳
// �{���@�~1�G�򥻿�J��X�P��ܫ��O�m��

/*
�߱o�����G
�o���@�~���ڧ���x C �y������J��X�B����P�_ (if)�B�r���B�z���򥻻y�k�C
�b��@�L�{���A�گS�O�Ǩ�F�p��ϥ� system("pause") �P system("cls") �ӱ���e���y�{�A
�]��|��M����J�w�İ� (fflush(stdin)) �����n�ʡA�קK��J���~�C
����Ө��A�o�O�@�ӫܦn�J������@�m�ߡA���U�ګإ߫H�ߡI

�@�~�\��²���G
1. �ϥΪ̿�J�K�X�]���T�K�X�� 2024�^�C
2. �Y�K�X���T�A��ܿ��ô��ܿ�J�@�Ӧr���C
3. �P�_��J���r���O�j�g�B�p�g�B�Ʀr�Ψ�L�C
4. �L�X��������r���G�C
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch;        // �x�s�ϥΪ̿�J���r��
    int password;   // �x�s�K�X

    // Step 1: �K�X����
    printf("�п�J4��ƱK�X�G");
    scanf("%d", &password);

    if (password != 2024) {
        printf("%c", '\a'); // ĵ�i�n
        printf("�K�X���~�A�{�������C\n");
        return 0; // �����{��
    }

    printf("�K�X���T�A�w��i�J�t�ΡI\n");
    system("pause"); // ���ݨϥΪ̫����N��
    system("cls");   // �M���ù��e��

    // Step 2: ��ܥD���
    printf("-------------------------------\n");
    printf("|  'A'...'Z' : Uppercase       |\n");
    printf("|  'a'...'z' : Lowercase       |\n");
    printf("|  '0'...'9' : Digit           |\n");
    printf("|  Others    : E1B53 �ۯ�޳      |\n");
    printf("-------------------------------\n");

    // Step 3: ��J�r���çP�_
    fflush(stdin); // �M����J�w�İϡA�קK��J���~
    printf("�п�J�@�Ӧr���G");
    scanf(" %c", &ch); // �`�N�e���Ů�O���F���L����Ÿ�

    // Step 4: �P�_�r������
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("E1B53 �ۯ�޳\n");
    }

    system("pause"); // ���ݫ���ᵲ���{��
    return 0;
}

