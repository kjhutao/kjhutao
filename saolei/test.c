#include"game.h"

int main(void) {

	int input = 0;
	
	do {
		//��ӡ��Ϸ�˵�
		printMenu();
		printf("��ѡ��˵�:");
		scanf_s("%d", &input);

		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��");			
			break;
		default:
			printf("�������ѡ�����������ѡ��");
			break;			
		}
	} while (input);
	
	return 0;

}