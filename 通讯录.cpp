#include <stdio.h>
#include <stdlib.h> //因为需要用到, 强制退出程序, 所以需要引入此库

// 2.1 首先声明函数
void toAddContacts(void);
void toSearchNumber();
void toContactsList();
void toContactsData();
void toDeleteContacts();
void toExitSystem(void);

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
			case SIX : toExitSystem(); break;//TODO
			default : printf("There is no %d choice.\n", choose); break;//TODO
		}
	}
	
}

/** 
 * 1到2(1-2)之间应该做的事
 */
// 1-2.1 定义联系方式信息的结构体
struct Contacts {
	char name[20];
	char phone[11];
};

// 1-2.2 定义存放联系方式信息的数据结构:这里使用数组来保存数据
struct Contacts * createContactsArray() {
	// a. 默认初始化10个元素
	int len = 10;
	struct Contacts * pContactArr = (struct Contacts *)malloc(sizeof(struct Contacts) * len);
	return pContactArr;
}


// 2. 添加联系人
void toAddContacts() {
	printf("This is 1 choice!\n");
	//TODO
}

// 3. 根据号码搜索联系人
void toSearchNumber() {
	printf("This is 2 choice!\n");
	//TODO
}

// 4. 打印联系人信息
void toContactsList() {
	printf("This is 3 choice!\n");
	//TODO
}

// 5. 打印联系人信息
void toContactsData() {
	printf("This is 4 choice!\n");
	//TODO
}

// 6. 删除联系人
void toDeleteContacts() {
	printf("This is 5 choice!\n");
	//TODO
}

// 7. 退出系统
void toExitSystem() {
	printf("This is 6 choice!\n");
	exit(0);
}


int main(void) {

	// 创建首界面
	printChoose();

	return 0;
}