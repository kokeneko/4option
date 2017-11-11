#include <stdio.h>

int mondai(int);

int main(void){
    int i, correct, ans;

    for(i = 1;i <= 10;i++){
        correct = mondai(i);

        scanf("%d", &ans);

        if(ans == correct){
            printf("正解\n");
        }
        else{
            printf("不正解\n");
        }
    }
    
    return 0;
}
    
int mondai(int x){
    int correct;
    
    switch(x){
        case 1:{
            printf("本部の一番好きな食べ物は？\n");
            printf("1,うどん\n");
            printf("2,そば\n");
            printf("3,パスタ\n");
            printf("4,ラーメン\n");
            correct = 1;
            break;
            }
        case 2:{
            printf("本部の一番好きなアイドルグループは？\n");
            printf("1,BiSH\n");
            printf("2,BiS\n");
            printf("3,GANG PARADE\n");
            printf("4,EMPiRE\n");
            correct = 2;
            break;
            }
        case 3:{
            printf("lv50最速ガブリアスのすばやさ実数値は？\n");
            printf("1,102\n");
            printf("2,169\n");
            printf("3,171\n");
            printf("4,221\n");
            correct = 2;
            break;
            }
        case 4:{
            printf("一番速く行動できるのは？\n");
            printf("1すいすいフローゼル\n");
            printf("2,デオキシススピードフォルム\n");
            printf("3,はやあしサンダース\n");
            printf("4,スカーフガブリアス\n");
            correct = 1;
            break;
            }
        case 5:{
            printf("この中で骨格が異なるモンスターは？\n");
            printf("1,ジンオウガ\n");
            printf("2,ティガレックス\n");
            printf("3,ギギネブラ\n");
            printf("4,アカムトルム\n");
            correct = 1;
            break;
            }
        case 6:{
            printf("頭が弱点(肉質45以上)でないのは？\n");
            printf("1,リオレウス\n");
            printf("2,ラギアクルス\n");
            printf("3,ラージャン\n");
            printf("4,ディアブロス\n");
            correct = 4;
            break;
            }
        case 7:{
            printf("夕雲型駆逐艦は？\n");
            printf("1,東雲\n");
            printf("2,薄雲\n");
            printf("3,風雲\n");
            printf("4,白雲\n");
            correct = 3;
            break;
            }
        case 8:{
            printf("1番艦(ネームシップ)を務めていない駆逐艦は？\n");
            printf("1,吹雪\n");
            printf("2,初雪\n");
            printf("3,漣\n");
            printf("4,綾波\n");
            correct = 3;
            break;
            }
        case 9:{
            printf("木デネボラ/火デネボラ/エルドラアナ/ダンタリオン/エンラ/木デネボラ(バッチ/潜在無し)の操作時間は？)\n");
            printf("1,5.50秒\n");
            printf("2,6.00秒\n");
            printf("3,6.50秒\n");
            printf("4,7.00秒\n");
            correct = 2;
            break;
            }
        case 10:{
            printf("ミツネハンターのコンボ倍率はどこからはじまる？\n");
            printf("1,2コンボ\n");
            printf("2,3コンボ\n");
            printf("3,4コンボ\n");
            printf("4,5コンボ\n");
            correct = 3;
            break;
            }

        }

    return correct;
}
