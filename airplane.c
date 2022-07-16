#include<stdio.h>
#include<windows.h>
#define NO 0
#define DO 523
#define RAE 587
#define MI 659
#define FA 698
#define FASHAP 741
#define SOL 784 
#define SOLSHAP 832
#define RA 880
#define SISHAP 944
#define SI 988
#define DODO 1048
#define RAERAE 5872
#define MIMI 6592
#define FAFA 6982
#define SOLSOL 7842 
#define RARA 8802
#define SISI 9882
#define DODODO 523*3

enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VOILET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};
void setColor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

int main() {

    int a;
    setColor(VIOLET);
    printf("Hello 저희는 이정현 김재환 김선우 입니다\n");
    setColor(DARK_GRAY);
    printf("노래가 시작하기 원하면 1 끝나고 싶다면 2를 입력 \n");



    while (1) {
        setColor(DARK_GRAY);
        printf("노래가 시작하기 원하면 1 끝나고 싶다면 2를 입력 ");
        scanf_s("%d", &a);

        if (a == 1) {
            int score_map[17] = { MI,RAE,DO,RAE,MI,MI,MI,NO,RAE,RAE,RAE,NO,MI,MI,MI,NO }, i;
            int score_note[17] = { 500,400,500,500,500,500,500,400,500,500,500,250,500,500,500,300 };
            for (i = 1; i <= 16; i++) {
                Beep(score_map[i - 1], score_note[i - 1]);
            }
            int score_map_2[17] = { MI,RAE,DO,RAE,MI,MI,MI,NO,RAE,RAE,MI,RAE,DO,NO }, j;
            int score_note_2[17] = { 500,300,500,500,500,500,500,300,500,500,500,500,900,500,300 };
            for (j = 1; j <= 16; j++) {
                Beep(score_map_2[j - 1], score_note[j - 1]);
            }
        }
        else if (a == 2) {

            break;
        }
        else {
            setColor(RED);
            printf("다시 입력하세요 \n");
        }
    }

    return 0;
}