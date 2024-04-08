// grapple_story_2.c

#include <stdio.h>
#include <stdlib.h>

void printStatus(int first, int second, int third, int fourth){
    printf("\n");
    printf("현재 드래곤 체력        : %d\n",first);
    printf("현재 드래곤의 공격력    : %d\n",second);
    printf("--------------------------------------\n");
    printf("현재 플레이어 체력      : %d\n",third);
    printf("현재 플레이어의 공격력  : %d\n",fourth);
    
    printf("\n");
}

int main(){
    int playerHealth = 100;
    int playerAttack = 6;

    int enemyHealth = 200;
    int enemyAttack = 30;

    int playerAction = 0;

    printf("------------Graple Story--------------\n");
    printf("--------------------------------------\n");
    printf("\n");

    printf("드래곤이 나타났습니다...\n");

    printStatus(enemyHealth,enemyAttack,playerHealth,playerAttack);

    while(1){
        printf("행동을 선택하세요 (0: 공격, 1: 방어): ");
        scanf("%d", &playerAction);
        printf("\n");

        if(playerAction == 0){
            printf("--------------------------------------\n");
            printf("공격을 선택했습니다.\n\n");
            printf("플레이어가 드래곤을 공격!... 데미지 -%d\n",playerAttack);
            enemyHealth -= playerAttack;
            printf("드래곤이 플레이어를 공격!... 데미지 -%d\n",enemyAttack);
            playerHealth -= enemyAttack;
            printStatus(enemyHealth,enemyAttack,playerHealth,playerAttack);
            printf("--------------------------------------\n");
        }

        if(playerAction == 1){
            printf("--------------------------------------\n");
            printf("방어를 선택했습니다.\n\n");
            printf("드래곤이 플레이어를 공격!\n\n");
            printf("플레이어는 드래곤의 공격을 방어했다...\n");
            printStatus(enemyHealth,enemyAttack,playerHealth,playerAttack);
            printf("--------------------------------------\n");
        }        

        if(enemyHealth < 0){
            printf("드래곤을 쓰러뜨렸습니다. 신난다!!\n");
            break;
        }

        if(playerHealth < 0){
            printf("당신은 죽었습니다...\n");
            printf("게임 오버...\n");
            break;
        }

    }
    printf("--------------------------------------\n");
    printf("-----------게임을 종료합니다----------\n");
}

