#define NOMINMAX
#define PI 3.141592653589793238
#define FILE_PATH "D:\\my.txt"
#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <windows.h>
#include <conio.h>
#include <sstream>
#include <string>

using namespace std;

//清屏
void clear_screen() {
    //cout << "\033[2J\033[1;1H";
    system("cls");
}

void showMenu();
int exit_all();
void addition();
void subtraction();
void multiplication();
void division();
void is_count_digits();
void circle_area();
void is_leap_year();
void grade_conversion();
void odd_sum();
void even_sum();
void multiples_of_three();
void find_divisible_by_3_and_5();
void find_narcissistic_numbers();
void find_maximum_value();
void find_maximum_minimum_value();
void test_bubble_sort();
void perform_matrix_transpose();
void diagonal_sum();
void count_words();
void static_linked_list();
void dynamic_linked_list();
void students_score();
void add_ten_points();

int main()
{
    int select = 0;
    bool running = true;

    while (running) {
        showMenu();
        cout << "请选择一个选项：";
        cin >> select;
        clear_screen();
        switch (select) {
        case 1:
            addition();// 处理加法
            break;
        case 2:
            subtraction();// 处理减法
            break;
        case 3:
            multiplication();// 处理乘法
            break;
        case 4:
            division();// 处理除法
            break;
        case 5:
            is_count_digits();// 处理判断数字的位数
            break;
        case 6:
            circle_area();// 处理计算圆面积
            break;
        case 7:
            is_leap_year();// 处理判断闰年
            break;
        case 8:
            grade_conversion();// 处理成绩转换
            break;
        case 9:
            odd_sum();// 处理计算奇数和(for)
            break;
        case 10:
            even_sum();// 处理计算偶数和(while)
            break;
        case 11:
            multiples_of_three();// 处理输出3的倍数(do-while)
            break;
        case 12:
            find_divisible_by_3_and_5();// 处理求被3和5整除的数
            break;
        case 13:
            find_narcissistic_numbers();// 处理求水仙花数
            break;
        case 14:
            find_maximum_value();// 处理求最大值
            break;
        case 15:
            find_maximum_minimum_value();// 处理求最大最小值
            break;
        case 16:
            test_bubble_sort();// 处理冒泡排序
            break;
        case 17:
            perform_matrix_transpose();// 处理矩阵转置
            break;
        case 18:
            diagonal_sum();// 处理求对角线和
            break;
        case 19:
            count_words();// 处理统计单词个数
            break;
        case 20:
            static_linked_list();// 处理静态创建链表
            break;
        case 21:
            dynamic_linked_list();// 处理动态创建链表
            break;
        case 22:
            students_score();// 处理学生成绩排序
            break;
        case 23:
            add_ten_points();// 处理学生成绩普涨10分
            break;
        case 24:
            // 处理退出
            if (exit_all() == 0) {
                running = false;
            }
            break;
        default:
            cout << "无效选项，请重新选择：" << endl;
            cout << " > _ < " << endl;
            Sleep(1000);
            clear_screen();
            continue; 
        }
    }
    //system("pause");
    return 0;
}

//菜单
void showMenu() {

    const char* Menu[] = {
        "***********************************",
        "         小小计算器",
        "         1 加法",
        "         2 减法",
        "         3 乘法",
        "         4 除法",
        "         5 判断数字的位数",
        "         6 计算圆面积",
        "         7 判断闰年",
        "         8 成绩转换",
        "         9 计算从1到输入数之间的奇数和 （for）",
        "         10 计算从1到输入数之间的偶数和 （while）",
        "         11 输出从1到输入数之间所有3的倍数 （do-while）",
        "         12 求即被3整除又被5整除的数",
        "         13 求水仙花数",
        "         14 求最大值",
        "         15 求最大最小值",
        "         16 冒泡排序",
        "         17 矩阵转置",
        "         18 求对角线和",
        "         19 统计单词个数",
        "         20 静态创建链表",
        "         21 动态创建链表",
        "         22 学生成绩排序",
        "         23 学生成绩普涨10分",
        "         24 退出",
        "***********************************"
    };
    int item = sizeof(Menu) / sizeof(Menu[0]);

    for (int i = 0; i < item; i++) {
        cout << Menu[i] << endl;
    }
}

