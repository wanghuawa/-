#include <stdio.h>
#include <stdio.h>
#include<math.h>
//int main() {////////1002
//	float yuanz = 3.14159;
//	printf("������Բ�İ뾶��");
//	float r;
//	scanf("%f", &r);
//	printf("Բ������ǣ�%.5f\n", r*yuanz*2);
//	return 0;
//}
//1001
#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main() {
//    int base = 4;
//    float height;
//    printf("please input:");
//    scanf("%f", &height);
//    float area = 0.5 * base * height;
//    printf("sanjiao:%.2f\n", area);
//    return 0;
//}
//#include <stdio.h>

//int main() {
//    int arr[100];
//    int n, i,js,b;
//    printf("���������ֵĸ��� n��");
//    scanf("%d", &n);
//    printf("������ %d �����֣�", n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("������Ҫ���������֣�");
//    scanf("%d", &js);
//    for (b=0; b < n; b++) {
//        if (js == arr[b]) {
//            printf("�������������±�Ϊ��%d", b);
//
//        }
//        else {
//            printf("NO FOUND");
//           
//        }
//
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1003
//int main() {
//    int arr[100];
//    int n, i, js;
//    printf("���������ֵĸ��� n��");
//    scanf("%d", &n);
//    printf("������ %d �����֣�", n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("������Ҫ���������֣����� -1 ��������");
// int main() {
//    int arr[100];
//    int n, i, js;
//    printf("���������ֵĸ��� n��");
//    while(1){
//       scanf("%d",&arr[i]);
//       if(js==-1)
//         break;
//    i++;}
// scanf("%d", &js);
//    while (js != -1) {
//        int found = 0;
//        for (i = 0; i < n; i++) {
//            if (js == arr[i]) {
//                printf("������������ %d �������±�Ϊ��%d\n", js, i);
//                found = 1;
//            }
//        }
//        if (!found) {
//            printf("���� %d δ�ҵ���NO FOUND��\n", js);
//        }
//        printf("������Ҫ���������֣����� -1 ��������");
//        scanf("%d", &js);
//    }
//    return 0;
//}//
// 
// 
// 
// 
// 
// 
// 
//                                                   �и��򵥵�һ�����������������nȷ�������ȵķ�ʽ�е�̫������
// whileѭ����
// int i;
// while(1){
// scanf("%d",&arr[i]);
// if(js==-1)
//    break;
// i++
// 
// 
// }//ͨ�����ѭ����ÿһ�������������ȫ���浽arr����
//    scanf("%d", &js);
//    while (js != -1) {
//        int found = 0;//���û���ж���Ϸ��������ôֱ��while(1)���ɣ�
//        for (i = 0; i < n; i++) {
//            if (js == arr[i]) {
//                printf("������������ %d �������±�Ϊ��%d\n", js, i);
//                found = 1;
//            }
//        }
//        if (!found) {
//            printf("���� %d δ�ҵ���NO FOUND��\n", js);
//        }
//        printf("������Ҫ���������֣����� -1 ��������");
//        scanf("%d", &js);
//    }
//    return 0;
//}//
////1003
//#include <math.h>
//int main() {//1004
//	int a, b, c;
//	
//	printf("������ֱ������������ֱ�Ǳߵĳ��ȣ�");
//	scanf("%f,%f", &a,&b);
//	c = a * a + b * b;
//	double rusult = sqrt(c);
//	printf("���ռ������ֱ�������γ���Ϊ��%.5lf", rusult = sqrt(c));
//	return 0;
//}//�õ���һ��������ѧ�Ŀ�
// #include <stdio.h>
//#include <math.h>
//
//int main() {
//	float a, b;
//	scanf("%f %f", &a, &b);
//	float c = a * a + b * b;
//	float result = sqrt(c);
//	printf("%.5lf", result);
//	return 0;
//}//�޸ĺ�Ĵ���
//1005
//int main() {
//	int a, b, c, d;
//	printf("ok�������濪�����ǵĽ��С����");
//	printf("�밴��1��ʼ���򣬰���2��������");
//
//	scanf("%d", &d);
//	
//	while (d == 1) {
//		printf("������ax^2+bx+c=0�е�abc:");
//
//		scanf("%d%d%d", &a, &b, &c);//����ط�%d���м䲻����douhao
//		if (b * b - 4 * a * c < 0) {
//			printf("�Բ������������ķ�����û��ʵ��");
//		}
//		else if (b* b - 4 * a * c == 0) {
//			printf("��������ĺ�����һ��ʵ��Ϊ��%.5f",-b/2*a);
//
//			
//		}
//		else if (b * b - 4 * a * c > 0) {
//			float p=0,l,k;
//			float j = sqrt(p);
//			p = b * b - 4 * a * c;
//			l = -b + p / 2*a;
//			k = -b + p / 2 * a;
//			if (l >= k) {
//				printf("������������ʵ�����нϴ����Ϊ%.5f", l);
//			}
//			else {
//				printf("������������ʵ�����нϴ����Ϊ%.5f", k);
//			}
//		}
//		if (d != 1) {
//			break;
//	    }
//	}
//	return 0;
//}
//1006,�����������������
//int main() {
//	unsigned int a, b, c, d;
//	printf("����������һ����λ���֣�");
//	scanf("%d%", &a);
//	if (0 < a < 1000) {
//		b = a / 100;
//		c = (a - b*100);
//		if (c < 10) {
//			d = c;
//			c = 0;
//		}
//		else if (c >= 10) {
//			d = c % 10;
//			c = c / 10;
//		}
//
//		
//		printf("��������λ���ĸ�λ�ǣ�%d\n", b);
//		printf("��������λ����ʮλ�ǣ�%d\n",c);
//		printf("�������λ���İ�λ�ǣ�%d\n", d);
//	}
//	
//	return 0;
//}
//1007��ž���һ������ʱ��ת��Ϊ����ʱ���һ������
//��Ҫ��һ�����printf("%02d%02d",hours,minutes);�������˼�Ǳ�ʾһ�����ο��Ϊ2��Ȼ�������������λ��ǰ�油��
//1008,���������λ����Ȼ���ӡ����Ӧ����ģ���Ѱ˼swith����ֻ������һ�����𣿹��������ŷ�������˼
//int main() {
//	int a, b,c;
//	printf("��������λ����");
//	scanf("%d", &a);
//	c = a / 10;
//	b = a % 10;
//
//	
//	
//	switch(b) {
//		case 1:
//			printf("Faint signals, barely perceptible");
//			break;
//		case 2:
//			printf("Very weak signals");
//			break;
//		case 3:
//			printf("Weak signals");
//			break;
//		case 4:
//			printf("Fair signals");
//			break;
//		case 5:
//			printf("Fairly good signals");
//			break;
//		case 6:
//			printf("Good signals");
//			break;
//		case 7:
//			printf("Moderately strong signals");
//			break;
//		case 8:
//			printf("Strong signals");
//			break;
//		case 9:
//			printf("Extremely strong signals");
//			break;
//	
//	}
//     printf(",");
//	switch(c) {
//		case 1:
//			printf("Unreadable");
//			break;
//		case 2:
//			printf("Barely readable, occasional words distinguishable");
//			break;
//		case 3:
//			printf("Readable with considerable difficulty");
//			break;
//		case 4:
//			printf("Readable with practically no difficulty");
//			break;
//		case 5:
//			printf("Perfectly readable");
//			break;
//
//	}
//	return 0;
//}
//1009,�����Ҳ�����ں����ҵ��뷨�Ǹ������飬Ȼ��ͨ��sizeof(arr)/sizeof(arr[0]),���Ե��ֽڵĴ�С���������Ԫ�صĸ���
//int main() {
//	unsigned int arr[100000];
//	unsigned int wh[100000];
//	unsigned int wjh[100000];
//	int i = 0;
//	int a=0;
//	printf("������һϵ������������-1������Ϸ����");
//	while (1) {
//		scanf("%d", &arr[i]);
//		i++;
//
//	}
//	while (1) {
//		if (arr[a] % 2 != 1) {
//			wh[a] = arr[a];//ż��
//		}
//		if (arr[a] % 2 == 1) {
//			wjh[a] = arr[a];//����
//		}
//		a++;
//
//	}
//	int js = sizeof(wjh) / wjh[0];
//	int os = sizeof(wh) / wh[0];
//
//	printf("�������������У������ĸ���Ϊ��%d\n", js);
//	printf("�������������У�ż���ĸ���Ϊ��%d\n", os);
//
//
//	return 0;
//}
//int main() {
//    int arr[100];
//    int i = 0;
//    int js = 0;
//    printf("���������֣�����-1��������\n");
//    while (1) {
//        scanf("%d", &arr[i]);
//        if (arr[i] == -1) {
//            break;
//        }
//        i++;
//    }
//    printf("������Ҫ���������֣�����-1��������\n");
//    scanf("%d", &js);
//    while (js != -1) {
//        int found = 0;
//        for (int j = 0; j < i; j++) {
//            if (js == arr[j]) {
//                printf("������������ %d �������±�Ϊ:%d\n", js, j);
//                found = 1;
//                break;
//            }
//        }
//        if (!found) {
//            printf("���� %d δ�ҵ�(NO FOUND)\n", js);
//        }
//        printf("������Ҫ���������֣�����-1��������\n");
//        scanf("%d", &js);
//    }
//    return 0;
//}
//�������������λ������
//int main() {
//	int arr[100];
//	int i=0,a,b=0;
//	printf("����������(-1)�������룺");
//	while (1) {
//		scanf("%d", &arr[i]);
//		if (arr[i] == -1)
//			break;
//		i++;
//	}
//	for (a = 0; a < sizeof(arr) / sizeof(arr[0]); i++) {
//		b += arr[a];
//	}
//	printf("���յĽ��Ϊ��%d", b);
//	return 0;
//}
#include <stdio.h>

