//#include <stdio.h>
//
//// дһ�������������е�Ԫ��ȫ������Ϊĳ��ֵ
//// ����˵����
////   int arr[]������������ʾ������׵�ַ
////   int sz������Ԫ�ظ���
////   int set��Ҫ���õ�ֵ
//void set_arr(int arr[], int sz, int set) {
//    for (int i = 0; i < sz; i++) {
//        arr[i] = set; // �������ÿ��Ԫ������Ϊָ����ֵ
//    }
//}
//
//// дһ��������ӡ���������
//// ����˵����
////   int arr[]������������ʾ������׵�ַ
////   int sz������Ԫ�ظ���
//void print_arr(int arr[], int sz) {
//    for (int i = 0; i < sz; i++) {
//        printf("%d ", arr[i]); // ��ӡ�����ÿ��Ԫ��
//    }
//}
//
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // ���岢��ʼ������
//    int sz = sizeof(arr) / sizeof(arr[0]); // ��������Ĵ�С
//
//    // ��ӡ��ʼ���飬���鴫�Σ�д�������Ϳ���
//    print_arr(arr, sz);
//    printf("\n");
//
//    // �������е�����Ԫ������Ϊ -1
//    set_arr(arr, sz, -1);
//
//    // ��ӡ�޸ĺ������
//    print_arr(arr, sz);
//    printf("\n");
//
//    return 0;
//}