// 处理退出
int exit_all() {
    cout << "***********************************" << endl;
    cout << "         你真的要退出吗？" << endl;
    cout << "***********************************" << endl;
    cout << "    1 确认            2 返回" << endl;
    char choice = '\0';
    while (true) {
        choice = getch();
        if (choice && (choice == '1' || choice == '2')) break;
        else cout << "输入无效，请重新输入（1 或 2）：" << endl;
    }
    if (choice == '1') {
        cout << "正在退出..." << endl;
        Sleep(500);
        clear_screen();
        return 0;
    }
    else
        cout << "返回主菜单..." << endl;
        Sleep(500);
        clear_screen();
        return 1;
}

// 处理加法
void addition() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         1 加法" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个数进行加法运算：" << endl;
        cout << "第一个数：";
        cin >> num1;
        cout << "第二个数：";
        cin >> num2;

        double result = num1 + num2;
        cout << "结果是：" << result << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    }while (control != '0');
}

// 处理减法
void subtraction() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         2 减法" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个数进行减法运算：" << endl;
        cout << "第一个数：";
        cin >> num1;
        cout << "第二个数：";
        cin >> num2;

        double result = num1 - num2;
        cout << "结果是：" << result << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    }while (control != '0');
}

// 处理乘法
void multiplication() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         3 乘法" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个数进行乘法运算：" << endl;
        cout << "第一个数：";
        cin >> num1;
        cout << "第二个数：";
        cin >> num2;

        double result = num1 * num2;
        cout << "结果是：" << result << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理除法
void division() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         4 除法" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个数进行除法运算：" << endl;
        cout << "第一个数：";
        cin >> num1;
        cout << "第二个数：";
        cin >> num2;

        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
            Sleep(500);
            return;
        }

        double result = num1 / num2;
        cout << "结果是：" << result << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理判断数字的位数
int count_digits(int number) {
    if (number == 0) return 1;

    int digits = 0;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        number /= 10;
        digits++;
    }

    return digits;
}

