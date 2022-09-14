import java.io.*;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int test = Integer.parseInt(br.readLine()); // test 개수 입력 받기
        ArrayList<Integer> answer = new ArrayList<>(); // 각 리스트에서 3번째로 큰 수를 저장하는 리스트

        for(int i=0;i<test;i++) {
            ArrayList<Integer> list = new ArrayList<>();
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < 10; j++) {
                list.add(Integer.parseInt(st.nextToken()));
            }

            list.sort(Comparator.reverseOrder()); // 내림차순 정렬
            answer.add(list.get(2)); // 3번째로 큰 수를 answer list에 넣기
        }

        // 각 리스트에서 3번째로 큰 수를 출력
        for (int num : answer) {
            bw.write(String.valueOf(num));
            bw.newLine();
        }
        bw.flush();
        bw.close();
    }

}
