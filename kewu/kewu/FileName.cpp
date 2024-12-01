#include <stdio.h>
#include <stdio.h>
#include<math.h>
//int main() {////////1002
//	float yuanz = 3.14159;
//	printf("请输入圆的半径：");
//	float r;
//	scanf("%f", &r);
//	printf("圆的面积是：%.5f\n", r*yuanz*2);
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
//    printf("请输入数字的个数 n：");
//    scanf("%d", &n);
//    printf("请输入 %d 个数字：", n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("请输入要检索的数字：");
//    scanf("%d", &js);
//    for (b=0; b < n; b++) {
//        if (js == arr[b]) {
//            printf("您检索的数组下标为：%d", b);
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
//    printf("请输入数字的个数 n：");
//    scanf("%d", &n);
//    printf("请输入 %d 个数字：", n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("请输入要检索的数字（输入 -1 结束）：");
// int main() {
//    int arr[100];
//    int n, i, js;
//    printf("请输入数字的个数 n：");
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
//                printf("您检索的数字 %d 的数组下标为：%d\n", js, i);
//                found = 1;
//            }
//        }
//        if (!found) {
//            printf("数字 %d 未找到（NO FOUND）\n", js);
//        }
//        printf("请输入要检索的数字（输入 -1 结束）：");
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
//                                                   有更简单的一部，对于这个先输入n确定数组宽度的方式有点太啰嗦了
// while循环，
// int i;
// while(1){
// scanf("%d",&arr[i]);
// if(js==-1)
//    break;
// i++
// 
// 
// }//通过这个循环让每一个输入的正整数全部存到arr里面
//    scanf("%d", &js);
//    while (js != -1) {
//        int found = 0;//如果没有判定游戏结束，那么直接while(1)即可；
//        for (i = 0; i < n; i++) {
//            if (js == arr[i]) {
//                printf("您检索的数字 %d 的数组下标为：%d\n", js, i);
//                found = 1;
//            }
//        }
//        if (!found) {
//            printf("数字 %d 未找到（NO FOUND）\n", js);
//        }
//        printf("请输入要检索的数字（输入 -1 结束）：");
//        scanf("%d", &js);
//    }
//    return 0;
//}//
////1003
//#include <math.h>
//int main() {//1004
//	int a, b, c;
//	
//	printf("请输入直角三角形两条直角边的长度：");
//	scanf("%f,%f", &a,&b);
//	c = a * a + b * b;
//	double rusult = sqrt(c);
//	printf("最终计算出该直角三角形长度为：%.5lf", rusult = sqrt(c));
//	return 0;
//}//用到了一个关于数学的库
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
//}//修改后的代码
//1005
//int main() {
//	int a, b, c, d;
//	printf("ok啊，下面开启我们的解根小代码");
//	printf("请按下1开始程序，按下2结束程序");
//
//	scanf("%d", &d);
//	
//	while (d == 1) {
//		printf("请输入ax^2+bx+c=0中的abc:");
//
//		scanf("%d%d%d", &a, &b, &c);//这个地方%d的中间不能用douhao
//		if (b * b - 4 * a * c < 0) {
//			printf("对不起，您所构建的方程组没有实根");
//		}
//		else if (b* b - 4 * a * c == 0) {
//			printf("您所输入的函数有一个实根为：%.5f",-b/2*a);
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
//				printf("最终所得两个实数根中较大的数为%.5f", l);
//			}
//			else {
//				printf("最终所得两个实数根中较大的数为%.5f", k);
//			}
//		}
//		if (d != 1) {
//			break;
//	    }
//	}
//	return 0;
//}
//1006,关于逆序数输出的题
//int main() {
//	unsigned int a, b, c, d;
//	printf("请输入任意一个三位数字：");
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
//		printf("您输入三位数的个位是：%d\n", b);
//		printf("您输入三位数的十位是：%d\n",c);
//		printf("您输出三位数的百位是：%d\n", d);
//	}
//	
//	return 0;
//}
//1007大概就是一个北京时间转换为世界时间的一个代码
//重要的一点就是printf("%02d%02d",hours,minutes);这个的意思是表示一个整形宽度为2，然后是如果不足两位是前面补零
//1008,这个输入两位数，然后打印出对应结果的，我寻思swith不是只能输入一个数吗？哈哈哈，才发现有巧思
//int main() {
//	int a, b,c;
//	printf("请输入两位数：");
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
//1009,其中我查出了内涵，我的想法是根据数组，然后通过sizeof(arr)/sizeof(arr[0]),除以单字节的大小，算出里面元素的个数
//int main() {
//	unsigned int arr[100000];
//	unsigned int wh[100000];
//	unsigned int wjh[100000];
//	int i = 0;
//	int a=0;
//	printf("请输入一系列正整数（按-1结束游戏）：");
//	while (1) {
//		scanf("%d", &arr[i]);
//		i++;
//
//	}
//	while (1) {
//		if (arr[a] % 2 != 1) {
//			wh[a] = arr[a];//偶数
//		}
//		if (arr[a] % 2 == 1) {
//			wjh[a] = arr[a];//奇数
//		}
//		a++;
//
//	}
//	int js = sizeof(wjh) / wjh[0];
//	int os = sizeof(wh) / wh[0];
//
//	printf("您所输入数据中，奇数的个数为：%d\n", js);
//	printf("您所输入数据中，偶数的个数为：%d\n", os);
//
//
//	return 0;
//}
//int main() {
//    int arr[100];
//    int i = 0;
//    int js = 0;
//    printf("请输入数字（输入-1结束）：\n");
//    while (1) {
//        scanf("%d", &arr[i]);
//        if (arr[i] == -1) {
//            break;
//        }
//        i++;
//    }
//    printf("请输入要检索的数字（输入-1结束）：\n");
//    scanf("%d", &js);
//    while (js != -1) {
//        int found = 0;
//        for (int j = 0; j < i; j++) {
//            if (js == arr[j]) {
//                printf("您检索的数字 %d 的数组下标为:%d\n", js, j);
//                found = 1;
//                break;
//            }
//        }
//        if (!found) {
//            printf("数字 %d 未找到(NO FOUND)\n", js);
//        }
//        printf("请输入要检索的数字（输入-1结束）：\n");
//        scanf("%d", &js);
//    }
//    return 0;
//}
//计算器，算出这次活动的人数
//int main() {
//	int arr[100];
//	int i=0,a,b=0;
//	printf("请输入数字(-1)结束输入：");
//	while (1) {
//		scanf("%d", &arr[i]);
//		if (arr[i] == -1)
//			break;
//		i++;
//	}
//	for (a = 0; a < sizeof(arr) / sizeof(arr[0]); i++) {
//		b += arr[a];
//	}
//	printf("最终的结果为：%d", b);
//	return 0;
//}
#include <stdio.h>

