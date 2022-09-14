import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> stack = new Stack<>();
        int answer = 0; // 괄호열의 값을 저장하는 변수

        String lines = br.readLine();
        int tmp = 1; // 임시값을 저장하는 변수
        for (int i = 0; i < lines.length(); i++) {
            if (lines.charAt(i) == '(') {
                tmp *= 2;
                stack.push(lines.charAt(i));
            } else if (lines.charAt(i) == '[') {
                tmp *= 3;
                stack.push(lines.charAt(i));
            } else if (lines.charAt(i) == ')') {
                if(i == 0){
                    answer = 0;
                    break;
                } else if (lines.charAt(i - 1) == '[' || stack.empty() || stack.peek() == '[') {
                    answer = 0;
                    break;
                } else if (lines.charAt(i - 1) == '(') {
                    answer += tmp;
                    tmp /= 2;
                    stack.pop();
                } else {
                    tmp /= 2;

                    stack.pop();
                }
            } else if (lines.charAt(i) == ']') {
                if (i == 0){
                    answer = 0;
                    break;
                } else if (lines.charAt(i - 1) == '(' || stack.empty() || stack.peek() == '(') {
                    answer = 0;
                    break;
                } else if(lines.charAt(i-1) == '['){
                    answer += tmp;
                    tmp /= 3;
                    stack.pop();
                } else{
                    tmp/=3;
                    stack.pop();
                }

            }
//            System.out.println(answer);
//            System.out.println(stack.empty());

        }
        if (!stack.empty()) {
            answer = 0;
        }
        System.out.println(answer);
    }
}