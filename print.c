void rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cls() {
    printf( "\x1b[2J");
}

void hide_cursor() {
    printf("\x1b[?25l");
}
void show_cursor() {
    printf("\x1b[?25h");
}

void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}

void print_symbol(u32 i) {
	printf("%s", i == 0 ? "O" : "|");
}
void print_f(u32 h[N][N]) {
	for (u32 i = 0; i < N; i++) {
        printf("            ");
		for (u32 j = 0; j < N; j++) printf("%s", h[i][j] == 0 ? "O " : "| ");
		printf("\n");
	}
}
void print_text(u32 t[N]) {
	for (u32 j = 0; j < T; j++) printf("%s", t[j] == 0 ? "O" : "|");
}

void print_status() {
        printf("p = ");print_text(p);printf("\n");
        printf("c = ");print_text(c);printf("\n");
        printf("d = ");print_text(d);printf("\n\n");
}
void print_f_color(u32 h[N][N]) {
    u32 hue = 255;
	for (u32 i = 0; i < N; i++) {
        printf("            ");
		for (u32 j = 0; j < N; j++) {
            //h[i][j] == 0 ? rgb(255,0,0) : rgb(255,255,0);
            h[i][j] == 0 ? rgb(hue,hue,hue) : rgb(50,50,50);
            //printf("%s", h[i][j] == 0 ? "O " : "| ");
            printf("%s", h[i][j] == 0 ? "O " : "\u2588\u2588");
        }
		printf("\n");
	}
}
	