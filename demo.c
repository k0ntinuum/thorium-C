
void encrypt_demo() {
    u32 h = 200;
    u32 eh = 100;
    randomize_key(F);
    copy_key(f,F);
    printf("\n\nf = \n");
	print_f(f);
    printf("\n\n");
    for (int i = 0; i < 10; i++) {
        randomize_p();
        copy_text(check_p,p);
        rgb(255,255,255);
        printf("f( ");
        rgb(h,0,0);
        print_text(p);
        rgb(255,255,255);
        printf(" ) = ");
        encrypt();
        rgb(h,h,0);
        print_text(c);
        update_e();
        printf("   ");
        rgb(eh,eh,eh);
        print_text(e);
        decrypt();
        check_decryption();
        printf("\n");
    }
}