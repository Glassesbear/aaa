#include <stdio.h>




// �Ҽ��� �ڱ� �ڽŰ� 1�� ������ ���̴�
// ���� ��� 2, 3, 5, 7, 11 ���� �ִ�
// ������ i ���� �������� ������ �������� �ʴ´ٸ�, �Ҽ���� �� �� �ִ�(2 ~ ...)
// �߰������� �˰������� ȿ������ ���� �ִ�� root(�ش��) ������ Check �ϸ� �� ������ �Ǵܵ�
// ����� �ִٸ�, �ڱ� * �ٸ��� = �ش���� �Ǳ� ���� (12�� ���, 1, 2, 3, 4, 6, 12�� �ְ� 2�� ��� 6�� ������� �� �� �ִ� ������ rootA ������ Check �ϸ� ��)
bool is_prime(int a) {

	if (a < 2) {
		return false;
	}

	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0){
			return false;
		}
	}

	return true;
}


int main() {

	return 0;
}