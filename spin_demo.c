
void spin_demo() {
    cls();
    hide_cursor();
    randomize_key(F);
    copy_key(f,F);
    printf("\n\n\n\n");
    
    //print_f_color(f);
    //printf("\n");
    for (u32 i = 0; i < 1000000 ; i++) {
        auto_spin(f,i%N);
        usleep(70000);
        cursor_to(2,0);
        print_f_color(f);
        printf("\n");

    }
    show_cursor();
	
}