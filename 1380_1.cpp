// 1380��: �Ͱ���
#include <stdio.h>

int main() {
	int n; //���л��� ��
	int a; // �Է¹޴� ���л� ��ȣ
	char b; // A or B �Է�
	int index = 1; // �Ͱ��̸� �������� ���� �л��� �̸��� ����� �� �տ� ���� ����� ��ȣ

	while (true) {
		scanf("%d", &n);
		if (n == 0) break; // 0�� ������ �ٷ� �Ͽ� �Է� ����
		getchar(); // fgets�Լ��� �̿��ؼ� �л� �̸��� �Է¹��� �� \n(���๮��)�� ���� ���� ����

		char students[102][62] = { 0, }; // ��ü�� 0���� �ʱ�ȭ
		bool arr[62] = { 0, }; // ��ü�� false�� �ʱ�ȭ(1�� true)

		for (int i = 1; i <= n; i++)
			fgets(students[i], sizeof(students[i]), stdin); // �л� �̸� �Է�
		for (int i = 1; i <= 2 * n - 1; i++) {
			scanf("%d %c", &a, &b);
			arr[a] = !arr[a];
			// ���� ��� �л��� false�� �ʱ�ȭ �Ǿ��־����Ƿ� �� �� �ԷµǸ�, true, �ι� �ԷµǸ� false�� �ٲ�
			// false -> �������� ���(2�� �Է�), true -> �������� ���� ���(1�� �Է�)
		}
		for (int i = 1; i <= n; i++)
			if (arr[i] == true) printf("%d %s", index++, students[i]);
		// �Ͱ��̸� �������� ���� �л��� ���
	}
	return 0;
}