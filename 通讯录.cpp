#include <stdio.h>
#include <stdlib.h> //��Ϊ��Ҫ�õ�, ǿ���˳�����, ������Ҫ����˿�

// 2.1 ������������
void toAddContacts();
void toSearchNumber();
void toContactsList();
void toContactsData();
void toDeleteContacts();
void toExitSystem();

// 1. ����chooseҳ��
void printChoose() {

	// 1.1 ����chooseҳ������Ҫ��ö��ֵ
	enum Choices {
		ONE=1, TWO, THREE, FOUR, FIVE, SIX
	};

	int choose = 0;
	printf("Choose:(Please press numbers in your keyboard)\n");
	printf("1. Add Contacts\n");
	printf("2. Search Number\n");
	printf("3. contacts List\n");
	printf("4. contacts Data\n");
	printf("5. Delete Contacts\n");
	printf("6. Exit System\n");
	
	while (true) {
		scanf("%d", &choose);

		// 1.2 ���ݲ�ͬ��ѡ����벻ͬ�����
		switch (choose) {
			case ONE : toAddContacts(); break;//TODO
			case TWO : toSearchNumber(); break;//TODO
			case THREE : toContactsList(); break;//TODO
			case FOUR : toContactsData(); break;//TODO
			case FIVE : toDeleteContacts(); break;//TODO
			case SIX : toExitSystem(); exit(0); break;//TODO
			default : printf("There is no %d choice.\n", choose); break;//TODO
		}
	}
	
}

/** 
 * 1��2(1-2)֮��Ӧ��������
 */
// 1-2.1 ������ϵ��ʽ��Ϣ�Ľṹ��
struct Contacts {
	char name[20];
	char phone[11];
};

// 1-2.2 ��������ϵ��ʽ��Ϣ�����ݽṹ:����ʹ����������������
struct Contacts * createContactsArray() {
	// a. Ĭ�ϳ�ʼ��10��Ԫ��
	int len = 10;
	struct Contacts * pContactArr = (struct Contacts *)malloc(sizeof(struct Contacts) * len);
	return contacts;
}


// 2. �����ϵ��
void toAddContacts() {
	

}

int main(void) {

	// �����׽���
	printChoose();

	return 0;
}