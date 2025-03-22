//#include <stdio.h>
//
//// 写一个函数将数组中的元素全部设置为某个值
//// 参数说明：
////   int arr[]：数组名，表示数组的首地址
////   int sz：数组元素个数
////   int set：要设置的值
//void set_arr(int arr[], int sz, int set) {
//    for (int i = 0; i < sz; i++) {
//        arr[i] = set; // 将数组的每个元素设置为指定的值
//    }
//}
//
//// 写一个函数打印数组的内容
//// 参数说明：
////   int arr[]：数组名，表示数组的首地址
////   int sz：数组元素个数
//void print_arr(int arr[], int sz) {
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]); // 打印数组的每个元素
//    }
//}
//
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 定义并初始化数组
//    int sz = sizeof(arr) / sizeof(arr[0]); // 计算数组的大小
//
//    // 打印初始数组，数组传参，写数组名就可以
//    print_arr(arr, sz);
//    printf("\n");
//
//    // 将数组中的所有元素设置为 -1
//    set_arr(arr, sz, -1);
//
//    // 打印修改后的数组
//    print_arr(arr, sz);
//    printf("\n");
//
//    return 0;
//}