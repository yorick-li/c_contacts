#include <stdio.h>
#include <stdlib.h> //因为需要用到, 强制退出程序, 所以需要引入此库

// 1. 创建choose页面
void printChoose() {

	// 1.1 创建choose页面所需要的枚举值
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

		// 1.2 根据不同的选择进入不同的入口
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
 * 1到2(1-2)之间应该做的事
 */
// 1-2.1 定义联系方式信息的结构体
struct Contacts {
	
};

// 1-2.1 定义存放联系方式信息的数据结构


// 2. 添加联系人
void toAddContacts() {

}

int main(void) {

	printChoose();

	return 0;
}