//int main() {
//    int arr[100];
//    int i = 0, a, b = 0;
//    printf("请输入数字(-1)结束输入");
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
//    printf("最终的结果为:%d", b);
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
//	//输入环节
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &c[i]);
//	}
//	scanf("%d", &b);//输入检索的次数
//	scanf("%d", &d);//输入所检索的数字
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
//		//	if (e>=n)//对于sizeof(c)/sizeof(c[0])不准确，因为这里的不是你输入的大小，和数组的长度冲突
//		//		break;
//		//}
//		return 0;
//	}
//
                                         ////顺序查找，这个得遍历整个数组，如果要查的数在比较靠后的位置的话，还是；不高效
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
//    printf("数组为:");//其实这一部可以不要，直接输出结果
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("要查找的数字为: %3d\n", key);
//    int result = sequentialSearch(nums, 10, key);
//    if (result != -1) {
//        printf("nums[%d]为要查找的数字\n", result);//这个有点意思，突然间搞懂返回值了
//    }
//    else {
//        printf("数组中没有%d\n", key);
//    }
//    _getch();//这个就是一个晚点结束程序的东西
//    return 0;
//}
//int binarySearch(int arr[], int n, int k) {                                //二分查找的代码
//    int low = 0;
//    int high = n - 1;//因为数组是从0开始的
//    while (low <= high) {
//        int mid = (low + high) / 2;
//        if (k == arr[mid]) {
//            return mid;
//        }
//        else if (k < arr[mid]) {//如果是未查找到数字，其实简而言之只有一种情况【1，2，4，5，7，9】如这个，共有6个单位大小low=0，high=5,如果让我们查找3这个数字；
//            //首尾相除可得2，三是大于二的，所以low变为3，然后相除变为4，然后2是小于5的，high变为3，然后还是能执行当前循环，且k不等于arr[mid],然后再执行的话，执行第二条if,然后
//            //就会出现high<low就跳出循环了
//            high = mid - 1;
//        }
//        else {
//            low = mid + 1;
//        }
//    }
//    return -1;//如果没有找到if（k==arr[mid]）这条语句，会出现错位，比如，如果要查找的数字在mid的左边，那么high的位置就必须左移动
//}
//int main() {
//    int nums[10] = { 1,3,4,8,10,13,21,25,39,57 };
//    int key = 25;
//    printf("数组为:");
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("要查找的数字为: %3d\n\n", key);
//    int result = binarySearch(nums, 10, key);
//    if (result != -1) {
//        printf("nums[%d] 为要查找的数字\n", result);
//    }
//    else {
//        printf("数组中没有%d\n", key);
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
//    printf("数组为:");
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", nums[i]);
//    }
//    printf("\n");
//    printf("要查找的数字为: %3d\n\n", key);
//    int result = binarySearch(nums, 10, key);//调用这个函数，对于二分查找
//    if (result != -1) {
//        printf("nums[%d] 为要查找的数字\n", result);
//    }
//    else {
//        printf("数组中没有%d\n", key);
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
//    int* arr = (int*)malloc(n * sizeof(int));//////////////////////////运动的马克尔杰克逊
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
//#include <stdio.h>                       /////////////////冒泡排序///////////////////
//
//void Swaps_locks_(int* left, int* right);
//
//int main() {
//    // 冒泡排序
//    int arr[10] = { 1, 3, 6, 5, 2, 4, 8, 9, 7, 0 };
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 10 - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                Swaps_locks_(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//
//    // 输出结果
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
//#include <stdio.h> ///////////////////////////////////////////选择结构的最大值与最小值，受上面的冒泡排序启发////////////////////////////////
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
//    }*///原本想用冒函数做的，但没想到，const是不可修改的，所以冒泡函数对数组的重新排列就无效
//    for (int i = 1; i < n; i++) {
//        *largest = *second_largest = a[0];/////////////我就说为啥会出错，合着在这部循环里一直重新对这俩玩意赋值是吧
//        if (a[i] > *largest) {
//            *second_largest = *largest;
//            *largest = a[i];
//        }
//        else if (a[i] > *second_largest && a[i] < *largest) {
//            *second_largest = a[i];
//        }
//    }
    //void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
    //    //初始化最大和第二大元素
    //        * largest = *second_largest = a[0];

    //    //遍历数组
    //        for (int i = 1; i < n; i++) {
    //            if (a[i] > *largest) {
    //               // 如果当前元素大于最大元素，更新最大和第二大元素
    //                    * second_largest = *largest;
    //                *largest = a[i];
    //            }
    //            else if (a[i] > *second_largest && a[i] < *largest) {
    //                //如果当前元素大于第二大元素但小于最大元素，更新第二大元素
    //                    * second_largest = a[i];
    //            }
    //        }
    //}

//#include <stdio.h>
//#define N 100
//
// 函数用于找到最大和第二大元素
//void find_two_largest(const int a[], int n, int* largest, int* second_largest) {
//     初始化最大和第二大元素
//    *largest = *second_largest = a[0];
//
//     遍历数组
//    for (int i = 1; i < n; i++) {
//        if (a[i] > *largest) {
//             如果当前元素大于最大元素，更新最大和第二大元素
//            *second_largest = *largest;
//            *largest = a[i];
//        }
//        else if (a[i] > *second_largest && a[i] < *largest) {
//             如果当前元素大于第二大元素但小于最大元素，更新第二大元素
//            *second_largest = a[i];
//        }
//    }
//}
//
//int main() {
//    int a[N], n;
//    int largest, second_largest;
//
//     输入数组长度
//    scanf("%d", &n);
//
//     输入数组元素
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//     找到最大和第二大元素
//    find_two_largest(a, n, &largest, &second_largest);
//
//     输出结果
//    printf("%d %d\n", largest, second_largest);
//
//    return 0;
//}
//最大元素的指针，有点意思
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
//    printf("请输入一组整数，以回车结束输入：\n");
//    while ((ch = getchar()) != '\n') {
//        /*ungetc(ch, stdin);*////这条语句的作用就是只是将一个字符放入标准流中，但会增加程序的负担，他会一直判断是否符合scanf整形
//        scanf("%d", &num);
//        printf("你输入的数字是：%d\n", num);
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
//                /*ungetc(ch, stdin);*///这条语句的作用就是只是将一个字符放入标准流中，但会增加程序的负担，他会一直判断是否符合scanf整形
//                scanf("%d", &num);
//                printf("你输入的数字是：%d\n", num);
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
//#include <string.h>////////////////////////////////////////////逆序输出，第一次尝试；/////////////////
//int main() {
//    char str[81]; // 用于存储输入的字符串，最多80个字符 + 1个空字符
//    char *ptr;
//    // 读取输入字符串
//    scanf("%80s", str);///////////原来输入多个数组是可以实现的，不过他肯定是连着输入
//    // 让指针指向字符串的末尾
//    ptr = str + strlen(str) - 1;//字符串长度，str是首地址，指针0的位置
//    // 逆序输出字符串
//    while (ptr >= str) {
//        printf("%c", *ptr);
//        ptr--;
//    }
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>////////////////////////////////////////逆序输出，第二尝试/////////////////////////////////
//#include <string.h>
//
//int main() {
//    char message[81];  // 存储输入消息的字符数组，最多80个字符 + 1个用于字符串结束符'\0'
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
//    // 使用fgets读取一行字符串，包括空格
//    fgets(str, sizeof(str), stdin);//标准流stdin是表示键盘输入/////////////////////////用法很精妙/////////////////
//
//    // 移除字符串末尾的换行符（如果存在）
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
//////////////////////////////////ok,自己来实践一下
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
/////////////////////////////////////////////辗转相除法/////////////////////
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
///////////////////////////////理论存在，直接开始实践，回文的判断//////////////////////
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
#include <stdio.h>./////////////////////////////////计算e的近似值//////////////
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

/////////////////显示偶数平方值//////////////////
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
//        // 打印空格
//        for (int j = 0; j < n - i; j++) {
//            printf(" ");
//        }
//        // 打印字母
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

//////////////////////////////////回文判断////////////////////////////
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
//}//////////////////////////////////////////////////回文题////////////////
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
////////////////////////////////日历的打印///////////////////
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
//////////////////打印三角形，启动/////////////////
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
/////////////////////////计算单词的值/////////////////////////////////////////

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
////////////////////////////统计元音字母个数//////////////////////
//这个题让想起来回文的那一部分，主要就是删除非必要元素
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
//        o = 0;////////////////////重置o=0便于下一次循环的正常进行//////////////////////
//    }
//    return k;
//}
//int main() {
//    char str[10000];//////////////刚才oj报错，我尝试了几个语句，发现并没有啥问题，就想着会不会是数组太小，超出了他的样例输入，然后一改就通过了///////////////////////
//    scanf("%100000[^\n]", str);
//    toLower(str);
//    int d = shanchu(str);
//    printf("%d", d);
//    return 0;
//}
///////////////////////////牛顿迭代法///////////////
//#include <stdio.h>
//#include <math.h>
//
//double osqrt(double a, double r) {
//    double c = a;
//    double d = c / 2 + a / (2 * c);
//    double j = d;
//    while (fabs(c-d)> r*j) {////////////////////////while里是真命题才能正常循环，刚才一直写《r我说咋不行，没想到hh多学着加断点，调试，看看自己的代码到哪里不能正常赋值与运行了
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
/////////////////////二进制转十进制//////////////////
//原来掌控好原理这么简单//感觉也可以做个程序了
//int main() {
//    int n;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        ///////此循环是用于换行处理的，输入两行内容/////////
//        char number[33];
//        scanf("%s\n", number);
//        int ignor = 0;
//        for (int k = 0; number[k] != '\0'; k++) {
//            ignor += (number[k] - '0') * pow(2, strlen(number) - 1 - k);
//        }
//    }
//    return 0;
//}///////////////////下面这个成功了/////////////////
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
//}//////////////////////////检查数中重复的数字////////////////我写的蠢代码，气笑了////
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
//////////////////////////第一次修改，bug出现在整形单个提取必须用空格隔开/////////////////
//int main() {
//    int num[10000];
//    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int krr[10] = { 0 }; // 初始化计数数组为0
//    int k = 0;
//    char ch;
//    // 使用scanf来读取输入
//    while ((ch=getchar())!='\n') {
//        scanf("%d", &num[k]);
//        // 使用num[k]作为下标来增加计数
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
//}/////////////////////////////第二次修改的妙手体现在ascll码值的应用///////////////////惊天妙手/////////////
//#include <stdio.h>
//
//int main() {
//    int count[10] = { 0 };  // 用于存储0 - 9每个数字出现的次数
//    char ch;
//
//    // 逐个字符读取输入
//    while ((ch = getchar()) != '\n') {
//        if (ch >= '0' && ch <= '9') {
//            count[ch - '0']++;
//        }
//    }
//
//    // 输出0 - 9
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", i);
//    }
//    printf("\n");
//
//    // 输出每个数字出现的次数
//    for (int i = 0; i < 10; i++) {
//        printf("%3d", count[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
///////////////////矩阵求和////////////
//很明显，他是一个动态数组分配的问题/////////////目前动态确定数组大小的目的达到了
//#include <stdio.h>
//#include <stdlib.h>
//int main() {////////////就是忽略了a[0][0]的情况，不是从a[1][1]开始的
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
//}////////////第二此尝试
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int b;
//    int** a;
//    scanf("%d", &b);
//    a = (int**)malloc(b * sizeof(int*));
//    for (int i = 0; i < b; i++) {//从0开始
//        a[i] = (int*)malloc(b * sizeof(int)); // 修改这里，分配b个整数的空间
//    }
//    for (int y = 0; y < b; y++) { // 修改这里，循环从0开始，条件为< b
//        for (int p = 0; p < b; p++) { // 修改这里，循环从0开始，条件为< b
//            scanf("%d", &a[y][p]);
//        }
//    }
//    for (int y = 0; y < b; y++) { // 修改这里，循环从0开始，条件为< b
//        int ko = 0;//相当于初始条件
//        for (int p = 0; p < b; p++) { // 修改这里，循环从0开始，条件为< b
//            ko = ko + a[y][p];
//        }
//        printf("%5d", ko);
//    }
//    printf("\n");
//    for (int y = 0; y < b; y++) { // 修改这里，循环从0开始，条件为< b
//        int ko = 0;
//        for (int p = 0; p < b; p++) { // 修改这里，循环从0开始，条件为< b
//            ko = ko + a[p][y];
//        }
//        printf("%5d", ko);
//    }
//    return 0;
//}
///////////////凯撒加密//////
////这个是一维数组
//#include<string>
//void zhuan(char*str,int a){
//    //遍历整个数组
//    for (int i = 0; i < strlen(str); i++) {
//        if ((str[i] >= 'a' )&& (str[i]<= 'z')) {
//            str[i] = str[i] +a%26;///////////具体逻辑知道了，但是这个题有个致命问题，当我的输入字母较大时，我的偏移数也较大时，那么ascii码值会超过
//            /////////‘z’的ascii码值，导致打印出未知字符
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
////修改其中的循环
//for ((str[i] >= 'a') && (str[i] <= 'z')) {
//    str[i] = ((str[i] - 'a' + a - '0') % 26) + 'a';/////////这就让这个偏移程度始终存在与26个大小之内了；脑子当时瓦特了，居然写了个-‘0’
//}
//////////////第二次尝试///////
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
////////////////gcd(a,b)函数求最大公约数，这我可太会了hh/////////////
//int gcd(int m, int n){
//    while (n!=0) {
//        int c = n;
//        n = m % n;
//        m = c;
//    }
//    return m;
//}
/////////第K位数字////////////
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
//int digit(int n, int k) {///////目前判断是除法的正确使用
//    int c = 1;
//    int d = 1;
//    int q = 0;
//    int j = 1; int kk=n;
//    int g;
//    while (d != 0) {
//        c = c * 10;
//        d = n/ c;
//        q++;
//    }////////q用于确定是几位数，若q=3则这个式子是三位数
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
//}//////////////////////////////这个是最终答案，断点调试了一晚上，今早就想明白了，做题也快
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
    //    q++;///////////计算出有几位数
    //}
//    for (int i = 1; i <= q - k; i++) {
//        g = 1 + i - 1;
//        while (g < q) {
//            j = j * 10;
//            g++;计算出锁定第几位数字以及他后面的数字的表达
//        }
//         kk = kk - kk / j * j;
//         j = 1;//////////kk的计算不无作用
//    }
//    while (ll < k) {///////对锁定的位数除并取整
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
//            if (i== 1 || i == 3 || i == 5 || i==7||i == 8 || i ==10 || i==12) {//////////////当时少写了个7，我就说逻辑这么好为啥会错
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
//}/////////////////////////////关于局部变量栈的问题//////////////
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
//}//////////////////////课本上的小题///////
//#include <stdio.h>
//
//int main() {
//    int ix = 1, iy = 2, iz = 3;
//    printf("%d %d\n", ix = iy = iz,ix = iy == iz);//这里计算的结果是3 3，为什么，默认是从右向左读取，对于这个，刚开始iy!=iz故判断为零，然后ix赋值为零，最后前面的连续赋值导致ix变为0，
//   //最终ix结果都是3，故打印两个ix结果3
//    return 0;
//}
////////////////////波兰表达式，逆波兰表达式/////////////
//#include<stdlib.h>
//int BoLan() {//////////////通过调用stdlib的库，将字符型通过atoi转换成整形，也课通过atof转换成浮点型
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
// ////////////逆波兰表达式//////////////////
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
///////////////冒泡排序解决-选择排序-函数////////////////
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
////                int aa = a[j];////////////冒泡排序也能做，不过这题是个废题，没有必要去做
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
//}/////////////////////////////////////快速计算x^n////////////////////////
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
//            return c * c * x;///////以前遇到一些题跑不出来或者报错，尤其是计算函数题就喜欢用豆包跑，现在学会了断点调试真的能省很大一份力；
//        }
//       
//    }
//}
/////////////////////“最小”和“最大”单词/////////////////
//首先，判断字符长度最为关键，长度为4直接停止录入；
//int main() {//////////////第一次尝试失败，下面是豆包老师教的，走起！！！
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
//            str[strlen(str)]='9';//////////这个可以判断哪两个单词为一组
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
//}//////////////////////////第二次尝试u//////////
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
//////////////念整数/////////////
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
//    }///王华啊，你的答案真是个啥比，可以说蠢到家了
//    return 0;
//}
///////继刚才用字符串的输入与输出，实则整形的单字符输入与输出是很好操作的，只需要用除法
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
//}////////////////狠狠的拿下
///////////////////字符串比对///////////////////

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
 //////////////很难受啊，调试了两天的程序，编码也都正确，为啥就是oj不通过？？？好难受