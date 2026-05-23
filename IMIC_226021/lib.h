#pragma once
int cong_so_nguyen(int so_1, int so_2);
int phep_nhan(int so_nguyen_1, int so_nguyen_2);

/*
* @brief điếm số ký tự 
* @param: địa chỉ bắt đầu của chuỗi
* @return: số lượng ký tự của chuỗi
*/
int dem_so_ky_tu(char* str);

/*
* @brief: tính tổng các phần tử trong mảng
* @param int* địa chỉ bắt đầu của mãng
* @param int: số lượng phần tử của mãng 
* @return: int kết quả của tổng 
*/
int arr_sum(int* arr, int size);

/*
* @brief: độ dài chuỗi
* @param: địa chỉ bắt đầu của chuỗi
* @return: độ dài của chuỗi
*/
int my_strlen(char* my_strlen);

/*
* @brief: in hoa ký tự
* @param: địa chỉ bắt đầu của chuỗi
* @return: char chuỗi in hoa
*/
char* in_hoa(char* in_ky_tu);

/*
* @brief: tìm ký tự 
* @param: địa chỉ bắt đầu của chuỗi
* @param: ký tự cần tìm
* return: int vị trí
*/

int vi_tri(char* tim_ky_tu, char ky_tu);

/*
* @brief: nối 2 chuỗi
* @param: địa chỉ bắt đầu chuỗi 1
* @param: địa chỉ bắt đầu chuỗi 2
* @return: char chuỗi mới
*/
char* noi_chuoi(char* chuoi_1, char* chuoi_2);

/*
* @breif: kiểm tra chuỗi trùng 
* @param: địa chỉ bắt đầu chuỗi 1
* @param: địa chỉ bắt đầu chuỗi 2
* return: 1 or 0
*/
int kiem_tra(char* A, char* B);