//int main() {
//    int arr[100];
//    int i = 0, a, b = 0;
//    printf("����������(-1)��������");
//    while (1) {
//        int num;
//        scanf("%d", &num);
//        arr[i] = num;
//        if (arr[i] == -1) {
//            break;
//        }
//        i++;
//    }
//    for (a = 0; a < i; a++) {
//        b += arr[a];
//    }
//    printf("���յĽ��Ϊ:%d", b);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int a = 4;
//    float b = 0, c;
//        scanf_s("%f", &b);
//    c = (a * b) / 2;
//    printf("%.2lf", c);
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	float a;
//	float b = 3.14159;
//	scanf("%f", &a);
//	printf("%.5f", a * b);
//	return 0;
//}
//#include <math.h>
//int main() {
//	int a, b, c;
//	
//	
//	scanf("%f,%f", &a,&b);
//	c = a * a + b * b;
//	double rusult = sqrt(c);
//	printf("%.5lf", rusult = sqrt(c));
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int i, b, c[100000], d, e = 0, n,k=0;
//	//���뻷��
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &c[i]);
//	}
//	scanf("%d", &b);//��������Ĵ���
//	scanf("%d", &d);//����������������
//	while (e < b) {
//		if (d == c[e]) {
//			printf("%d\n", e);
//		}
//		else if (d != c[e] && e < n) {
//			printf("Not found!\n");
//			printf("%d\n", e);
//		}
//		else if (!k) {
//			printf("Not found!\n");
//			k = 1;
//		}
//		e++;
//		//	if (e>=n)//����sizeof(c)/sizeof(c[0])��׼ȷ����Ϊ����Ĳ���������Ĵ�С��������ĳ��ȳ�ͻ
//		//		break;
//		//}
//		return 0;
//	}
//
                                         ////˳����ң�����ñ����������飬���Ҫ������ڱȽϿ����λ�õĻ������ǣ�����Ч
