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

//����
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
        cout << "��ѡ��һ��ѡ�";
        cin >> select;
        clear_screen();
        switch (select) {
        case 1:
            addition();// ����ӷ�
            break;
        case 2:
            subtraction();// �������
            break;
        case 3:
            multiplication();// ����˷�
            break;
        case 4:
            division();// �������
            break;
        case 5:
            is_count_digits();// �����ж����ֵ�λ��
            break;
        case 6:
            circle_area();// �������Բ���
            break;
        case 7:
            is_leap_year();// �����ж�����
            break;
        case 8:
            grade_conversion();// ����ɼ�ת��
            break;
        case 9:
            odd_sum();// �������������(for)
            break;
        case 10:
            even_sum();// �������ż����(while)
            break;
        case 11:
            multiples_of_three();// �������3�ı���(do-while)
            break;
        case 12:
            find_divisible_by_3_and_5();// ������3��5��������
            break;
        case 13:
            find_narcissistic_numbers();// ������ˮ�ɻ���
            break;
        case 14:
            find_maximum_value();// ���������ֵ
            break;
        case 15:
            find_maximum_minimum_value();// �����������Сֵ
            break;
        case 16:
            test_bubble_sort();// ����ð������
            break;
        case 17:
            perform_matrix_transpose();// �������ת��
            break;
        case 18:
            diagonal_sum();// ������Խ��ߺ�
            break;
        case 19:
            count_words();// ����ͳ�Ƶ��ʸ���
            break;
        case 20:
            static_linked_list();// ����̬��������
            break;
        case 21:
            dynamic_linked_list();// ����̬��������
            break;
        case 22:
            students_score();// ����ѧ���ɼ�����
            break;
        case 23:
            add_ten_points();// ����ѧ���ɼ�����10��
            break;
        case 24:
            // �����˳�
            if (exit_all() == 0) {
                running = false;
            }
            break;
        default:
            cout << "��Чѡ�������ѡ��" << endl;
            cout << " > _ < " << endl;
            Sleep(1000);
            clear_screen();
            continue; 
        }
    }
    //system("pause");
    return 0;
}

//�˵�
void showMenu() {

    const char* Menu[] = {
        "***********************************",
        "         СС������",
        "         1 �ӷ�",
        "         2 ����",
        "         3 �˷�",
        "         4 ����",
        "         5 �ж����ֵ�λ��",
        "         6 ����Բ���",
        "         7 �ж�����",
        "         8 �ɼ�ת��",
        "         9 �����1��������֮��������� ��for��",
        "         10 �����1��������֮���ż���� ��while��",
        "         11 �����1��������֮������3�ı��� ��do-while��",
        "         12 �󼴱�3�����ֱ�5��������",
        "         13 ��ˮ�ɻ���",
        "         14 �����ֵ",
        "         15 �������Сֵ",
        "         16 ð������",
        "         17 ����ת��",
        "         18 ��Խ��ߺ�",
        "         19 ͳ�Ƶ��ʸ���",
        "         20 ��̬��������",
        "         21 ��̬��������",
        "         22 ѧ���ɼ�����",
        "         23 ѧ���ɼ�����10��",
        "         24 �˳�",
        "***********************************"
    };
    int item = sizeof(Menu) / sizeof(Menu[0]);

    for (int i = 0; i < item; i++) {
        cout << Menu[i] << endl;
    }
}

// �����˳�
int exit_all() {
    cout << "***********************************" << endl;
    cout << "         �����Ҫ�˳���" << endl;
    cout << "***********************************" << endl;
    cout << "    1 ȷ��            2 ����" << endl;
    char choice = '\0';
    while (true) {
        choice = getch();
        if (choice && (choice == '1' || choice == '2')) break;
        else cout << "������Ч�����������루1 �� 2����" << endl;
    }
    if (choice == '1') {
        cout << "�����˳�..." << endl;
        Sleep(500);
        clear_screen();
        return 0;
    }
    else
        cout << "�������˵�..." << endl;
        Sleep(500);
        clear_screen();
        return 1;
}

// ����ӷ�
void addition() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         1 �ӷ�" << endl;
        cout << "***********************************" << endl;
        cout << "���������������мӷ����㣺" << endl;
        cout << "��һ������";
        cin >> num1;
        cout << "�ڶ�������";
        cin >> num2;

        double result = num1 + num2;
        cout << "����ǣ�" << result << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    }while (control != '0');
}

