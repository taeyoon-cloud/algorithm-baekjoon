import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    static int n; // 보드의 크기
    static int max_value = 1; // 상근이가 먹을 수 있는 최대 사탕 개수
    static char[][] board; // N*N 크기의 보드에 들어가는 사탕을 저장하는 배열

    // 인접한 양 옆 두개의 사탕을 교환하는 메소드
    public static void swapRight(int a, int b) {
        char tmp = board[a][b];
        board[a][b] = board[a][b+1];
        board[a][b+1] = tmp;
    }

    // 인접한 위 아래 두 개의 사탕을 교환하는 메소드
    public static void swapUnder(int a, int b) {
        char tmp = board[a][b];
        board[a][b] = board[a+1][b];
        board[a+1][b] = tmp;
    }

    // a번째 행 체크하는 메소드
    public static void findRow(int a) {
        int tmp = 1; // 이 메소드에서 구하는 최댓값
        for (int i = 0; i < n-1; i++) {
            if(board[a][i] == board[a][i+1])
                tmp++;
            else tmp = 1;

            max_value = Math.max(tmp, max_value);
        }
    }

    // b번째 열 체크하는 메소드
    public static void findCol(int b) {
        int tmp = 1; // 이 메소드에서 구하는 최댓값
        for (int i = 0; i < n-1; i++) {
            if(board[i][b] == board[i+1][b])
                tmp++;
            else tmp = 1;

            max_value = Math.max(tmp, max_value);
        }
    }

    // main 메소드
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        board = new char[n][n]; // n*n 크기의 보드로 초기화

        // 각 행, 열에 사탕 종류 입력
        for (int i = 0; i < n; i++) {
            String lines = br.readLine();
            for (int j = 0; j < n; j++) {
                board[i][j] = lines.charAt(j);
            }
        }

        // 기본 행에서 최댓값을 찾음
        for (int i = 0; i < n; i++) {
            findRow(i);
        }
        // 기본 열에서 최댓값을 찾음
        for (int i = 0; i < n; i++) {
            findCol(i);
        }

        // 이제 행, 열 쌍을 하나씩 바꿔보면서 최댓값을 찾음
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // 오른쪽 값과 교체
                if(j+1 < n) {
                    if(board[i][j] != board[i][j+1]) {
                        swapRight(i, j);
                        findRow(i);
                        findCol(j);
                        findCol(j + 1);
                        swapRight(i, j);
                    }
                }

                // 아래 값과 교체
                if(i+1 < n) {
                    if(board[i][j] != board[i+1][j]) {
                        swapUnder(i, j);
                        findCol(j);
                        findRow(i);
                        findRow(i + 1);
                        swapUnder(i, j);
                    }
                }
            }
        }

        System.out.println(max_value);




    }
}