//int sequentialSearch(int arr[], int n, int key) {
//    for (int i = 0; i < n; i++) {
//        if (arr[i] == key) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int nums[10] = { 6,1,8,2,3,10,4,5,9,7 };
//    int key = 5;
//    printf("����Ϊ:");//��ʵ��һ�����Բ�Ҫ��ֱ��������
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("Ҫ���ҵ�����Ϊ: %3d\n", key);
//    int result = sequentialSearch(nums, 10, key);
//    if (result != -1) {
//        printf("nums[%d]ΪҪ���ҵ�����\n", result);//����е���˼��ͻȻ��㶮����ֵ��
//    }
//    else {
//        printf("������û��%d\n", key);
//    }
//    _getch();//�������һ������������Ķ���
//    return 0;
//}
//int binarySearch(int arr[], int n, int k) {                                //���ֲ��ҵĴ���
//    int low = 0;
//    int high = n - 1;//��Ϊ�����Ǵ�0��ʼ��
//    while (low <= high) {
//        int mid = (low + high) / 2;
//        if (k == arr[mid]) {
//            return mid;
//        }
//        else if (k < arr[mid]) {//�����δ���ҵ����֣���ʵ�����ֻ֮��һ�������1��2��4��5��7��9�������������6����λ��Сlow=0��high=5,��������ǲ���3������֣�
//            //��β����ɵ�2�����Ǵ��ڶ��ģ�����low��Ϊ3��Ȼ�������Ϊ4��Ȼ��2��С��5�ģ�high��Ϊ3��Ȼ������ִ�е�ǰѭ������k������arr[mid],Ȼ����ִ�еĻ���ִ�еڶ���if,Ȼ��
//            //�ͻ����high<low������ѭ����
//            high = mid - 1;
//        }
//        else {
//            low = mid + 1;
//        }
//    }
//    return -1;//���û���ҵ�if��k==arr[mid]��������䣬����ִ�λ�����磬���Ҫ���ҵ�������mid����ߣ���ôhigh��λ�þͱ������ƶ�
//}
//int main() {
//    int nums[10] = { 1,3,4,8,10,13,21,25,39,57 };
//    int key = 25;
//    printf("����Ϊ:");
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("Ҫ���ҵ�����Ϊ: %3d\n\n", key);
//    int result = binarySearch(nums, 10, key);
//    if (result != -1) {
//        printf("nums[%d] ΪҪ���ҵ�����\n", result);
//    }
//    else {
//        printf("������û��%d\n", key);
//    }
//    return 0;
//}
//int binarySearch(int arr[], int n, int k) {
//    int low = 0;
//    int high = n - 1;
//    while (low <= high) {
//        int mid = (low + high) / 2;
//        if (k == arr[mid]) {
//            return mid;
//        }
//        else if (k < arr[mid]) {
//            high = mid - 1;
//        }
//        else {
//            low = mid + 1;
//        }
//    }
//    return -1;
//}
//int main() {
//    int nums[10] = { 1,3,4,8,10,13,21,25,39,57 };
//    int key = 25;
//    printf("����Ϊ:");
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("Ҫ���ҵ�����Ϊ: %3d\n\n", key);
//    int result = binarySearch(nums, 10, key);//����������������ڶ��ֲ���
//    if (result != -1) {
//        printf("nums[%d] ΪҪ���ҵ�����\n", result);
//    }
//    else {
//        printf("������û��%d\n", key);
//    }
//    return 0;
//}
//#include <stdio.h>
#include<malloc.h>
//int binarySearch(int arr[], int n, int target) {
//    int left = 0;
//    int right = n - 1;
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] == target) {
//            return mid;
//        }
//        else if (arr[mid] < target) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));//////////////////////////�˶�����˶��ܿ�ѷ
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int m;
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++) {
//        int target;
//        scanf("%d", &target);
//        int result = binarySearch(arr, n, target);
//        if (result != -1) {
//            printf("%d\n", result);
//        }
//        else {
//            printf("Not found!\n");
//        }
//    }
//    return 0;
//}
// #include <stdio.h>
//int binarySearch(int arr[], int n, int key) {
//    int a = 0;
//    int b = n - 1;
//    
//    while (a <= b) {
//        int c = a + b / 2;
//        if (arr[c] < key) {
//            a = c + 1;
//        }
//        else if (arr[c] > key) {
//            b = c - 1;
//        }
//        else if(arr[c] == key) {
//            return c;
//
//        }
//    }
//    return -1;
//}
//int main() {
//    int a, b, c, d;
//    scanf("%d", &a);
//    int f[a];
//    for (int b = 0; b < a; b++) {
//        scanf("%d", f[b]);
//   }
//    scanf("%d", &c);
//    for (int d = 0; d < c; d++) {
//        int e;
//        scanf("d", &e);
//        int result = binarySearch(f, a, e);
//        if (result == -1) {
//            printf("Not found!\n");
//        }
//        if (result != -1) {
//            printf("%d\n", result);
//        }
//    }
//
//
//
//    return 0;
//}
//int main() {
//    int a=0, b=0;
//    scanf("%d:%d", &a, &b);
//    if (a == 12) {
//        if (b < 10) {
//            printf("12:0%d PM\n",b);
//        }
//        else {
//            printf("12:%d PM\n", b);
//        }
//        
//    }
//    if (a == 0) {
//        if (b< 10) {
//            printf("12:0%d AM\n", b);
//        }
//        else {
//            printf("12:%d AM\n", b);
//        }
//    }
//    if (a > 12) {
//        int c = a - 12;
//        if (b < 10) {
//            printf("%d:0%d PM\n",c, b);
//        }
//        else {
//            printf("%d:%d PM\n",c, b);
//        }
//    }
//    if (a < 12) {
//        if (b < 10) {
//            printf("%d:0%d AM\n",a,b);
//        }
//        else {
//            printf("%d:%d AM\n",a,b);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>                       /////////////////ð������///////////////////
//
//void Swaps_locks_(int* left, int* right);
//
//int main() {
//    // ð������
//    int arr[10] = { 1, 3, 6, 5, 2, 4, 8, 9, 7, 0 };
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 10 - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                Swaps_locks_(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//
//    // ������
//    for (int i = 0; i < 10; i++) {
//        printf("%d\t", arr[i]);
//    }
//    return 0;
//}
//
//void Swaps_locks_(int* left, int* right) {
//    int temp = *left;
//    *left = *right;
//    *right = temp;//
//}
//#include <stdio.h> ///////////////////////////////////////////ѡ��ṹ�����ֵ����Сֵ���������ð����������////////////////////////////////
//void maxmain(int* a, int* b) {
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//int main() {
//    int arr[4];
//    for (int d = 0; d < 4; d++) {
//        scanf("%d", &arr[d]);
//    }
//    for (int e = 0; e < 3; e++) {
//        for (int j = 0; j < 3 - e; j++) {
//            if (arr[j]>arr[j + 1]) {
//                maxmain(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//    printf("Largest = %d, Smallest = %d", arr[3], arr[0]);
//    return 0;
//}
//#include <stdio.h>
//#define N 100
//void find_two_largest(const int a[], int n, int* largest, int* second_largest);
//int main()
//{
//    int a[N], len;
//    int largest, second_largest;
//    scanf_s("%d", &len);
//    for (int i = 0; i < len; i++)
//    {
//        scanf_s("%d", &a[i]);
//    }
//    find_two_largest(a, len, &largest, &second_largest);
//    printf("%d %d\n", largest, second_largest);
//    return 0;
//}
//void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
//   /* for (int f = 0; f < n;f++) {
//        for (int b = 0; b < n - f; b++) {
//            if (a[b] > a[b + 1]) {
//               
//
//            }
//        }
//    }*///ԭ������ð�������ģ���û�뵽��const�ǲ����޸ĵģ�����ð�ݺ�����������������о���Ч
//    for (int i = 1; i < n; i++) {
//        *largest = *second_largest = a[0];/////////////�Ҿ�˵Ϊɶ������������ⲿѭ����һֱ���¶��������⸳ֵ�ǰ�
//        if (a[i] > *largest) {
//            *second_largest = *largest;
//            *largest = a[i];
//        }
//        else if (a[i] > *second_largest && a[i] < *largest) {
//            *second_largest = a[i];
//        }
//    }
    //void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
    //    //��ʼ�����͵ڶ���Ԫ��
    //        * largest = *second_largest = a[0];

    //    //��������
    //        for (int i = 1; i < n; i++) {
    //            if (a[i] > *largest) {
    //               // �����ǰԪ�ش������Ԫ�أ��������͵ڶ���Ԫ��
    //                    * second_largest = *largest;
    //                *largest = a[i];
    //            }
    //            else if (a[i] > *second_largest && a[i] < *largest) {
    //                //�����ǰԪ�ش��ڵڶ���Ԫ�ص�С�����Ԫ�أ����µڶ���Ԫ��
    //                    * second_largest = a[i];
    //            }
    //        }
    //}

//#include <stdio.h>
//#define N 100
//
// ���������ҵ����͵ڶ���Ԫ��
//void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
//     ��ʼ�����͵ڶ���Ԫ��
//    *largest = *second_largest = a[0];
//
//     ��������
//    for (int i = 1; i < n; i++) {
//        if (a[i] > *largest) {
//             �����ǰԪ�ش������Ԫ�أ��������͵ڶ���Ԫ��
//            *second_largest = *largest;
//            *largest = a[i];
//        }
//        else if (a[i] > *second_largest && a[i] < *largest) {
//             �����ǰԪ�ش��ڵڶ���Ԫ�ص�С�����Ԫ�أ����µڶ���Ԫ��
//            *second_largest = a[i];
//        }
//    }
//}
//
//int main() {
//    int a[N], n;
//    int largest, second_largest;
//
//     �������鳤��
//    scanf("%d", &n);
//
//     ��������Ԫ��
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//     �ҵ����͵ڶ���Ԫ��
//    find_two_largest(a, n, &largest, &second_largest);
//
//     ������
//    printf("%d %d\n", largest, second_largest);
//
//    return 0;
//}
//���Ԫ�ص�ָ�룬�е���˼
//#include <stdio.h>
//#include <limits.h>
//#define N 1005
//int* find_largest(const int a[], int n);
//int main()
//{
//    int n;
//    int a[N], * p, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    p = find_largest(a, n);
//    printf("%d", *p);
//    return 0;
//}
//int* find_largest(const int a[], int n)
//{
//    int i;
//    int* largest = (int*)a;
//    for (i = 1; i < n; i++)
//    {
//        if (a[i] > *largest)
//        {
//            largest = (int*)&a[i];
//        }
//    }
//    return largest;
//}
#include <stdio.h>

//int main() {
//    int num;
//    char ch;
//    printf("������һ���������Իس��������룺\n");
//    while ((ch = getchar()) != '\n') {
//        /*ungetc(ch, stdin);*////�����������þ���ֻ�ǽ�һ���ַ������׼���У��������ӳ���ĸ���������һֱ�ж��Ƿ����scanf����
//        scanf("%d", &num);
//        printf("������������ǣ�%d\n", num);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//void split_time(int total_sec, int* hr, int* min, int* sec);
//
//int main()
//{
//    int total_sec;
//    int hr, min, sec;
//
//    scanf("%d", &total_sec);
//    split_time(total_sec, &hr, &min, &sec);
//    printf("%.2d:%.2d:%.2d\n", hr, min, sec);
//
//    return 0;
//}
//void split_time(int total_sec, int* hr, int* min, int* sec) {
//    if (total_sec >= 3600) {
//        *hr = total_sec / 3600;
//        *min = (total_sec - *hr * 3600) / 60;
//        *sec= (total_sec - *hr * 3600) % 60;
//    }
//    else if (total_sec < 3600&& total_sec>59) {
//        *hr = total_sec / 3600;
//        *min = (total_sec - *hr * 3600) / 60;
//        *sec = (total_sec - *hr * 3600) % 60;
//    }
//    else {
//        *hr = 0;
//        *min = 0;
//        *sec = total_sec;
//    }
//
//}
//#include <stdio.h>
//#define N 100
//void find_two_largest(const int a[], int n, int* largest, int* second_largest);
//int main()
//{
//    int a[N], len;
//    int largest, second_largest;
//    scanf("%d", &len);
//    for (int i = 0; i < len; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    find_two_largest(a, len, &largest, &second_largest);
//    printf("%d %d\n", largest, second_largest);
//    return 0;
//}
//void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
//    *largest = *second_largest =a[0];
//    for(int i = 1; i < n;i++) {
//        if (a[i] > *largest) {
//            *second_largest = *largest;
//            *largest = a[i];
//
//        }
//        else if (a[i] > *second_largest && a[i] < *largest) {
//            *second_largest = a[i];
//        }
//    }
//    if (*largest==a[0]) {
//        *second_largest = a[0 + 1];
//        for (int i = 2; i < n; i++) {
//            if (a[i] > *second_largest) {
//                *second_largest = a[i];
//            }
//        }
//    }
//}
//int main() {
//    char ch;
//    int num[79];
//    while ((ch = getchar()) != '\n') {
//                /*ungetc(ch, stdin);*///�����������þ���ֻ�ǽ�һ���ַ������׼���У��������ӳ���ĸ���������һֱ�ж��Ƿ����scanf����
//                scanf("%d", &num);
//                printf("������������ǣ�%d\n", num);
//            }
//    return 0;
//}
//int main() {
//    int num[79];
//    char ch;
//    for (int i = 0; i < 80; i++) {
//        if ((ch = getchar()) == '\n') {
//            break;
//        }
//        scanf("%d", &num);
//        for (int a = 0; a < i; a++) {
//
//        }
//
//    }
//    return 0;
//}
//#include <string.h>////////////////////////////////////////////�����������һ�γ��ԣ�/////////////////
//int main() {
//    char str[81]; // ���ڴ洢������ַ��������80���ַ� + 1�����ַ�
//    char *ptr;
//    // ��ȡ�����ַ���
//    scanf("%80s", str);///////////ԭ�������������ǿ���ʵ�ֵģ��������϶�����������
//    // ��ָ��ָ���ַ�����ĩβ
//    ptr = str + strlen(str) - 1;//�ַ������ȣ�str���׵�ַ��ָ��0��λ��
//    // ��������ַ���
//    while (ptr >= str) {
//        printf("%c", *ptr);
//        ptr--;
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>////////////////////////////////////////����������ڶ�����/////////////////////////////////
//#include <string.h>
//
//int main() {
//    char message[81];  // �洢������Ϣ���ַ����飬���80���ַ� + 1�������ַ���������'\0'
//    scanf("%s", message);
//    int len = strlen(message);
//    for (int i = len - 1; i >= 0; i--) {
//        printf("%c", message[i]);
//    }
//    printf("\n");
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[81];
//    char* ptr;
//
//    // ʹ��fgets��ȡһ���ַ����������ո�
//    fgets(str, sizeof(str), stdin);//��׼��stdin�Ǳ�ʾ��������/////////////////////////�÷��ܾ���/////////////////
//
//    // �Ƴ��ַ���ĩβ�Ļ��з���������ڣ�
//    if (str[strlen(str) - 1] == '\n') {
//        str[strlen(str) - 1] = '\0';
//    }
//
//    ptr = str + strlen(str) - 1;
//    while (ptr >= str) {
//        printf("%c", *ptr);
//        ptr--;
//    }
//    printf("\n");
//    return 0;
//}
//////////////////////////////////ok,�Լ���ʵ��һ��
//#include <stdio.h>
#include <string.h>
//int main() {
//    char a [81];
//    char* p;
//    fgets(a, sizeof(a), stdin);
//    if (a[strlen(a) - 1] == '\n') {
//        a[strlen(a) - 1] = '\0';
//    }
//    p = a + strlen(a) - 1;
//
//    while (p >= a) {
//        printf("%c", *p);
//        p--;
//    }
//    return 0;
//}
/////////////////////////////////////////////շת�����/////////////////////
//#include <stdio.h>
//int zuixiao(int a, int b) {
//    while (b!=0) {
//        int l = b;
//        b = a % b;
//        a = l;
//    }
//    return a;
//}
//int main() {
//    int a, b, e, f;
//    scanf("%d/%d", &a, &b);
//    int c = zuixiao(a, b);
//    e = a / c;
//    f = b / c;
//    printf("%d/%d", e, f);
//    return 0;
//}
///////////////////////////////���۴��ڣ�ֱ�ӿ�ʼʵ�������ĵ��ж�//////////////////////
//int crictil(char* arr) {
//    int a = 0;
//    int b = strlen(arr)-1;
//    while (a < b) {
//        while (a < b && !((arr[a] >= 'a' && arr[a] <= 'z') || (arr[a] >= 'A' && arr[a] <= 'z'))) {
//            a++;
//        }
//        while (a < b && !((arr[b] >= 'a' && arr[b] <= 'z') || (arr[b] >= 'A' && arr[b] <= 'z'))) {
//            b++;
//        }
//        if (arr[a] != arr[b]) {
//            return 0;
//        }
//        a++;
//        b--;
//        return 1;
//    }
//}
#include <stdio.h>./////////////////////////////////����e�Ľ���ֵ//////////////
//int main() {
//    double a;
//    double c = 1,e = 1;;
//    int n = 1;
//    scanf("%lf", &a);
//    while (1) {
//        
//        c /= n;
//        e += c;
//        if (a >=c)
//            break;
//       
//        n++;
//    }
//    printf("%.10lf", e);
//    
//    return 0;
//}

/////////////////��ʾż��ƽ��ֵ//////////////////
//int main() {
//    char str[27] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' ,'\0' };
//    int n;
// 
//    scanf("%d", &n);
//    for (int a = 1; a <= n; a++) {
//        int c = a;
//        int d = c + c - 1;
//        while (c < n) {
//            printf(" ");
//            
//        }for (int g = 1; g <= d; g++) {
//            printf("%c", str[c - 1]);
//            printf("\n");
//            c++;
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf_s("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        // ��ӡ�ո�
//        for (int j = 0; j < n - i; j++) {
//            printf(" ");
//        }
//        // ��ӡ��ĸ
//        for (int k = 0; k < 2 * i - 1; k++) {
//            printf("%c", 'A' + i - 1);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main() {
//    int a;
//    scanf("%d", &a);
//    for (int b = 2; b*b <= a; b += 2) {
//        printf("%d\n", b * b);
//    }
//    return 0;
//}
//#include <stdio.h>
//

//////////////////////////////////�����ж�////////////////////////////
#include <string.h>
#include<ctype.h>
//int bianli(char* str) {
//    int left = 0;
//    int right = strlen(str) - 1;
//    while (left < right) {
//        while (left < right&&!((str[left]>'a'&&str[left]<'z')||(str[left]>'A'&&str[left]<'Z'))) {
//            left++;
//        }
//        while (left < right && !((str[right] > 'a' && str[right] < 'z') || (str[right] > 'A' && str[right] < 'Z'))) {
//            right--;
//        }
//        if (tolower(str[left]) != tolower(str[right])) {
//            return 0;
//        }
//        left++;
//        right--;
//    }
//    return 1;
//}//////////////////////////////////////////////////������////////////////
#include <stdio.h>
#include <string.h>
#include<ctype.h>
// int isPalindrome(char* str) {
//       int left = 0;
//       int right = strlen(str) - 1;
//while (left < right) {
//    while (left < right && !((str[left] >= 'a' && str[left] <= 'z') || (str[left] >= 'A' && str[left] <= 'Z'))) {
//        left++;
//    }
//    while (left < right && !((str[right] >= 'a' && str[right] <= 'z') || (str[right] >= 'A' && str[right] <= 'Z'))) {
//        right--;
//    }
//    if (tolower(str[left]) != tolower(str[right])) {
//        return 0;
//    }
//    left++;
//    right--;
//}
//return 1;
//}
//int main() {
//    char str[81];
//    scanf("%80[^\n]", str);
//    if (isPalindrome(str)) {
//        printf("Palindrome");
//    }
//    else {
//        printf("Not a palindrome");
//    }
//    return 0;
//}
////////////////////////////////�����Ĵ�ӡ///////////////////
//#include <stdio.h>
//int main() {
//    int a, b,c=0;
//    scanf("%d%d", &a, &b);
//    
//    for (int i = 1; i < b; i++) {
//            printf("   ");
//        }
//    for (int c = 1; c <= a; c++) {
//        if (c > 0 && c < 10) { 
//                if ((c + b - 1)% 7 == 0) {
//                     printf("  %d\n", c);
//                }
//                else
//                    printf("  %d", c);
//
//        }
//        else {
//            if ((c + b - 1) % 7 == 0) {
//                printf(" %d\n", c);
//            }
//            else
//                printf(" %d", c);
//        }
//       
//
//    }
//    return 0;
//}
// 
//////////////////��ӡ�����Σ�����/////////////////
//#include <stdio.h>
//int main() {
//    int b;
//    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    scanf("%d", &b);
//    for (int i = 0; i < b; i++) {
//        int g = 0;
//        int d = b-i;
//        for (int c = 1; c < d;d--) {
//            printf(" ");
//        }
//       
//        while (g < 2 * (i+1) - 1) {
//            printf("%c", a[i]);
//            g++;
//        }
//        printf("\n");
//    }
//    return 0;
//}
/////////////////////////���㵥�ʵ�ֵ/////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//void toLower(char* str) {
//    int i = 0;
//    while (str[i]) {
//        str[i] = tolower(str[i]);
//        i++;
//    }
//}
//
//int main() {
//    char a[] = "aeilnorstu";
//    char b[] = "dg";
//    char c[] = "bcmp";
//    char d[] = "fhvwy";
//    char e[] = "k";
//    char f[] = "jx";
//    char g[] = "qz";
//    char k[100];
//    int i = 0;
//    int o = 0;
//
//    scanf("%80[^\n]", k);
//    toLower(k);
//
//    while (k[i]) {
//        if (strchr(a, k[i])) o++;
//        else if (strchr(b, k[i])) o += 2;
//        else if (strchr(c, k[i])) o += 3;
//        else if (strchr(d, k[i])) o += 4;
//        else if (k[i] == e[0]) o += 5;
//        else if (strchr(f, k[i])) o += 8;
//        else if (strchr(g, k[i])) o += 10;
//        i++;
//    }
//
//    printf("%d", o);
//    return 0;
//}
////////////////////////////ͳ��Ԫ����ĸ����//////////////////////
//����������������ĵ���һ���֣���Ҫ����ɾ���Ǳ�ҪԪ��
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//void toLower(char* str) {
//    int i = 0;
//    while (str[i]) {
//        str[i] = tolower(str[i]);
//        i++;
//    }
//}
//int shanchu(char* arr) {
//    char c[] = "aeiou";
//    int o = 0;
//    int k = 0;
//    for (int i = 0; i < strlen(arr); i++) {
//        while (c[o]) {
//            if (arr[i] == c[o]) {
//                k++;
//            }
//            o++;
//        }
//        o = 0;////////////////////����o=0������һ��ѭ������������//////////////////////
//    }
//    return k;
//}
//int main() {
//    char str[10000];//////////////�ղ�oj�����ҳ����˼�����䣬���ֲ�û��ɶ���⣬�����Ż᲻��������̫С�������������������룬Ȼ��һ�ľ�ͨ����///////////////////////
//    scanf("%100000[^\n]", str);
//    toLower(str);
//    int d = shanchu(str);
//    printf("%d", d);
//    return 0;
//}
///////////////////////////ţ�ٵ�����///////////////
//#include <stdio.h>
//#include <math.h>
//
//double osqrt(double a, double r) {
//    double c = a;
//    double d = c / 2 + a / (2 * c);
//    double j = d;
//    while (fabs(c-d)> r*j) {////////////////////////while�����������������ѭ�����ղ�һֱд��r��˵զ���У�û�뵽hh��ѧ�żӶϵ㣬���ԣ������Լ��Ĵ��뵽���ﲻ��������ֵ��������
//        c = d;
//        d = c / 2 + a / (2 * c);
//    }
//    return c;
//}
//int main() {
//    double a;
//    double r = 0.000001;
//    scanf("%lf", &a);
//    double d = osqrt(a, r);
//    printf("%lf", d);
//    return 0;
//}
/////////////////////������תʮ����//////////////////
//ԭ���ƿغ�ԭ����ô��//�о�Ҳ��������������
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        ///////��ѭ�������ڻ��д���ģ�������������/////////
//        char number[33];
//        scanf("%s\n", number);
//        int ignor = 0;
//        for (int k = 0; number[k] != '\0'; k++) {
//            ignor += (number[k] - '0') * pow(2, strlen(number) - 1 - k);
//        }
//    }
//    return 0;
//}///////////////////��������ɹ���/////////////////
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n; 
//    int arr[10000];
//    arr[0] = 0;
//    scanf("%d", &n);
//    int p = 0;
//    for (int i = 0; i < n; i++) { 
//        arr[p + 1] = 0;
//        char binary[33];
//        scanf("%s", binary);
//       
//        for (int j = 0; binary[j] != '\0'; j++) {
//            arr[p]= arr[p]+(binary[j] - '0') * pow(2, strlen(binary) - 1 - j);
//        } 
//        
//        p++;
//    }
//    for (int y = 0; y < n; y++) {
//        printf("%d\n", arr[y]);
//    }
//    return 0;
//}//////////////////////////��������ظ�������////////////////��д�Ĵ����룬��Ц��////
//int main() {
//    int num[10000];
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int krr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int k = 0;
//    char ch;
//    while ((ch = getchar()) != '\n') {
//        scanf("%d",&num[k]);
//        if (num[k] == krr[0])
//            krr[0] += 1;
//        else if (num[k] == krr[1])
//            krr[1] += 1;
//        else if (num[k] == krr[2])
//            krr[2] += 1;
//        else if (num[k] == krr[3])
//            krr[3] += 1;
//        else if (num[k] == krr[4])
//            krr[4] += 1;
//        else if (num[k] == krr[5])
//            krr[5] += 1;
//        else if (num[k] == krr[6])
//            krr[6] += 1;
//        else if (num[k] == krr[7])
//            krr[7] += 1;
//        else if (num[k] == krr[8])
//            krr[8] += 1;
//        else if (num[k] == krr[9])
//            krr[9] += 1;
//        else if (num[k] == krr[10])
//            krr[10] += 1;
//        k++;
//    }
//    for (int h = 0; h < 10; h++) {
//        printf("%3d", arr[h]);
//    }
//    for (int y = 0; y < 10; y++) {
//        printf("%3d", krr[y]);
//    }
//    return 0;
//}
#include <stdio.h>
//////////////////////////��һ���޸ģ�bug���������ε�����ȡ�����ÿո����/////////////////
//int main() {
//    int num[10000];
//    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int krr[10] = { 0 }; // ��ʼ����������Ϊ0
//    int k = 0;
//    char ch;
//    // ʹ��scanf����ȡ����
//    while ((ch=getchar())!='\n') {
//        scanf("%d", &num[k]);
//        // ʹ��num[k]��Ϊ�±������Ӽ���
//        if (num[k] >= 0 && num[k] <= 9) {
//            krr[num[k]]+=1;
//        }
//        k++;
//    }
//    for (int h = 0; h < 10; h++) {
//        printf("%3d", arr[h]);
//    }
//    printf("\n");
//    for (int y = 0; y < 10; y++) {
//        printf("%3d", krr[y]);
//    }
//    return 0;
//}/////////////////////////////�ڶ����޸ĵ�����������ascll��ֵ��Ӧ��///////////////////��������/////////////
//#include <stdio.h>
//
//int main() {
//    int count[10] = { 0 };  // ���ڴ洢0 - 9ÿ�����ֳ��ֵĴ���
//    char ch;
//
//    // ����ַ���ȡ����
//    while ((ch = getchar()) != '\n') {
//        if (ch >= '0' && ch <= '9') {
//            count[ch - '0']++;
//        }
//    }
//
//    // ���0 - 9
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", i);
//    }
//    printf("\n");
//
//    // ���ÿ�����ֳ��ֵĴ���
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", count[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
///////////////////�������////////////
//�����ԣ�����һ����̬������������/////////////Ŀǰ��̬ȷ�������С��Ŀ�Ĵﵽ��
//#include <stdio.h>
//#include <stdlib.h>
//int main() {////////////���Ǻ�����a[0][0]����������Ǵ�a[1][1]��ʼ��
//    int b;
//    int**a;
//    scanf("%d", &b);
//    a = (int**)malloc(b * sizeof(int*));
//    for (int i = 0; i < b; i++) {
//        a[i] = (int*)malloc(b * sizeof(int));
//    }
//    for (int y = 0; y < b;y++) {
//        for (int p = 0; p <b; p++) {
//            scanf("%d", &a[y][p]);
//        }
//    }
//    for (int y =0; y < b; y++) {
//        int ko = 0;
//        for (int p = 0; p < b; p++) {
//            ko = ko + a[y][p];
//        }
//        printf("%5d",ko);
//    }
//    printf("\n");
//    for (int y = 0; y < b; y++) {
//        int ko = 0;
//        for (int p = 0; p < b; p++) {
//            ko = ko + a[p][y];
//        }
//        printf("%5d", ko);
//    }
//    return 0;
//}////////////�ڶ��˳���
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int b;
//    int** a;
//    scanf("%d", &b);
//    a = (int**)malloc(b * sizeof(int*));
//    for (int i = 0; i < b; i++) {//��0��ʼ
//        a[i] = (int*)malloc(b * sizeof(int)); // �޸��������b�������Ŀռ�
//    }
//    for (int y = 0; y < b; y++) { // �޸����ѭ����0��ʼ������Ϊ< b
//        for (int p = 0; p < b; p++) { // �޸����ѭ����0��ʼ������Ϊ< b
//            scanf("%d", &a[y][p]);
//        }
//    }
//    for (int y = 0; y < b; y++) { // �޸����ѭ����0��ʼ������Ϊ< b
//        int ko = 0;//�൱�ڳ�ʼ����
//        for (int p = 0; p < b; p++) { // �޸����ѭ����0��ʼ������Ϊ< b
//            ko = ko + a[y][p];
//        }
//        printf("%5d", ko);
//    }
//    printf("\n");
//    for (int y = 0; y < b; y++) { // �޸����ѭ����0��ʼ������Ϊ< b
//        int ko = 0;
//        for (int p = 0; p < b; p++) { // �޸����ѭ����0��ʼ������Ϊ< b
//            ko = ko + a[p][y];
//        }
//        printf("%5d", ko);
//    }
//    return 0;
//}
///////////////��������//////
////�����һά����
//#include<string>
//void zhuan(char*str,int a){
//    //������������
//    for (int i = 0; i < strlen(str); i++) {
//        if ((str[i] >= 'a' )&& (str[i]<= 'z')) {
//            str[i] = str[i] +a%26;///////////�����߼�֪���ˣ�����������и��������⣬���ҵ�������ĸ�ϴ�ʱ���ҵ�ƫ����Ҳ�ϴ�ʱ����ôascii��ֵ�ᳬ��
//            /////////��z����ascii��ֵ�����´�ӡ��δ֪�ַ�
//        }
//    }
//}
//int main() {
//    int b=0;
//    char str[10001];
//    scanf("%10000[^\n]", str);
//    scanf("%d",&b);
//    zhuan(str,b);
//    printf("%s", str);
//    return 0;
//}
////�޸����е�ѭ��
//for ((str[i] >= 'a') && (str[i] <= 'z')) {
//    str[i] = ((str[i] - 'a' + a - '0') % 26) + 'a';/////////��������ƫ�Ƴ̶�ʼ�մ�����26����С֮���ˣ����ӵ�ʱ�����ˣ���Ȼд�˸�-��0��
//}
//////////////�ڶ��γ���///////
//#include <stdio.h>
//#include<string.h>
//void PianYi(char* str, int a) {
//    for (int i = 0; i < strlen(str); i++) {
//        if ((str[i] >= 'a') && (str[i] <= 'z')) {
//            str[i] = ((str[i] - 'a' + a) % 26) + 'a';
//        }
//        else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
//            str[i] = ((str[i] - 'A' + a) % 26) + 'A';
//        }
//    }
//}
//void main() {
//    int a;
//    char str[1001];
//    scanf("%1000[^\n]", str);
//    scanf("%d", &a);
//    PianYi(str, a);
//   
//    printf("%s", str);
//}
////////////////gcd(a,b)���������Լ�������ҿ�̫����hh/////////////
//int gcd(int m, int n){
//    while (n!=0) {
//        int c = n;
//        n = m % n;
//        m = c;
//    }
//    return m;
//}
/////////��Kλ����////////////
//#include <stdio.h>
//int digit(int n, int k);
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        printf("%d\n", digit(a, b));
//    }
//    return 0;
//}
//int digit(int n, int k) {///////Ŀǰ�ж��ǳ�������ȷʹ��
//    int c = 1;
//    int d = 1;
//    int q = 0;
//    int j = 1; int kk=n;
//    int g;
//    while (d != 0) {
//        c = c * 10;
//        d = n/ c;
//        q++;
//    }////////q����ȷ���Ǽ�λ������q=3�����ʽ������λ��
//    for (int i = 1; i <= q - k; i++) {
//        g = 1+i-1;
//        while (g < q) {
//            j = j * 10;
//            g++;
//        }
//        kk =kk-kk/j*j;
//        j = 1;
//       
//
//    }
//    return kk;
//}//////////////////////////////��������մ𰸣��ϵ������һ���ϣ�������������ˣ�����Ҳ��
#include <stdio.h>
//int digit(int n, int k);
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        printf("%d\n", digit(a, b));
//    }
//    return 0;
//}
//int digit(int n, int k) {
//    int c = 1;
//    int d = 1;
//    int q = 0;
//    int j = 1; int kk = n;
//    int g;
//    int nn = 0;
//    int o = 1, pp = 1;
//    int ll=1;
    //while (d != 0) {
    //    c = c * 10;
    //    d = n / c;
    //    q++;///////////������м�λ��
    //}
//    for (int i = 1; i <= q - k; i++) {
//        g = 1 + i - 1;
//        while (g < q) {
//            j = j * 10;
//            g++;����������ڼ�λ�����Լ�����������ֵı��
//        }
//         kk = kk - kk / j * j;
//         j = 1;//////////kk�ļ��㲻������
//    }
//    while (ll < k) {///////��������λ������ȡ��
//        pp = pp * 10;
//        ll++;
//    }
//    int uu=kk/ pp;
//    return uu;
//}/////////////////////////////////////////////////////////////////////day-of-year////////////////
//#include <stdio.h>
//int day_of_year(int month, int day, int year);
//int main()
//{
//    int m, d, y;
//    while (scanf("%d %d %d", &m, &d, &y) != EOF)
//    {
//        printf("%d\n", day_of_year(m, d, y));
//    }
//    return 0;
//}
//int day_of_year(int month, int day, int year) {
//    int i = 1;
//    int c = 0;
//    if ((year % 400 == 0)||((year%4==0)&&(year%100!=0))) {
//        while (i < month) {
//            if (i== 1 || i == 3 || i == 5 || i==7||i == 8 || i ==10 || i==12) {//////////////��ʱ��д�˸�7���Ҿ�˵�߼���ô��Ϊɶ���
//                c += 31;
//            }
//            else if (i == 2) {
//                c += 29;
//            }
//            else {
//                c += 30;
//            }
//            i++;
//        }
//    }
//    else {
//        while (i < month) {
//            if (i == 1 || i == 3 || i == 5 ||i==7|| i == 8 || i == 10 || i == 12) {
//                c += 31;
//            }
//            else if (i == 2) {
//                c += 28;
//            }
//            else {
//                c += 30;
//            }
//            i++;
//        }
//    }
//    int yy = c + day;
//    return yy;
//}/////////////////////////////���ھֲ�����ջ������//////////////
//#include <stdio.h>
//int* func() {
//    int a = 10;
//    return &a;
//}
//int main() {
//    int* p = func();
//    int* q = func();
//    printf("%p\n",p);
//    printf("%p", q);
//    return 0;
//}
//int main() {
//
//    int ix = 1, iy = 3, iz = 3;
//    printf("%d,%d\n", ix = iy = iz, ix=iy== iz);
//    return 0;
//}//////////////////////�α��ϵ�С��///////
//#include <stdio.h>
//
//int main() {
//    int ix = 1, iy = 2, iz = 3;
//    printf("%d %d\n", ix = iy = iz,ix = iy == iz);//�������Ľ����3 3��Ϊʲô��Ĭ���Ǵ��������ȡ������������տ�ʼiy!=iz���ж�Ϊ�㣬Ȼ��ix��ֵΪ�㣬���ǰ���������ֵ����ix��Ϊ0��
//   //����ix�������3���ʴ�ӡ����ix���3
//    return 0;
//}
////////////////////�������ʽ���沨�����ʽ/////////////
//#include<stdlib.h>
//int BoLan() {//////////////ͨ������stdlib�Ŀ⣬���ַ���ͨ��atoiת�������Σ�Ҳ��ͨ��atofת���ɸ�����
//    char a[10000];
//    scanf("%c", a);
//    if (a[0] =='+') return BoLan() + BoLan();
//    else if (a[0] == '-') return BoLan() - BoLan();
//    else if (a[0] == '*') return BoLan() * BoLan();
//    else if (a[0] =='/') return BoLan() / BoLan();
//    else return atoi(a);
//}
//int main() {
//    printf("%d", BoLan());
//    return 0;
//}
// ////////////�沨�����ʽ//////////////////
//#include <stdio.h>
//int main() {
//    int top=-1;
//    char s[1000];
//    int st[1000];
//    char x;
//    char y;
//    scanf("%s", s);
//    int i = 0;
//    while (i < strlen(s)) {
//        if (s[i]>= '0' && s[i] <= '9') {
//            top++;
//            st[top] = s[i]-'0';
//        }
//        else {
//            x = st[top]; top--;
//            y = st[top];
//            if (s[i] == '+') {
//                st[top] = x + y;
//            }
//            else if (s[i] == '-') {
//                st[top] = y-x;
//            }
//            else if (s[i] == '*') {
//                st[top] = x * y;
//            }
//            else if (s[i] == '/') {
//                st[top] = y/x;
//            }
//
//        }
//        i++;
//    }
//    printf("%d", st[0]);
//    return 0;
//}
///////////////ð��������-ѡ������-����////////////////
//#include <stdio.h>
//#define N 100
//void selection_sort(int a[], int len);
//int  main()
//{
//    int a[N], i = 0, len;
//    while (scanf("%d", &a[i]) == 1)
//    {
//        i++;
//    }
//    len = i;
//    selection_sort(a, len);
//    for (i = 0; i < len; i++)
//    {
//        if (i == 0)    printf("%d", a[i]);
//        else    printf(" %d", a[i]);
//    }
//    printf("\n");
//    return  0;
//}
////void yyy(int a[], int len) {
////    for (int i = 1; i < len; i++) {
////        for (int j = 0; j < len - i - 1; j++) {
////            if (a[j] > a[j + 1]) {
////                int aa = a[j];////////////ð������Ҳ���������������Ǹ����⣬û�б�Ҫȥ��
////                a[j] = a[j + 1];
////                a[j + 1] = aa;
////            }
////        }
////    }
////}
//void selection_sort(int a[], int len) {
//    if (len <= 1) return;
//    int max_index = 0;
//    int i;
//    for (i = 1; i < len; i++) {
//        if (a[i] > a[max_index]) {
//            max_index = i;
//        }
//    }
//    int temp = a[max_index];
//    a[max_index] = a[len - 1];
//    a[len - 1] = temp;
//    selection_sort(a, len - 1);
//}/////////////////////////////////////���ټ���x^n////////////////////////
//#include <stdio.h>
//int power(int x, int n);
//int main()
//{
//    int x, n;
//    scanf("%d %d", &x, &n);
//    printf("%d\n", power(x, n));
//    return 0;
//}
//int power(int x, int n) {
//    int i = 1, c = x;
//    if (n == 0)
//        return 1;
//    else if(n == 1) return x;
//    else {
//        if (n % 2 == 0) {
//            while (i < n / 2) {
//                c = c * x;
//                i++;
//            }
//            return c * c;
//        }
//        else if (n %2 != 0) {
//            while (i < (n - 1) / 2) {
//                c = c * x;
//                i++;
//            }
//            return c * c * x;///////��ǰ����һЩ���ܲ��������߱��������Ǽ��㺯�����ϲ���ö����ܣ�����ѧ���˶ϵ���������ʡ�ܴ�һ������
//        }
//       
//    }
//}
/////////////////////����С���͡���󡱵���/////////////////
//���ȣ��ж��ַ�������Ϊ�ؼ�������Ϊ4ֱ��ֹͣ¼�룻
//int main() {//////////////��һ�γ���ʧ�ܣ������Ƕ�����ʦ�̵ģ����𣡣���
//    char str[10000];
//    char st[10000];
//    char ch;
//    int t = -1;
//    while (1) {
//        
//        scanf("%s", str);
//        if (strlen(str) == 4) {
//            str[strlen(str)] = '9';
//            break;
//        }
//        if ((ch= getchar()) == '\n') {
//            str[strlen(str)]='9';//////////��������ж�����������Ϊһ��
//        }
//    }
//    for (int i = 0; i < strlen(str); i++) {
//        if (str[i] == '9') {
//            int ch = t;
//            t = i - ch - 1;
//
//            for (int j = 0; j < t; j++) {
//
//            }
//        }
//    }
//    return 0;
//}//////////////////////////�ڶ��γ���u//////////
//#include<stdio.h>
//#include<string.h>
//#define MaxSize 20
//int main() {
//    int first = 1;
//    char Max[MaxSize];
//    char Min[MaxSize];
//    char str[MaxSize];
//    while (1) {
//        str[0] = '\0';
//        scanf("%s", str);
//        if (strlen(str) == 4)
//            break;
//        if (first) {
//            strcpy(Min, str);
//            strcpy(Max, str);
//            first--;
//        }
//        else {
//            if (strcmp(Min, str) > 0) {
//                strcpy(Min, str);
//            }
//            if (strcmp(Max, str) < 0) {
//                strcpy(Max, str);
//            }
//        }
//    }
//    printf("%s\n", Min);
//    printf("%s", Max);
//    return 0;
//}
//////////////������/////////////
//#include<stdlib.h>
//int main() {
//    char str[100000];
//    scanf("%s", str);
//    if (str[0] == '-') {
//        printf("fu ");
//        for (int i = 1; i < strlen(str); i++) {
//            if (i != strlen(str)) {
//                if (str[i] == '1') {
//                    printf("yi ");
//                }
//                else if (str[i] == '0') {
//                    printf("ling ");
//                }
//                else if (str[i] == '2') {
//                    printf("er ");
//                }
//                else if (str[i] == '3') {
//                    printf("san ");
//                }
//                else if (str[i] == '4') {
//                    printf("si ");
//                }
//                else if (str[i] == '5') {
//                    printf("wu ");
//                }
//                else if (str[i] == '6') {
//                    printf("liu ");
//                }
//                else if (str[i] == '7') {
//                    printf("qi ");
//                }
//                else if (str[i] == '8') {
//                    printf("ba ");
//                }
//                else if (str[i] == '9') {
//                    printf("jiu ");
//                }
//            }
//            else {
//                if (str[i] == '1') {
//                    printf("yi");
//                }
//                else if (str[i] == '0') {
//                    printf("ling");
//                }
//                else if (str[i] == '2') {
//                    printf("er");
//                }
//                else if (str[i] == '3') {
//                    printf("san");
//                }
//                else if (str[i] == '4') {
//                    printf("si");
//                }
//                else if (str[i] == '5') {
//                    printf("wu");
//                }
//                else if (str[i] == '6') {
//                    printf("liu");
//                }
//                else if (str[i] == '7') {
//                    printf("qi");
//                }
//                else if (str[i] == '8') {
//                    printf("ba");
//                }
//                else if (str[i] == '9') {
//                    printf("jiu");
//                }
//
//            }
//        }
//    }///����������Ĵ����Ǹ�ɶ�ȣ�����˵��������
//    return 0;
//}
///////�̸ղ����ַ����������������ʵ�����εĵ��ַ�����������Ǻܺò����ģ�ֻ��Ҫ�ó���
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int a = 0;
//    int p;
//    int b; int d = 1; int y = 1; int c = 1;
//    const char*pinyin[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//    scanf("%d",&b);
//    if (b < 0) {
//        printf("fu ");
//        b = -b;
//    }
//    int SizeInt = (int)log10(b)+1;
//    for(int i = SizeInt - 1; i >= 0; i--) {
//        if (i != SizeInt - 1) {
//            printf(" ");
//        }
//        p = (int)pow(10, i);
//        int c = b / p;
//        printf("%s", pinyin[c]);
//        b = b % p;
//    }
//    return 0;
//}////////////////�ݺݵ�����
///////////////////�ַ����ȶ�///////////////////

#include <stdio.h>
#include<string.h>
int main() {
    char str[10000];
    char stc[10000];
    int g = 0; int yy = 0; int pp = 0;
    fgets(str, sizeof(str), stdin);
    fgets(stc, sizeof(stc), stdin);
    int c = 0; int io = 0;
    for (int i = 0; i < strlen(stc)-1; i++) {
        while (1) {
            if ((stc[i] != str[c]) && (stc[i] != 32))
                break;
            else if (stc[i] == 32) {
                pp += 1;
                break;
            }
            else {
                int f = i;
                int qq = 0;
                while (qq < strlen(str) - 1) {
                    if (stc[f] != str[qq]) {
                        break;
                    }
                    f++;
                    qq++;
                    if (qq == strlen(str) - 1) {
                        yy += 1;
                        if (yy != 1) {
                            printf(" ");
                        }
                        io++;
                        printf("%d", f - qq + 1 - pp);
                        g = 109;
                        if (g == 109) {
                            g = 0;
                            break;
                        }
                    }
                }
                    break;
                
            }
        }
    }if (io == 0) {
        printf("-1");
    }
   
    

    return 0;
}
 //////////////�����ܰ�������������ĳ��򣬱���Ҳ����ȷ��Ϊɶ����oj��ͨ��������������