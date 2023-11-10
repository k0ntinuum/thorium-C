#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//typedef int64_t i64;
typedef u_int32_t u32;
const u32 N = 8;
const u32 T = 8;
u32 F[N][N] = {0};
u32 f[N][N] = {0};
u32 g[N][N] = {0};
u32 temp[N] = {};
u32 p[T];
u32 c[T];
u32 d[T];
u32 check_p[T];
u32 e[T];
u32 w[T];

#include"print.c"
#include"matrix.c"
#include"encode.c"
#include"encrypt.c"
#include"demo.c"
	
int main() {
	encrypt_demo();
}
