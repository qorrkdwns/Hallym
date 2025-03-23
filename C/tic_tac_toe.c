#include <stdio.h>

void printBoard(char board[5][5]);
void playerInput(char board[5][5], char player);
int checkWinner(char board[5][5]);
int isFull(char board[5][5]);


int main() {
    // 5x5 게임 보드 초기화
    char board[5][5] = {
        {' ', ' ', ' ', ' ', ' '}, //' ', 빈칸으로 초기화 하기위해 직접 지정
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '}
    };

    char currentPlayer = 'X';
    int winner = 0;

    while(!winner && !isFull(board)) {
        printBoard(board);
        playerInput(board, currentPlayer);
        winner = checkWinner(board);

        if(winner) {
            printBoard(board);
            printf("플레이어 %c가 우승했습니다. \n", currentPlayer);
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // <조건> ? <참일 때 값> : <거짓일 때 값> / 현재 플레이어가 X일 때(참), O로 변경
    }

    if(!winner) {
        printBoard(board);
        printf("무승부입니다. \n");
    }

    return 0;
    

}

// 게임 보드를 출력하는 함수
void printBoard(char board[5][5]) {
    printf("\n--- 게임 보드 ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %c ", board[i][j]);
            if (j < 4) printf("|"); // 열 구분
        }
        printf("\n");
        if (i < 4) printf("---+---+---+---+---\n"); // 행 구분
    }
}

void playerInput(char board[5][5], char player) {
    int row, col; // 사용자가 원하는 위치에 X와 O를 배치

    while(1) {  
        printf("플레이어 %c, 행(0~4)과 열(0~4)을 입력하세요: ", player);
        scanf("%d %d", &row, &col);

        if(row < 0 || row > 4 || col < 0 || col > 4) {
            printf("잘못된 숫자를 입력하였습니다. 다시 입력해주세요. \n");
            continue; //뒤의 코드를 실행하지 않고 다시 입력 받기 위해 continue 사용
        }
        
        if (board[row][col] == ' ') { //입력한 칸이 빈칸일 때
            board[row][col] = player;
            break;
        } else {
            printf("이미 차있는 칸입니다. 다른 칸을 선택하세요.\n");
        }
    }
}

int checkWinner(char board[5][5]) {
    for(int i = 0; i < 5; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == board[i][3] && board[i][3] == board[i][4] && board[i][0] != ' ') //가로줄 빙고 / C언어에서는 세 개의 값이 같은지 동시에 확인 불가
            return 1;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] == board[3][i] && board[3][i] == board[4][i] && board[0][i] != ' ') //세로줄 빙고
            return 1;
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == board[3][3] && board[3][3] == board[4][4] && board[0][0] != ' ') //왼쪽 위에서 오른쪽 아래 대각선
        return 1;
    if(board[0][4] == board[1][3] && board[1][3] == board[2][2] && board[2][2] == board[3][1] && board[3][1] == board[4][0] && board[0][4] != ' ') //오른쪽 위에서 왼쪽 아래 대각선
        return 1;

    return 0;
}

int isFull(char board[5][5]) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(board[i][j] == ' ')
                return 0; //참이면 가득차고, 거짓이면 가득 안 참
        }
    }

    return 1;
}