// �������
void subtraction() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         2 ����" << endl;
        cout << "***********************************" << endl;
        cout << "���������������м������㣺" << endl;
        cout << "��һ������";
        cin >> num1;
        cout << "�ڶ�������";
        cin >> num2;

        double result = num1 - num2;
        cout << "����ǣ�" << result << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    }while (control != '0');
}

// ����˷�
void multiplication() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         3 �˷�" << endl;
        cout << "***********************************" << endl;
        cout << "���������������г˷����㣺" << endl;
        cout << "��һ������";
        cin >> num1;
        cout << "�ڶ�������";
        cin >> num2;

        double result = num1 * num2;
        cout << "����ǣ�" << result << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������
void division() {
    char control = '\0';
    do {
        double num1, num2;
        cout << "***********************************" << endl;
        cout << "         4 ����" << endl;
        cout << "***********************************" << endl;
        cout << "���������������г������㣺" << endl;
        cout << "��һ������";
        cin >> num1;
        cout << "�ڶ�������";
        cin >> num2;

        if (num2 == 0) {
            cout << "���󣺳�������Ϊ0��" << endl;
            Sleep(500);
            return;
        }

        double result = num1 / num2;
        cout << "����ǣ�" << result << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �����ж����ֵ�λ��
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
        cout << "         5 �ж����ֵ�λ�� " << endl;
        cout << "***********************************" << endl;
        cout << "������һ������: ";
        cin >> number;

        int digits = count_digits(number);
        cout << "���� " << number << " ��λ����: " << digits << endl;

        cout << "�� 0 ���أ������������������";
        getchar();
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������Բ���
void circle_area() {
    char control = '\0';
    do {
        double r;
        cout << "***********************************" << endl;
        cout << "         6 ����Բ��� " << endl;
        cout << "***********************************" << endl;
        cout << "������Բ�İ뾶��" << endl;
        cin >> r;

        if (r < 0) {
            cout << "���󣺰뾶����Ϊ������" << endl;
            Sleep(1000);
            continue;
        }

        double area = PI * r * r;
        printf("����ǣ�%.2f\n", area);

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �����ж�����
void is_leap_year() {
    char control = '\0';
    do {
        int year;
        cout << "***********************************" << endl;
        cout << "         7 �ж����� " << endl;
        cout << "***********************************" << endl;
        cout << "���������:" << endl;
        cin >> year;
        if ((year % 4 == 0 && year % 100) || year % 400 == 0)
        {
            cout << "********************" << endl;
            cout << year << ",��һ�������ꡣ" << endl;
            cout << "********************" << endl;
        }
        else
        {
            cout << "********************" << endl;
            cout << year << ",��һ�겻�����ꡣ" << endl;
            cout << "********************" << endl;
        }
        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ����ɼ�ת��
void grade_conversion() {
    char control = '\0';
    do {
        int score;
        cout << "***********************************" << endl;
        cout << "         8 �ɼ�ת�� " << endl;
        cout << "***********************************" << endl;
        while (true) {
            cout << "������ɼ���0-100����";
            cin >> score;
            if (score < 0 || score > 100) {
                cout << "���󣺳ɼ�Ӧ��0��100֮�䣬���������룡" << endl;
                Sleep(1000);
            }
            else break;
        }

        switch (score / 10) {
        case 10:
        case 9: cout << "�ɼ��ȼ���A\n"; break;
        case 8: cout << "�ɼ��ȼ���B\n"; break;
        case 7: cout << "�ɼ��ȼ���C\n"; break;
        case 6: cout << "�ɼ��ȼ���D\n"; break;
        default: cout << "�ɼ��ȼ���E\n"; break;
        }

        cout << "�ɼ���" << score << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������������(for)
void odd_sum() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         9 �����1��������֮��������� ��for��" << endl;
        cout << "***********************************" << endl;
        cout << "������һ����������";
        cin >> num;

        if (num <= 0) {
            cout << "����������һ������0����������" << endl;
            Sleep(1000);
            continue;
        }

        int sum = 0;
        for (int i = 1; i <= num; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << "��1��" << num << "֮����������ǣ�" << sum << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������ż����(while)
void even_sum() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         10 �����1��������֮���ż���� ��while��" << endl;
        cout << "***********************************" << endl;
        cout << "������һ����������";
        cin >> num;

        if (num <= 0) {
            cout << "����������һ������0����������" << endl;
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

        cout << "��1��" << num << "֮���ż�����ǣ�" << sum << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������3�ı���(do-while)
void multiples_of_three() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         11 �����1��������֮������3�ı��� ��do-while��" << endl;
        cout << "***********************************" << endl;
        cout << "������һ����������";
        cin >> num;

        if (num <= 0) {
            cout << "����������һ������0����������" << endl;
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
            cout << "��1��" << num << "֮��û��3�ı�����" << endl;
        }
        else {
            cout << "\n������1��" << num << "֮�������3�ı�����" << endl;
        }

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ������3��5��������
void find_divisible_by_3_and_5() {
    char control = '\0';
    do {
        int num;
        cout << "***********************************" << endl;
        cout << "         12 �󼴱�3�����ֱ�5��������" << endl;
        cout << "***********************************" << endl;
        cout << "������һ����������";
        cin >> num;

        if (num <= 0) {
            cout << "����������һ������0����������" << endl;
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
            cout << "\n��1��" << num << "֮��û��ͬʱ��3��5����������" << endl;
        }
        else {
            cout << "\n������1��" << num << "֮������ͬʱ��3��5����������" << endl;
        }

        cout << "�� 0 ���أ������������������";
        control = getch();
        
        clear_screen();
    } while (control != '0');
}

// ������ˮ�ɻ���
bool is_narcissistic_number(int number) {
    int original = number;
    int sum = 0;
    int digits = count_digits(number); // �������ֵ�λ��
    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }
    return sum == original;
}

void find_narcissistic_numbers() {
        cout << "***********************************" << endl;
        cout << "         13 ��ˮ�ɻ���" << endl;
        cout << "***********************************" << endl;

        bool index = false;
        for (int i = 100; i <= 999; i++) {
            if (is_narcissistic_number(i)) {
                cout << i << "  ";
                index = true;
            }
        }

        if (!index) {
            cout << "\nû���ҵ���λ����Χ�ڵ�ˮ�ɻ�����" << endl;
        }
        else {
            cout << "\n������������λ����Χ�ڵ�ˮ�ɻ�����" << endl;
        }

        cout << "�������˵�..." << endl;
        Sleep(2000);
        clear_screen();
}

// ���������ֵ
int find_max(int a, int b) {
    return (a > b) ? a : b;
}

void find_maximum_value() {
    char control = '\0';
    do {
        int num1, num2;
        cout << "***********************************" << endl;
        cout << "         14 �����ֵ" << endl;
        cout << "***********************************" << endl;
        cout << "����������������" << endl;
        cout << "��һ��������";
        cin >> num1;
        cout << "�ڶ���������";
        cin >> num2;

        int max_value = find_max(num1, num2);
        cout << "���������нϴ���ǣ�" << max_value << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �����������Сֵ
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
        cout << "         15 �������Сֵ" << endl;
        cout << "***********************************" << endl;
        cout << "����������������" << endl;
        cout << "��һ��������";
        cin >> num1;
        cout << "�ڶ���������";
        cin >> num2;

        find_max_min(&num1, &num2);

        cout << "�ϴ�ֵ�ǣ�" << num1 << endl;
        cout << "��Сֵ�ǣ�" << num2 << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ����ð������
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
        cout << "         16 ð������" << endl;
        cout << "***********************************" << endl;
        cout << "������10��������" << endl;

        for (int i = 0; i < SIZE; i++) {
            cout << "�� " << i + 1 << " ������";
            cin >> number[i];
        }

        bubble_sort(number, SIZE);

        cout << "\n�����Ľ���ǣ�" << endl;
        for (int i = 0; i < SIZE; i++) {
            cout << number[i] << " ";
        }
        cout << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// �������ת��
void transpose_matrix(int original[3][4], int transposed[4][3]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            transposed[i][j] = original[j][i];
        }
    }
}

//��ӡ����
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
        cout << "         17 ����ת��" << endl;
        cout << "***********************************" << endl;
        cout << "������һ�� 3x4 ����������" << endl;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                cout << "�� " << i + 1 << " �У��� " << j + 1 << " �У�";
                cin >> originalMatrix[i][j];
            }
        }

        transpose_matrix(originalMatrix, transposedMatrix);

        print_matrix("\nԭʼ�����ǣ�", &originalMatrix[0][0], 3, 4);
        print_matrix("\nת�ú�ľ����ǣ�", &transposedMatrix[0][0], 4, 3);

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ������Խ��ߺ�
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
        cout << "         18 ��Խ��ߺ�" << endl;
        cout << "***********************************" << endl;
        cout << "������һ�� 3x3 ����������" << endl;

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << "�� " << i + 1 << " �У��� " << j + 1 << " �У�";
                cin >> matrix[i][j];
            }
        }

        int diagonalSum = sum_diagonal_elements(matrix, SIZE);

        print_matrix("\n����ľ����ǣ�", &matrix[0][0], SIZE, SIZE);
        cout << "\n���Խ���Ԫ�صĺ��ǣ�" << diagonalSum << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ����ͳ�Ƶ��ʸ���
void count_words() {
    char control = '\0';
    do {
        const int SIZE = 256;
        char line[SIZE];

        cout << "***********************************" << endl;
        cout << "         19 ͳ�Ƶ��ʸ��� " << endl;
        cout << "***********************************" << endl;
        cout << "������һ���ַ������ʼ��ÿո�ָ�����" << endl;

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

        cout << "�������� " << count << " �����ʡ�" << endl;

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}




// ����̬��������
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

void static_linked_list() {

    cout << "***********************************" << endl;
    cout << "         20 ��̬��������" << endl;
    cout << "***********************************" << endl;

    ListNode node1 = { 1, NULL };
    ListNode node2 = { 2, NULL };
    ListNode node3 = { 3, NULL };
    ListNode node4 = { 4, NULL };

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;

    printf("��̬��������������Ϊ��\n");
    for (ListNode* current = &node1; current != NULL; current = current->next) {
        printf("%d -> ", current->data);
    }
    printf("NULL\n");

    cout << "�������˵�..." << endl;
    Sleep(2000);
    clear_screen();
}

// ����̬��������
void create_linked_list(ListNode*& head) {
    int value;
    cout << "�����������������븺����������" << endl;

    while (true) {
        cin >> value;
        if (value < 0) break;

        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        if (newNode == NULL) {
            cerr << "�ڴ����ʧ��" << endl;
            exit(1);
        }
        newNode->data = value;
        newNode->next = NULL;

        // ����ǵ�һ���ڵ㣬������Ϊͷ�ڵ�
        if (!head) {
            head = newNode;
        }
        else {
            // �����ҵ�����ĩβ�������½ڵ�
            ListNode* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
}

void print_linked_list(const ListNode* head) {
    cout << "�����е�����Ϊ��" << endl;
    for (const ListNode* current = head; current != NULL; current = current->next) {
        cout << current->data << " -> ";
    }
    cout << "NULL" << endl;
}

void dynamic_linked_list() {
    char control = '\0';
    do {
        cout << "***********************************" << endl;
        cout << "         20 ��̬��������" << endl;
        cout << "***********************************" << endl;

        ListNode* head = NULL; // ��ʼ������Ϊ��

        create_linked_list(head);
        print_linked_list(head);

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ����ѧ���ɼ�����
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
    cout << "������ѧ����Ϣ��" << endl;
    cout << "ѧ��\t����\t�ɼ�" << endl;
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
    printf("�ܳɼ�: %.2f\n", overall);
    printf("ƽ���ɼ�: %.2f\n", average);
}

void students_score() {
    char control = '\0';
    do {
        const int SIZE = 10;
        Student students[SIZE];

        cout << "***********************************" << endl;
        cout << "         22 ѧ���ɼ�����" << endl;
        cout << "***********************************" << endl;
        cout << "������10��ѧ������Ϣ��" << endl;

        for (int i = 0; i < SIZE; i++) {
            cout << "ѧ�� " << i + 1 << ":" << endl;
            cout << "ѧ�ţ�";
            cin >> students[i].id;
            cout << "������";
            getchar();
            cin.getline(students[i].name, sizeof(students[i].name));
            cout << "�ɼ���";
            cin >> students[i].score;
            cout << endl;
        }

        B_Sort(students, SIZE);
        P_Students(students, SIZE);
        P_overall_and_average(students, SIZE);

        cout << "�� 0 ���أ������������������";
        control = getch();
        clear_screen();
    } while (control != '0');
}

// ����ѧ���ɼ�����10��
void add_ten_points() {
    cout << "***********************************" << endl;
    cout << "         23 ѧ���ɼ�����10��" << endl;
    cout << "***********************************" << endl;

    FILE* file = fopen(FILE_PATH, "r+");
    if (file == NULL) {
        perror("�޷����ļ�");
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
        perror("�޷����´��ļ���д��");
        return;
    }

    // д����º�ĳɼ���ȷ�����һ�����ݺ�û�ж���Ļ��з�
    for (int i = 0; i < count; i++) {
        fprintf(file, "%.2f", scores[i]);
        if (i < count - 1) {
            fprintf(file, "\n");
        }
    }

    fclose(file);

    cout << "д�����(�䨌`��)  "<<endl;
    cout << "�������˵�..." << endl;
    Sleep(2000);
    clear_screen();
}