void is_count_digits() {
    char control = '\0';
    do {
        int number;
        cout << "***********************************" << endl;
        cout << "         5 判断数字的位数 " << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个整数: ";
        cin >> number;

        int digits = count_digits(number);
        cout << "数字 " << number << " 的位数是: " << digits << endl;

        cout << "按 0 返回，按其他任意键继续：";
        getchar();
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理计算圆面积
void circle_area() {
    char control = '\0';
    do {
        double r;
        cout << "***********************************" << endl;
        cout << "         6 计算圆面积 " << endl;
        cout << "***********************************" << endl;
        cout << "请输入圆的半径：" << endl;
        cin >> r;

        if (r < 0) {
            cout << "错误：半径不能为负数！" << endl;
            Sleep(1000);
            continue;
        }

        double area = PI * r * r;
        printf("结果是：%.2f\n", area);

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理判断闰年
void is_leap_year() {
    char control = '\0';
    do {
        int year;
        cout << "***********************************" << endl;
        cout << "         7 判断闰年 " << endl;
        cout << "***********************************" << endl;
        cout << "请输入年份:" << endl;
        cin >> year;
        if ((year % 4 == 0 && year % 100) || year % 400 == 0)
        {
            cout << "********************" << endl;
            cout << year << ",这一年是闰年。" << endl;
            cout << "********************" << endl;
        }
        else
        {
            cout << "********************" << endl;
            cout << year << ",这一年不是闰年。" << endl;
            cout << "********************" << endl;
        }
        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理成绩转换
void grade_conversion() {
    char control = '\0';
    do {
        int score;
        cout << "***********************************" << endl;
        cout << "         8 成绩转换 " << endl;
        cout << "***********************************" << endl;
        while (true) {
            cout << "请输入成绩（0-100）：";
            cin >> score;
            if (score < 0 || score > 100) {
                cout << "错误：成绩应在0到100之间，请重新输入！" << endl;
                Sleep(1000);
            }
            else break;
        }

        switch (score / 10) {
        case 10:
        case 9: cout << "成绩等级：A\n"; break;
        case 8: cout << "成绩等级：B\n"; break;
        case 7: cout << "成绩等级：C\n"; break;
        case 6: cout << "成绩等级：D\n"; break;
        default: cout << "成绩等级：E\n"; break;
        }

        cout << "成绩：" << score << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理计算奇数和(for)
void odd_sum() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         9 计算从1到输入数之间的奇数和 （for）" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个正整数：";
        cin >> num;

        if (num <= 0) {
            cout << "错误：请输入一个大于0的正整数！" << endl;
            Sleep(1000);
            continue;
        }

        int sum = 0;
        for (int i = 1; i <= num; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << "从1到" << num << "之间的奇数和是：" << sum << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理计算偶数和(while)
void even_sum() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         10 计算从1到输入数之间的偶数和 （while）" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个正整数：";
        cin >> num;

        if (num <= 0) {
            cout << "错误：请输入一个大于0的正整数！" << endl;
            Sleep(1000);
            continue;
        }

        int sum = 0;
        int i = 1;
        while (i <= num) {
            if (i % 2 == 0) {
                sum += i;
            }
            i++;
        }

        cout << "从1到" << num << "之间的偶数和是：" << sum << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理输出3的倍数(do-while)
void multiples_of_three() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         11 输出从1到输入数之间所有3的倍数 （do-while）" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个正整数：";
        cin >> num;

        if (num <= 0) {
            cout << "错误：请输入一个大于0的正整数！" << endl;
            Sleep(1000);
            continue;
        }

        int i = 1, n = 0;
        bool index = false;
        do {
            if (i % 3 == 0) {
                cout << i << "\t";
                index = true;
                n++;
                if (n % 5 == 0) cout << "\n";
            }
            i++;
        } while (i <= num);

        if (!index) {
            cout << "在1到" << num << "之间没有3的倍数。" << endl;
        }
        else {
            cout << "\n以上是1到" << num << "之间的所有3的倍数。" << endl;
        }

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理求被3和5整除的数
void find_divisible_by_3_and_5() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         12 求即被3整除又被5整除的数" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个正整数：";
        cin >> num;

        if (num <= 0) {
            cout << "错误：请输入一个大于0的正整数！" << endl;
            Sleep(1000);
            continue;
        }

        bool index = false;
        int n = 0;
        for (int i = 1; i <= num; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << i << "\t";
                index = true;
                n++;
                if (n % 5 == 0) cout << "\n";
            }
        }

        if (!index) {
            cout << "\n在1到" << num << "之间没有同时被3和5整除的数。" << endl;
        }
        else {
            cout << "\n以上是1到" << num << "之间所有同时被3和5整除的数。" << endl;
        }

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        
        clear_screen();
    } while (control != '0');
}

// 处理求水仙花数
bool is_narcissistic_number(int number) {
    int original = number;
    int sum = 0;
    int digits = count_digits(number); // 计算数字的位数
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }
    return sum == original;
}

void find_narcissistic_numbers() {
        cout << "***********************************" << endl;
        cout << "         13 求水仙花数" << endl;
        cout << "***********************************" << endl;

        bool index = false;
        for (int i = 100; i <= 999; i++) {
            if (is_narcissistic_number(i)) {
                cout << i << "  ";
                index = true;
            }
        }

        if (!index) {
            cout << "\n没有找到三位数范围内的水仙花数。" << endl;
        }
        else {
            cout << "\n以上是所有三位数范围内的水仙花数。" << endl;
        }

        cout << "返回主菜单..." << endl;
        Sleep(2000);
        clear_screen();
}

// 处理求最大值
int find_max(int a, int b) {
    return (a > b) ? a : b;
}

void find_maximum_value() {
    char control = '\0';
    do {
        int num1, num2;
        cout << "***********************************" << endl;
        cout << "         14 求最大值" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个整数：" << endl;
        cout << "第一个整数：";
        cin >> num1;
        cout << "第二个整数：";
        cin >> num2;

        int max_value = find_max(num1, num2);
        cout << "两个整数中较大的是：" << max_value << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理求最大最小值
void find_max_min(int* a, int* b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

void find_maximum_minimum_value() {
    char control = '\0';
    do {
        int num1, num2;
        cout << "***********************************" << endl;
        cout << "         15 求最大最小值" << endl;
        cout << "***********************************" << endl;
        cout << "请输入两个整数：" << endl;
        cout << "第一个整数：";
        cin >> num1;
        cout << "第二个整数：";
        cin >> num2;

        find_max_min(&num1, &num2);

        cout << "较大值是：" << num1 << endl;
        cout << "较小值是：" << num2 << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理冒泡排序
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void test_bubble_sort() {
    char control = '\0';
    do {
        const int SIZE = 10;
        int number[SIZE];

        cout << "***********************************" << endl;
        cout << "         16 冒泡排序" << endl;
        cout << "***********************************" << endl;
        cout << "请输入10个整数：" << endl;

        for (int i = 0; i < SIZE; i++) {
            cout << "第 " << i + 1 << " 个数：";
            cin >> number[i];
        }

        bubble_sort(number, SIZE);

        cout << "\n排序后的结果是：" << endl;
        for (int i = 0; i < SIZE; i++) {
            cout << number[i] << " ";
        }
        cout << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理矩阵转置
void transpose_matrix(int original[3][4], int transposed[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[i][j] = original[j][i];
        }
    }
}

//打印矩阵
void print_matrix(const char* message, int matrix[], int r, int c) {
    cout << message << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i * c + j] << " ";
        }
        cout << endl;
    }
}

void perform_matrix_transpose() {
    char control = '\0';
    do {
        int originalMatrix[3][4];
        int transposedMatrix[4][3];

        cout << "***********************************" << endl;
        cout << "         17 矩阵转置" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个 3x4 的整数矩阵：" << endl;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << "第 " << i + 1 << " 行，第 " << j + 1 << " 列：";
                cin >> originalMatrix[i][j];
            }
        }

        transpose_matrix(originalMatrix, transposedMatrix);

        print_matrix("\n原始矩阵是：", &originalMatrix[0][0], 3, 4);
        print_matrix("\n转置后的矩阵是：", &transposedMatrix[0][0], 4, 3);

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理求对角线和
int sum_diagonal_elements(int matrix[3][3], int l) {
    int sum = 0;
    for (int i = 0; i < l; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

void diagonal_sum() {
    char control = '\0';
    do {
        const int SIZE = 3;
        int matrix[SIZE][SIZE];

        cout << "***********************************" << endl;
        cout << "         18 求对角线和" << endl;
        cout << "***********************************" << endl;
        cout << "请输入一个 3x3 的整数矩阵：" << endl;

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << "第 " << i + 1 << " 行，第 " << j + 1 << " 列：";
                cin >> matrix[i][j];
            }
        }

        int diagonalSum = sum_diagonal_elements(matrix, SIZE);

        print_matrix("\n输入的矩阵是：", &matrix[0][0], SIZE, SIZE);
        cout << "\n主对角线元素的和是：" << diagonalSum << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理统计单词个数
void count_words() {
    char control = '\0';
    do {
        const int SIZE = 256;
        char line[SIZE];

        cout << "***********************************" << endl;
        cout << "         19 统计单词个数 " << endl;
        cout << "***********************************" << endl;
        cout << "请输入一行字符（单词间用空格分隔）：" << endl;

        getchar();
        fgets(line, SIZE, stdin);

        int count = 0;
        bool index = false;

        for (int i = 0; line[i] != '\0'; i++) {
            if ((line[i] >= 'a' && *line <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
                if (!index)
                {
                    count++;
                    index = true;
                }
            }
            else index = false;
        }

        cout << "该行中有 " << count << " 个单词。" << endl;

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}




// 处理静态创建链表
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

void static_linked_list() {

    cout << "***********************************" << endl;
    cout << "         20 静态创建链表" << endl;
    cout << "***********************************" << endl;

    ListNode node1 = { 1, NULL };
    ListNode node2 = { 2, NULL };
    ListNode node3 = { 3, NULL };
    ListNode node4 = { 4, NULL };

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;

    printf("静态创建的链表数据为：\n");
    for (ListNode* current = &node1; current != NULL; current = current->next) {
        printf("%d -> ", current->data);
    }
    printf("NULL\n");

    cout << "返回主菜单..." << endl;
    Sleep(2000);
    clear_screen();
}

// 处理动态创建链表
void create_linked_list(ListNode*& head) {
    int value;
    cout << "请输入正整数（输入负数结束）：" << endl;

    while (true) {
        cin >> value;
        if (value < 0) break;

        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        if (newNode == NULL) {
            cerr << "内存分配失败" << endl;
            exit(1);
        }
        newNode->data = value;
        newNode->next = NULL;

        // 如果是第一个节点，则设置为头节点
        if (!head) {
            head = newNode;
        }
        else {
            // 否则找到链表末尾并插入新节点
            ListNode* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
}

void print_linked_list(const ListNode* head) {
    cout << "链表中的数据为：" << endl;
    for (const ListNode* current = head; current != NULL; current = current->next) {
        cout << current->data << " -> ";
    }
    cout << "NULL" << endl;
}

void dynamic_linked_list() {
    char control = '\0';
    do {
        cout << "***********************************" << endl;
        cout << "         20 动态创建链表" << endl;
        cout << "***********************************" << endl;

        ListNode* head = NULL; // 初始化链表为空

        create_linked_list(head);
        print_linked_list(head);

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理学生成绩排序
typedef struct {
    char id[20];
    char name[50];
    float score;
} Student;

void B_Sort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].score > arr[j + 1].score) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void P_Students(const Student arr[], int n) {
    cout << "排序后的学生信息：" << endl;
    cout << "学号\t姓名\t成绩" << endl;
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%.2f\n", arr[i].id, arr[i].name, arr[i].score);
    }
}

void P_overall_and_average(const Student arr[], int n) {
    float overall = 0.0;
    for (int i = 0; i < n; i++) {
        overall += arr[i].score;
    }
    float average = overall / n;
    printf("总成绩: %.2f\n", overall);
    printf("平均成绩: %.2f\n", average);
}

void students_score() {
    char control = '\0';
    do {
        const int SIZE = 10;
        Student students[SIZE];

        cout << "***********************************" << endl;
        cout << "         22 学生成绩排序" << endl;
        cout << "***********************************" << endl;
        cout << "请输入10个学生的信息：" << endl;

        for (int i = 0; i < SIZE; i++) {
            cout << "学生 " << i + 1 << ":" << endl;
            cout << "学号：";
            cin >> students[i].id;
            cout << "姓名：";
            getchar();
            cin.getline(students[i].name, sizeof(students[i].name));
            cout << "成绩：";
            cin >> students[i].score;
            cout << endl;
        }

        B_Sort(students, SIZE);
        P_Students(students, SIZE);
        P_overall_and_average(students, SIZE);

        cout << "按 0 返回，按其他任意键继续：";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// 处理学生成绩普涨10分
void add_ten_points() {
    cout << "***********************************" << endl;
    cout << "         23 学生成绩普涨10分" << endl;
    cout << "***********************************" << endl;

    FILE* file = fopen(FILE_PATH, "r+");
    if (file == NULL) {
        perror("无法打开文件");
        return;
    }

    float scores[10];
    int count = 0;

    float score;
    while (fscanf(file, "%f", &score) == 1) {
        scores[count++] = score + 10.0f;
        int c;
        while ((c = fgetc(file)) != EOF && c != '\n' && c != '\r');
    }

    fclose(file);

    file = fopen(FILE_PATH, "w");
    if (file == NULL) {
        perror("无法重新打开文件以写入");
        return;
    }

    // 写入更新后的成绩，确保最后一个数据后没有多余的换行符
    for (int i = 0; i < count; i++) {
        fprintf(file, "%.2f", scores[i]);
        if (i < count - 1) {
            fprintf(file, "\n");
        }
    }

    fclose(file);

    cout << "写入完成(′▽`〃)  "<<endl;
    cout << "返回主菜单..." << endl;
    Sleep(2000);
    clear_screen();
}