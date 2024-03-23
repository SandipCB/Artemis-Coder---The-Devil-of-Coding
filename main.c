#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <dos.h>
#include <string.h>
#include <time.h>
//#include <graphics.h>
double marks_of_users;
char users_name[50];
char users_password[50];
double score_of_word_game;
double memory_test_score;
void g(int r, int n)
{
    COORD a;
    a.X=r;
    a.Y=n;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void quizintrctn();
void gameintrctn();
void game();
void memory_test();
void loadingBar_for_home();
void loadingBar();
int main2();
void sign_in();
void sign_up();
void profile();
void front_page();
void home_page();
void exit_page();
void help();
void rate();
void about_us();
//computer programme start
void computer_programme();
void what_is_computer_program();
void types_of_language();
void History_of_c_programme();
void History_of_Cpp();
void History_of_python();
void History_of_java();
void History_of_HTML();
void Benefits_of_learning_com_pro_languages_nd_skills();
void Benefits_of_learning_com_pro_languages_nd_skills_part_1();
void Benefits_of_learning_com_pro_languages_nd_skills_part_2();
void what_is_a_programm();
void what_is_a_function();
void what_is_a_class();
void what_is_instruction_or_command_part_1();
void what_is_instruction_or_command_part_2();
void what_is_instruction_or_command_part_3();
void what_is_instruction_or_command_part_4();
void what_is_instruction_or_command_part_5();
void code_literacy();
void code_literacy_1();
void why_is_coding_literacy_important_part_1();
void why_is_coding_literacy_important_part_2();
void why_is_coding_literacy_important_part_3();
void Difference_coding_nd_programming();
void Coding();
void programming_part_1();
void programming_part_2();
void programming_part_3();
void programming_part_4();
void how_can_i_learn_to_code_for_free_part_1();
void how_can_i_learn_to_code_for_free_part_2();
void reasons_part_0();
void reasons_part_1();
void reasons_part_2();
void reasons_part_3();
void reasons_part_4();
void reasons_part_5();
void reasons_part_6();
void reasons_part_7();
void reasons_part_8();
void reasons_part_9();
void reasons_part_10();
void reasons_part_11();
void reasons_part_12();
void reasons_part_13();
void reasons_part_14();
void Ruby_1();
void Ruby_2();
void Ruby_3();
void SQL_1();
void SQL_2();
void SQL_3();
void SQL_4();
void SQL_5();
void CSS_1();
void CSS_2();
void PHP_1();
void PHP_2_uses();
void PHP_3();
void Java_1();
void Java_2();
void Scripting_language_1();
void Redux_1();
void Redux_2();
void Swift();
void jQuery_1();
void jQuery_2();
//computer programming part end

//top ten part start
void top10();
void Best_Selling_phone();
void Bike();
void Books();
void Bottel_Water();
void Car_2020();
void Car_all_time();
void Caves();
void Computer();
void Dress();
void Expensive_app();
void Laptop();
void Mall();
void Mobile_Phone();
void Shoes();
void Tree();
void Woman_Shoe();

// top ten part end

//astronomy part strt
void introduction_to_astronomy();
void Black_hole();
void Blazar();
void Brown_dwarf();
void Future_of_space_exploration_part_1();
void Future_of_space_exploration_part_2();
void Future_of_space_exploration_part_3();
void Galaxy();
void Globular_cluster();
void History_of_exploration_part_1();
void Hitory_of_exploration_part_2();
void History_of_exploration_part_3();
void Hypergaint();
void Index_of_Astronomy();
void Meteoroid();
void Nebula();
void Protostar();
void Red_dwarf();
void Space_exploration();
void Supercluster();
void Supergaint_star();
void Targets_of_exploration_part_1();
void Targets_of_exploration_part_2();
void Targets_of_exploration_part_3();
void Targets_of_exploration_part_4();
void Timeline_of_astronomy_part_1();
void Timeline_of_astronomy_part_2();
void Timeline_of_astronomy_part_3();
void Timeline_of_astronomy_part_4();
void Timeline_of_astronomy_part_5();
void Timeline_of_astronomy_part_6();
void Timeline_of_astronomy_part_7();
void Timeline_of_astronomy_part_8();
void Timeline_of_astronomy_part_9();
void Timeline_of_astronomy_part_10();
void Timeline_of_astronomy_part_11();
void Timeline_of_astronomy_part_12();
void Timeline_of_astronomy_part_13();
void Timeline_of_astronomy_part_14();
void Timeline_of_astronomy_part_15();
void Timeline_of_astronomy_part_16();
void Timeline_of_astronomy_part_17();
void Timeline_of_astronomy_part_18();
void White_dwarf();
void White_hole();
void Yellow_hypergaint();


//astronomy part end
void set1();
void set1_1();
void set1_2();
void set1_2();
void set1_3();
void set1_4();
void set1_5();
void set1_6();
void set1_7();
void set1_8();
void set1_9();
void set1_9();
void set1_10();
void set1_11();
void set1_12();
void set1_13();
void set1_14();
void set1_15();
void set1_16();
void set1_17();
void set1_18();
void set1_19();
void set2_1();
void set2_2();
void set2_3();
void set2_4();
void set2_5();
void set2_6();
void set2_7();
void set2_8();
void set2_9();
void set2_10();
void set2_11();
void set2_12();
void set2_13();
void set2_14();
void set2_15();
void set2_16();
void set2_17();
void set2_18();
void set2_19();
void set2_20();
//social media start
void smedia();
void Social_Media();
void History_of_social_media();
void History_of_Mobile_social_networking();
void Facebook();
void YouTube();
void WhatsApp();
void WeChat();
void Instagram();
void QQ();
void TikTok();
void Twitter();
void SnapChat();
void LinkedIn();
void Telegram();
void Skype();
//social media end

//info distric part start

void info_of_districks();
void Brahmanbaria_part_1();
void B_baria_part_2();
void Bandarban_part_1();
void Barisal_part_1();
void Bogra_part_1();
void Chandpur_part_1();
void Chapai_part_1();
void Chittagong_part_1();
void Cittagong_part_2();
void Comilla_part_1();
void Comilla_part_2();
void Cox_s_bazar_part_1();
void Dhaka_part_1();
void Dhaka_part_2();
void Dhaka_part_3();
void Dhaka_part_4();
void Dinajpur_part_1();
void Faridpur_part_1();
void Faridpur_part_2();
void Feni_part_1();
void Feni_part_2();
void Gaibandha_part_1();
void Gazipur_part_1();
void Gopalganj_part_1();
void Gopalganj_part_2();
void Gopalganj_part_3();
void Habiganj_part_1();
void Joypurhat_part_1();
void Khagrachhari_part_1();
void Khagrachhari_part_2();
void Kishoreganj_part_1();
void Kishoreganj_part_2();
void Kishoreganj_part_3();
void Kishoreganj_part_4();
void Kurigram_part_1();
void Lakshmipur_part_1();
void Lalmonirhat_part_1();
void Madaripur_part_1();
void Madaripur_part_2();
void Manikganj_part_1();
void Manikganj_part_2();
void Manikganj_part_3();
void Moulvibazar_part_1();
void Munshiganj_part_1();
void Naogaon_part_1();
void Narayanganj_part_1();
void Narayanganj_part_2();
void Narayanganj_part_3();
void Natore_part_1();
void Nilphamari_part_1();
void Noakhali_part_1();
void Noakhali_part_2();
void Noakhali_part_3();
void Pabna_part_1();
void Panchagarh_part_1();
void Rajbari_part_1();
void Rajbari_part_2();
void Rajshahi_part_1();
void Rangamatil_part_1();
void Rangpur_part_1();
void Rangpur_part_2();
void Shariatpur_part_1();
void Shariatpur_part_2();
void Sirajganj_part_1();
void Sunamganj_part_1();
void Sylhet_part_1();
void Tangail_part_1();
void Tangail_part_2();
void Tangail_part_3();
void Thakurgaon_part_1();

//info of district part end

//quiz part

int sec(void);
double easy_marks(double s, double e);
double medium_marks(double s, double e);
double hard_marks(double s, double e);
int printrandom(int l, int u, int c);
int main();
int quiz_main();
void quiz_part();
void ae1();
void ae2();
void ae3();
void ae4();
void ae5();
void ae6();
void ae7();
void ae8();
void ae9();
void ae10();
void ae11();
void ae12();
void ae13();
void ae14();
void ae15();
void ce1();
void ce2();
void ce3();
void ce4();
void ce5();
void ce6();
void ce7();
void ce8();
void ce9();
void ce10();
void se1();
void se2();
void se3();
void se4();
void se5();
void se6();
void se7();
void se8();
void se9();
void se10();
void se11();
void se12();
void se13();
void se14();
void se15();
void de1();
void de2();
void de3();
void de4();
void de5();
void de6();
void de7();
void de8();
void de9();
void de10();
void de11();
void de12();
void de13();
void de14();
void de15();
void mquiz();
void cm1();
void cm2();
void cm3();
void cm4();
void cm5();
void cm6();
void cm7();
void cm8();
void cm9();
void cm10();
void dm1();
void dm2();
void dm3();
void dm4();
void dm5();
void dm6();
void dm7();
void dm8();
void dm9();
void dm10();
void dm11();
void dm12();
void dm13();
void dm14();
void dm15();
void tm1();
void tm2();
void tm3();
void tm4();
void tm5();
void am1();
void am2();
void am3();
void am4();
void am5();
void am6();
void am7();
void am8();
void am9();
void am10();
void am11();
void am12();
void am13();
void am14();
void am15();
void sm1();
void sm2();
void sm3();
void sm4();
void sm5();
void sm6();
void sm7();
void sm8();
void sm9();
void sm10();
void sm11();
void sm12();
void sm13();
void sm14();
void sm15();
void hard_quiz_part();
void ah1();
void ah2();
void ah3();
void ah4();
void ah5();
void ah6();
void ah7();
void ah8();
void ah9();
void ah10();
void ah11();
void ah12();
void ah13();
void ah14();
void ah15();
void ch1();
void ch2();
void ch3();
void ch4();
void ch5();
void ch6();
void ch7();
void ch8();
void ch9();
void ch10();
void sh1();
void sh2();
void sh3();
void sh4();
void sh5();
void sh6();
void sh7();
void sh8();
void sh9();
void sh10();
void sh11();
void sh12();
void sh13();
void sh14();
void sh15();
void th1();
void th2();
void th3();
void th4();
void th5();
void dh1();
void dh2();
void dh3();
void dh4();
void dh5();
void dh6();
void dh7();
void dh8();
void dh9();
void dh10();
void dh11();
void dh12();
void dh13();
void dh14();
void dh15();



//


int main()
{
L:
    loadingBar_for_home();
    front_page();
    sleep(5);
    main2();
    return 0;
}

int main2()
{
start:

    system("cls");
    for(int i=2; i<25; i++)
    {
        g(1,i);
        printf("!");
        g(118,i);
        printf("!");
    }
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("_");
        g(i,24);
        printf("_");
    }
    g(50,10);
    printf("sign in? press 1.");
    g(50, 11);
    printf("sign up? press 2.\n");
    g(50,12);
    int a;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        sign_in();
        break;
    case 2:
        sign_up();
        break;
    default:
        system("cls");
        g(50,10);
        printf("please give a correct number.");
        getch();
        goto start;
        break;
    }
}


void front_page()
{
    system("cls");
    system("color f4");
    int c=4,d=4, e=4;

    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c*c*7; j++)
        {
            if(j%(c*2)==d||j%(c*2)==c+i)
                printf (" ");
            else printf ("$");
        }
        --d;
        printf ("\n");
    }
    printf("\n\n\n\n\n\n\t\t\t\t\t\t   Hello.\n\t\t\t\t    Welcome to \"Digital GK Learning System\".\n\n\n\n\n");
    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c*c*7; j++)
        {
            if(j%(c*2)==e||j%(c*2)==c+i)
                printf (" ");
            else printf ("$");
        }
        --e;
        printf ("\n");
    }
}

//home page start

void home_page()
{
    system("cls");
    system("color 0A");
    for(int i=2; i<25; i++)
    {
        g(1,i);
        printf("0");
        g(118,i);
        printf("0");
    }
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("o");
        g(i,24);
        printf("o");
    }
    int
    n;

    g(24,5);
    printf("Please press 1 for knowing about \"DISTRICT INFORMATION OF BANGLADESH\".\n\t\t\t"
           "Please press 2 for knowing about \"COMPUTER PROGRAMMING\".\n\t\t\t"
           "Please press 3 for knowing about \"SOCIAL MEDIA\".\n\t\t\t"
           "Please press 4 for knowing about \"INTRODUCTION TO ASTRONOMY\".\n\t\t\t"
           "Please press 5 for knowing about \"WORLD TOP TEN THING\".\n\t\t\t"
           "Please press 6 for \"QUIZ\"\n\t\t\t"
           "Please press 7 for GAME\n\t\t\t"
           "Please press 8 for Your profile\n\t\t\t"
           "Please press 9 for Helping section\n\t\t\t"
           "Please press 10 for Rating us & Suggestion\n\t\t\t"
           "Please press 11 for knowing about us.\n\t\t\t"
           "Please press 12 sign out\n\t\t\t"
           "Please press 13 for close the programme\n\t\t");
    fflush(stdin);
    g(24,18);
    scanf("\t\t%d", &n);
    switch(n)
    {
    case 1:
        loadingBar();
        system("cls");
        system("color F2");
        info_of_districks();
        break;
    case 2:
        loadingBar();
        system("cls");
        system("color b1");
        computer_programme();
        break;
    case 3:
        loadingBar();
        system("cls");
        system("color e4");
        smedia();
        break;
    case 4:
        loadingBar();
        system("cls");
        system("color 71");
        introduction_to_astronomy();
        break;
    case 5:
        loadingBar();
        system("cls");
        system("color 61");
        top10();
        break;
    case 6:
        loadingBar();
        system("color 61");
        quiz_main();
        break;
    case 7:
        loadingBar();
        game();
        break;
    case 8:
        profile();
        getch();
        break;
    case 9:
        loadingBar();
        help();
        break;
    case 10:
        loadingBar();
        rate();
        break;
    case 11:
        loadingBar();
        about_us();
        help();
        break;
    case 12:
        loadingBar();
        main2();
        break;
    case 13:
        loadingBar();
        exit_page();
        exit;
        break;
    default:
        printf("wrong input\ntry again");
        sleep(1);
        home_page();
        break;

    }
}

//home page end


//computer prigramming part start

void computer_programme()
{
    system("cls");
    g(15,1);
    printf("1.What is computer programming?\n");
    g(15,2);
    printf("2.Types of language.\n");
    g(15,3);
    printf("3.History of C programme.\n");
    g(15,4);
    printf("4.History of C++.\n");
    g(15,5);
    printf("5.History of python.\n");
    g(15,6);
    printf("6.History of java.\n");
    g(15,7);
    printf("7.History of HTML.\n");
    g(15,8);
    printf("8.Benifits of learning computer programming language and skills.\n");
    g(15,9);
    printf("9.What is programme?\n");
    g(15,10);
    printf("10.What is a function?\n");
    g(15,11);
    printf("11.What is a class?\n");
    g(15,12);
    printf("12.What is instruction or command?\n");
    g(15,13);
    printf("13.Code literacy.\n");
    g(15,14);
    printf("14.Why is coding literacy important?\n");
    g(15,15);
    printf("15.Difference between coding and programming.\n");
    g(15,16);
    printf("16.Coding.\n");
    g(15,17);
    printf("17.Programming.\n");
    g(15,18);
    printf("18.How can i learn code for free?\n");
    g(15,19);
    printf("19.10 Reason.\n");
    g(15,20);
    printf("20.Ruby.\n");
    g(15,21);
    printf("21.SQL.\n");
    g(15,22);
    printf("22.CSS.\n");
    g(15,23);
    printf("23.PHP.\n");
    g(15,24);
    printf("24.Java.\n");
    g(15,25);
    printf("25.Scripting language.\n");
    g(15,26);
    printf("26.Redux.\n");
    g(15,27);
    printf("27.Swift.\n");
    g(15,28);
    printf("28.jQuery\n");
    printf("press 29 for homepage\npress 30 for exit\n\t\t");
    int a,b;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        system("cls");
        what_is_computer_program();

bck:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck;
            break;
        }

        break;
    case 2:
        system("cls");
        types_of_language();
bck1:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck1;
            break;
        }

        break;
    case 3:
        system("cls");
        History_of_c_programme();
bck2:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck2;
            break;
        }

        break;

    case 4:
        system("cls");
        History_of_Cpp();
bck3:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck3;
            break;
        }

        break;

    case 5:
        system("cls");
        History_of_python();
bck4:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck4;
            break;
        }

        break;

    case 6:
        system("cls");
        History_of_java();
bck5:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck5;
            break;
        }

        break;

    case 7:
        system("cls");
        History_of_HTML();
bck6:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck6;
            break;
        }

        break;

    case 8:
        system("cls");
        Benefits_of_learning_com_pro_languages_nd_skills();
        getch();
        Benefits_of_learning_com_pro_languages_nd_skills_part_1();
        getch();
        Benefits_of_learning_com_pro_languages_nd_skills_part_2();
bck7:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck7;
            break;
        }

        break;

    case 9:
        system("cls");
        what_is_a_programm();
bck8:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck8;
            break;
        }

        break;

    case 10:
        system("cls");
        what_is_a_function();
bck9:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck9;
            break;
        }

        break;

    case 11:
        system("cls");
        what_is_a_class();
bck10:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck10;
            break;
        }

        break;

    case 12:
        system("cls");
        what_is_instruction_or_command_part_1();
        getch();
        what_is_instruction_or_command_part_2();
        getch();
        what_is_instruction_or_command_part_3();
        getch();
        what_is_instruction_or_command_part_4();
        getch();
        what_is_instruction_or_command_part_5();
bck11:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck11;
            break;
        }


        break;

    case 13:
        system("cls");
        code_literacy();
        getch();
        code_literacy_1();
bck12:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck12;
            break;
        }
        break;

    case 14:
        system("cls");
        why_is_coding_literacy_important_part_1();
        getch();
        why_is_coding_literacy_important_part_2();
        getch();
        why_is_coding_literacy_important_part_3();
bck13:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck13;
            break;
        }

        break;

    case 15:
        system("cls");
        Difference_coding_nd_programming();
bck14:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck14;
            break;
        }
        break;

    case 16:
        system("cls");
        Coding();
bck15:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck15;
            break;
        }
        break;

    case 17:
        system("cls");
        programming_part_1();

        getch();
        programming_part_2();
        getch();
        programming_part_3();
        getch();
        programming_part_4();
bck16:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck16;
            break;
        }
        break;

    case 18:
        system("cls");
        how_can_i_learn_to_code_for_free_part_1();
        getch();
        how_can_i_learn_to_code_for_free_part_2();
bck17:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck17;
            break;
        }
        break;

    case 19:
        system("cls");
        reasons_part_0();
        getch();
        reasons_part_1();
        getch();
        reasons_part_3();
        getch();
        reasons_part_4();
        getch();
        reasons_part_5();
        getch();
        reasons_part_6();
        getch();
        reasons_part_7();
        getch();
        reasons_part_8();
        getch();
        reasons_part_9();
        getch();
        reasons_part_10();
        getch();
        reasons_part_11();
        getch();
        reasons_part_12();
        getch();
        reasons_part_13();
        getch();
        reasons_part_14();
bck18:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck18;
            break;
        }
        break;

    case 20:
        system("cls");
        Ruby_1();
        getch();
        Ruby_2();
        getch();
        Ruby_3();
bck19:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck19;
            break;
        }
        break;

    case 21:
        system("cls");
        SQL_1();
        getch();
        SQL_2();
        getch();
        SQL_3();
        getch();
        SQL_4();
        getch();
        SQL_5();
bck20:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck20;
            break;
        }
        break;

    case 22:
        system("cls");
        CSS_1();
        getch();
        CSS_2();
bck21:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck21;
            break;
        }
        break;

    case 23:
        system("cls");
        PHP_1();
        getch();
        PHP_2_uses();
        getch();
        PHP_3();
bck22:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck22;
            break;
        }
        break;
    case 24:
        system("cls");
        Java_1();
        getch();
        Java_2();
bck23:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck23;
            break;
        }
        break;
    case 25:
        system("cls");
        Scripting_language_1();
bck24:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck24;
            break;
        }
//            getch();

        break;
    case 26:
        system("cls");
        Redux_1();
        getch();
        Redux_2();
bck25:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck25;
            break;
        }
        break;
    case 27:
        system("cls");
        Swift();
bck26:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck26;
            break;
        }
        break;
    case 28:
        system("cls");
        jQuery_1();
        getch();
        Redux_2();
bck27:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            computer_programme();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck27;
            break;
        }
        break;
    case 29:
        home_page();
        break;
    case 30:
        exit_page();
        exit;
        break;
    default:
        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t You have enter wrong number.\n\t\t\t\tPlease try again");
        sleep(1);
        computer_programme();
        break;

    }
}
void what_is_computer_program()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("1 what is computer programming.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void types_of_language()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("2 types of language.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void History_of_c_programme()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("3 History of c programme.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_Cpp()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("4 History of C++.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_python()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("5 History of python.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_java()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("6 History of java.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_HTML()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("7 History of HTML.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Benefits_of_learning_com_pro_languages_nd_skills()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("8 Benefits of learning com pro languages nd skills.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Benefits_of_learning_com_pro_languages_nd_skills_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("9 Benefits of learning com pro languages nd skills part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Benefits_of_learning_com_pro_languages_nd_skills_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("10 Benefits of learning com pro languages nd skills part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_a_programm()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("11 what is a programm.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_a_function()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("12 what is a function.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_a_class()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("13 what is a class.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_instruction_or_command_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("14 what is instruction or command part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_instruction_or_command_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("15 what is instruction or command part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_instruction_or_command_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("16 what is instruction or command part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_instruction_or_command_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("17 what is instruction or command part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void what_is_instruction_or_command_part_5()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("18what is instruction or command part-5.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void code_literacy()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("19 code literacy.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void code_literacy_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("20 code literacy 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void why_is_coding_literacy_important_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("21 why is coding literacy important part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void why_is_coding_literacy_important_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("22 why is coding literacy important part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void why_is_coding_literacy_important_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("23 why is coding literacy important part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Difference_coding_nd_programming()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("24 Difference coding nd programming.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Coding()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("25 Coding.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void programming_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("26 programming part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void programming_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("27 programming part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void programming_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("28 programming part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void programming_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("29 programming part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void how_can_i_learn_to_code_for_free_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("30 how can i learn to code for free part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void how_can_i_learn_to_code_for_free_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("31 how can i learn to code for free part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_0()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("32 10 reasons.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("33 10 reasons part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("34 10 reasons part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("35 10 reasons part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("36 10 reasons part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_5()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("37 10 reasons part-5.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_6()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("38 10 reasons part-6.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_7()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("39 10 reasons part-7.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_8()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("40 ----10 reasons part-8.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_9()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("41 10 reasons part-9.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_10()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("42 10 reasons part-10.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_11()
{
    system("cls");
    system("cls");
    FILE *file;
    char c;
    file = fopen("43---10 reasons part-11.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_12()
{
    system("cls");
    system("cls");
    FILE *file;
    char c;
    file = fopen("44---10 reasons part-12.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_13()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("45----10 reasons part-13.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void reasons_part_14()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("46   --10 reasons part-14.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Ruby_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("47 Ruby 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Ruby_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("48 Ruby 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Ruby_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("49 Ruby 3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SQL_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("50 SQL 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SQL_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("51 SQL 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SQL_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("52 SQL 3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SQL_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("53 SQL 4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SQL_5()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("54 SQL 5.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void CSS_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("55 CSS 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void CSS_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("56 CSS 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void PHP_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("57 PHP 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void PHP_2_uses()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("58 PHP 2 (uses).txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void PHP_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("59 PHP 3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Java_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("60 Java 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Java_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("61 Java 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Scripting_language_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("62  Scripting language 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Redux_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("63 Redux 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Redux_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("64 Redux 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Swift()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("65 Swift.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void jQuery_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("66 jQuery 1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void jQuery_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("67 jQuery 2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
//computer programming part end




//Astronomy part

void introduction_to_astronomy()
{
    system("cls");
    printf("1.Timeline of Astronomy\n2.Space exploration\n"
           "3.History of exploration\n4.Targets of exploration\n"
           "5.Future of space exploration\n6.Black hole\n7.White hole\n8.Galaxy\n9.Nebula\n"
           "10.Ptotostat\n11.Blazar\n12.Supercluster\n13.Brown dwarf\n14.White dwarf\n"
           "15.Red dwarf\n16.Globular\n17.Meteoroid\n18.Supergiant star\n19.Hypergiant\n20.Yellow Hypergiant\n");
    printf("press 21 for home page\npress 22 for exit\n\t\t");
    int a,b;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        system("cls");
        Timeline_of_astronomy_part_1();
        getch();
        Timeline_of_astronomy_part_2();
        getch();
        Timeline_of_astronomy_part_3();
        getch();
        Timeline_of_astronomy_part_4();
        getch();
        Timeline_of_astronomy_part_5();
        getch();
        Timeline_of_astronomy_part_6();
        getch();
        Timeline_of_astronomy_part_7();
        getch();
        Timeline_of_astronomy_part_8();
        getch();
        Timeline_of_astronomy_part_9();
        getch();
        Timeline_of_astronomy_part_10();
        getch();
        Timeline_of_astronomy_part_11();
        getch();
        Timeline_of_astronomy_part_12();
        getch();
        Timeline_of_astronomy_part_13();
        getch();
        Timeline_of_astronomy_part_14();
        getch();
        Timeline_of_astronomy_part_15();
        getch();
        Timeline_of_astronomy_part_16();
        getch();
        Timeline_of_astronomy_part_17();
        getch();
        Timeline_of_astronomy_part_18();
bck1:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck1;
            break;
        }
        break;
    case 2:
        system("cls");
        Space_exploration();
bck2:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck2;
            break;
        }
        break;
    case 3:
        system("cls");
        History_of_exploration_part_1();
        getch();
        Hitory_of_exploration_part_2();
        getch();
        History_of_exploration_part_3();
bck3:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck3;
            break;
        }
        break;
    case 4:
        system("cls");
        Targets_of_exploration_part_1();
        getch();
        Targets_of_exploration_part_2();
        getch();
        Targets_of_exploration_part_3();
        getch();
        Targets_of_exploration_part_4();
bck4:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck4;
            break;
        }
        break;
    case 5:
        system("cls");
        Future_of_space_exploration_part_1();
        getch();
        Future_of_space_exploration_part_2();
        getch();
        Future_of_space_exploration_part_3();
bck5:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck5;
            break;
        }
        break;
    case 6:
        system("cls");
        Black_hole();
bck6:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck6;
            break;
        }
        break;
    case 7:
        system("cls");
        White_hole();
bck7:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck7;
            break;
        }
        break;
    case 8:
        system("cls");
        Galaxy();
bck8:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck8;
            break;
        }
        break;
    case 9:
        system("cls");
        Nebula();
bck9:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck9;
            break;
        }
        break;
    case 10:
        system("cls");
        Protostar();
bck10:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck10;
            break;
        }
        break;
    case 11:
        system("cls");
        Blazar();
bck11:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck11;
            break;
        }
        break;
    case 12:
        system("cls");
        Supercluster();
bck12:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck12;
            break;
        }
        break;
    case 13:
        system("cls");
        Brown_dwarf();
bck13:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck13;
            break;
        }
        break;
    case 14:
        system("cls");
        White_dwarf();
bck14:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck14;
            break;
        }
        break;
    case 15:
        system("cls");
        Red_dwarf();
bck15:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck15;
            break;
        }
        break;
    case 16:
        system("cls");
        Globular_cluster();
bck16:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck16;
            break;
        }
        break;
    case 17:
        system("cls");
        Meteoroid();
bck17:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck17;
            break;
        }
        break;
    case 18:
        system("cls");
        Supergaint_star();
bck18:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck18;
            break;
        }
        break;
    case 19:
        system("cls");
        Hypergaint();
bck19:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck19;
            break;
        }
        break;
    case 20:
        system("cls");
        Yellow_hypergaint();
bck20:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Back menu press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            introduction_to_astronomy();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck20;
            break;
        }
        break;
    case 21:
        home_page();
        break;
    case 22:
        exit_page();
        exit;
        break;
    default:
        system("cls");
        printf("you have given wrong number.\n please try again");
        sleep(1);
        introduction_to_astronomy();
    }


}



void Black_hole()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Black hole.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Blazar()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Blazar.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Brown_dwarf()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Brown dwarf.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Future_of_space_exploration_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Future of space exploration; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Future_of_space_exploration_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Future of space exploration; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Future_of_space_exploration_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Future of space exploration; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Galaxy()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Galaxy.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Globular_cluster()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Globular cluster.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_exploration_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("History of exploration; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Hitory_of_exploration_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Hitory of exploration; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_exploration_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("History of exploration; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Hypergaint()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Hypergaint.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Index_of_Astronomy()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Index of Astronomy.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Meteoroid()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Meteoroid.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Nebula()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Nebula.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Protostar()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Protostar.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Red_dwarf()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Red dwarf.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Space_exploration()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Space exploration.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Supercluster()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Supercluster.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Supergaint_star()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Supergaint star..txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Targets_of_exploration_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Targets of exploration; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Targets_of_exploration_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Targets of exploration; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Targets_of_exploration_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Targets of exploration; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Targets_of_exploration_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Targets of exploration; part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_5()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-5.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_6()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-6.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_7()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-7.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_8()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-8.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_9()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy;part-9.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_10()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-10.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_11()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-11.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_12()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-12.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_13()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-13.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_14()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part- 14.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_15()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-15.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_16()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-16.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_17()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-17.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Timeline_of_astronomy_part_18()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Timeline of astronomy; part-18.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void White_dwarf()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("White dwarf.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void White_hole()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("White hole.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Yellow_hypergaint()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Yellow hypergaint.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

//astronomy end


//social media start

void smedia()
{
    system("cls");
    int a;
    printf("1.Social Media\n"
           "2.History of social Media\n"
           "3.History of Mobile Social networking.\n"
           "4.Facebook\n"
           "5.Youtube\n"
           "6.WhatsApp\n"
           "7.WeChat\n"
           "8.Instagram\n"
           "9.QQ\n"
           "10.TikTok\n"
           "11.Twitter\n"
           "12.SnapChat\n"
           "13.LinkedIn\n"
           "14.Telegram\n"
           "15.Skypy\n");
    printf("press 16 for home page\npress 17 for exit\n\t\t");
    scanf("%d", &a);
    switch(a)
    {
        int b;
    case 1:
        system("cls");
        Social_Media();
bck1:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck1;
            break;
        }

        break;
    case 2:
        system("cls");
        History_of_social_media();
bck2:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck2;
            break;
        }

        break;
    case 3:
        system("cls");
        History_of_Mobile_social_networking();
bck15:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck15;
            break;
        }

        break;
    case 4:
        system("cls");
        Facebook();
bck3:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck3;
            break;
        }

        break;
    case 5:
        system("cls");
        YouTube();
bck4:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck4;
            break;
        }

        break;
    case 6:
        system("cls");
        WhatsApp();
bck5:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck5;
            break;
        }

        break;
    case 7:
        system("cls");
        WeChat();
bck6:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck6;
            break;
        }

        break;
    case 8:
        system("cls");
        Instagram();
bck7:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck7;
            break;
        }

        break;
    case 9:
        system("cls");
        QQ();
bck8:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck8;
            break;
        }

        break;
    case 10:
        system("cls");
        TikTok();
bck9:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck9;
            break;
        }

        break;
    case 11:
        system("cls");
        Twitter();
bck10:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck10;
            break;
        }

        break;
    case 12:
        system("cls");
        SnapChat();
bck11:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck11;
            break;
        }

        break;
    case 13:
        system("cls");
        LinkedIn();
bck12:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck12;
            break;
        }

        break;
    case 14:
        system("cls");
        Telegram();
bck13:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck13;
            break;
        }

        break;
    case 15:
        system("cls");
        Skype();
bck14:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            smedia();
            break;

        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck14;
            break;
        }
        break;
    case 16:
        home_page();
        break;
    case 17:
        exit_page();
        exit;
        break;
    default:
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\tyou have given wrong number.\nplease try again.");
        sleep(1);
        smedia();
        break;
    }
}


void Social_Media()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("1.Social Media.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_social_media()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("2.History of social media .txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void History_of_Mobile_social_networking()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("3.History of Mobile social networking.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Facebook()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("4.Facebook .txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void YouTube()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("5.YouTube.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void WhatsApp()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("6.WhatsApp.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void WeChat()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("7.WeChat.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Instagram()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("8.Instagram.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void QQ()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("9.QQ.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void TikTok()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("10.TikTok.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Twitter()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("11.Twitter.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void SnapChat()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("12.SnapChat.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void LinkedIn()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("13.LinkedIn.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Telegram()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("14.Telegram.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Skype()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("15.Skype.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

//social media end


//top ten part start

void top10()
{
    system("cls");
    printf("1.Best Selling Phone\n2.Bike\n3.Book\n"
           "4.Bottel Water\n5.Car 2020\n6.Car all time\n"
           "7.Caves\n8.Computer\n9.Dress\n10.Expensive app\n"
           "11.Laptop\n12.Mall\n13.Mobile Phone\n14.Shoes\n15.Tree\n16.Woman Shoe\n");
    printf("press 17 for home page\npress 18 for exit\n\t\t");
    int a,b;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        system("cls");
        Best_Selling_phone();
bck1:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck1;
            break;
        }
        break;
    case 2:
        system("cls");
        Bike();
bck2:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck2;
            break;
        }
        break;
    case 3:
        system("cls");
        Books();
bck3:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck3;
            break;
        }
        break;
    case 4:
        system("cls");
        Bottel_Water();
bck4:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck4;
            break;
        }
        break;
    case 5:
        system("cls");
        Car_2020();
bck5:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck5;
            break;
        }
        break;
    case 6:
        system("cls");
        Car_all_time();
bck6:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck6;
            break;
        }
        break;
    case 7:
        system("cls");
        Caves();
bck7:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck7;
            break;
        }
        break;
    case 8:
        system("cls");
        Computer();
bck8:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck8;
            break;
        }
        break;
    case 9:
        system("cls");
        Dress();
bck9:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck9;
            break;
        }
        break;
    case 10:
        system("cls");
        Expensive_app();
bck10:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck10;
            break;
        }
        break;
    case 11:
        system("cls");
        Laptop();
bck11:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck11;
            break;
        }
        break;
    case 12:
        system("cls");
        Mall();
bck12:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck12;
            break;
        }
        break;
    case 13:
        system("cls");
        Mobile_Phone();
bck13:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck13;
            break;
        }
        break;
    case 14:
        system("cls");
        Shoes();
bck14:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck14;
            break;
        }
        break;
    case 15:
        system("cls");
        Tree();
bck15:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck15;
            break;
        }
        break;
    case 16:
        system("cls");
        Woman_Shoe();
bck16:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            top10();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            system("cls");
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck16;
            break;
        }
        break;
    case 17:
        home_page();
        break;
    case 18:
        exit_page();
        exit;
        break;
    default:
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t\t\tYou have given wrong number\n\t\t\t\t\t\tplease try again.");
        sleep(1);
        top10();
        break;
    }
}


void Best_Selling_phone()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Best Selling phone.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Bike()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Bike.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Books()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Books.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Bottel_Water()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Bottel Water.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Car_2020()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Car - 2020.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Car_all_time()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Car all time.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Caves()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Caves.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Computer()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Computer.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Dress()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dress.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Expensive_app()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Expensive app.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Laptop()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Laptop.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Mall()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Mall.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Mobile_Phone()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Mobile Phone.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Shoes()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Shoes.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Tree()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Tree.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}
void Woman_Shoe()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Woman Shoe.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}


//top ten part end

//info of district part is start

void info_of_districks()
{
    system("cls");
    for(int i=2; i<28; i++)
    {
        g(1,i);
        printf("S");
        g(118,i);
        printf("S");
    }
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("~");
        g(i,28);
        printf("~");
    }
    g(20,3);
    printf("1.Bandarban\n");
    g(70,3);
    printf("2.Barishal\n");
    g(20,4);
    printf("3.Brahmanbaria\n");
    g(70,4);
    printf("4.Chandpur\n");
    g(20,5);
    printf("5.Chapai\n");
    g(70,5);
    printf("6.Chattogram\n");
    g(20,6);
    printf("7.Comilla\n");
    g(70,6);
    printf("8.Cox's Bazar\n");
    g(20,7);
    printf("9.Dhaka\n");
    g(70,7);
    printf("10.Dinajpur\n");
    g(20,8);
    printf("11.Faridpur\n");
    g(70,8);
    printf("12.Feni\n");
    g(20,9);
    printf("13.Gaibandha\n");
    g(70,9);
    printf("14.Gazipur\n");
    g(20,10);
    printf("15.Gopalganj\n");
    g(70,10);
    printf("16.Habiganj\n");
    g(20,11);
    printf("17.Joypurhat\n");
    g(70,11);
    printf("18.Khagrachhari\n");
    g(20,12);
    printf("19.Kishoreganj\n");
    g(70,12);
    printf("20.Kurigram\n");
    g(20,13);
    printf("21.Lakshmipur\n");
    g(70,13);
    printf("22.Lalmonirhat\n");
    g(20,14);
    printf("23.Madaripur\n");
    g(70,14);
    printf("24.Manikganj\n");
    g(20,15);
    printf("25.Moulvibazar\n");
    g(70,15);
    printf("26.Munshiganj\n");
    g(20,16);
    printf("27.Naogaon\n");
    g(70,16);
    printf("28.Narayanganj\n");
    g(20,17);
    printf("29.Natore\n");
    g(70,17);
    printf("30.Nilphamari\n");
    g(20,18);
    printf("31.Noakhali\n");
    g(70,18);
    printf("32.Pabna\n");
    g(20,19);
    printf("33.Panchagram\n");
    g(70,19);
    printf("34.Rajbari\n");
    g(20,20);
    printf("35.Rajshahi\n");
    g(70,20);
    printf("36.Rangamati\n");
    g(20,21);
    printf("37.Rangpur\n");
    g(70,21);
    printf("38.Shariarpur\n");
    g(20,22);
    printf("39.Sirajganj\n");
    g(70,22);
    printf("40.Sunamganj\n");
    g(20,23);
    printf("41.Sylhet\n");
    g(70,23);
    printf("42.Tangail\n");
    g(20,24);
    printf("43.Thakurngaon\n");
    printf("\tFor home page press 44\n\tfor exit press 45.\n\t\t");

    int a, b;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        system("cls");
        Bandarban_part_1();
bck1:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck1;
            break;
        }
        break;
    case 2:
        system("cls");
        Barisal_part_1();
bck2:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck2;
            break;
        }
        break;
    case 3:
        system("cls");
        Brahmanbaria_part_1();
        getch();
        B_baria_part_2();
bck3:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck3;
            break;
        }
        break;
    case 4:
        system("cls");
        Chandpur_part_1();
bck4:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck4;
            break;
        }
        break;
    case 5:
        system("cls");
        Chapai_part_1();
bck5:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck5;
            break;
        }
        break;

    case 6:
        system("cls");
        Chittagong_part_1();
        getch();
        Cittagong_part_2();
bck6:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck6;
            break;
        }
        break;

    case 7:
        system("cls");
        Comilla_part_1();
        getch();
        Comilla_part_2();
bck7:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck7;
            break;
        }
        break;

    case 8:
        system("cls");
        Cox_s_bazar_part_1();
bck8:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck8;
            break;
        }
        break;

    case 9:
        system("cls");
        Dhaka_part_1();
        getch();
        Dhaka_part_2();
        getch();
        Dhaka_part_3();
        getch();
        Dhaka_part_4();
bck9:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck9;
            break;
        }
        break;

    case 10:
        system("cls");
        Dinajpur_part_1();
bck10:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck10;
            break;
        }
        break;

    case 11:
        system("cls");
        Faridpur_part_1();
        getch();
        Faridpur_part_2();
bck11:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck11;
            break;
        }
        break;

    case 12:
        system("cls");
        Feni_part_1();
        getch();
        Feni_part_2();
bck12:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck12;
            break;
        }
        break;

    case 13:
        system("cls");
        Gaibandha_part_1();
bck13:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck13;
            break;
        }
        break;

    case 14:
        system("cls");
        Gazipur_part_1();
bck14:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck14;
            break;
        }
        break;

    case 15:
        system("cls");
        Gopalganj_part_1();
        getch();
        Gopalganj_part_2();
        getch();
        Gopalganj_part_3();
bck15:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck15;
            break;
        }
        break;

    case 16:
        system("cls");
        Habiganj_part_1();
bck16:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck16;
            break;
        }
        break;

    case 17:
        system("cls");
        Joypurhat_part_1();
bck17:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck17;
            break;
        }
        break;

    case 18:
        system("cls");
        Khagrachhari_part_1();
        getch();
        Khagrachhari_part_2();
bck18:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck18;
            break;
        }
        break;

    case 19:
        system("cls");
        Kishoreganj_part_1();
        getch();
        Kishoreganj_part_2();
        getch();
        Kishoreganj_part_3();
        getch();
        Kishoreganj_part_4();
bck19:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck19;
            break;
        }
        break;

    case 20:
        system("cls");
        Kurigram_part_1();
bck20:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck20;
            break;
        }
        break;

    case 21:
        system("cls");
        Lakshmipur_part_1();
bck21:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck21;
            break;
        }
        break;

    case 22:
        system("cls");
        Lalmonirhat_part_1 ();
bck22:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck22;
            break;
        }
        break;

    case 23:
        system("cls");
        Madaripur_part_1();
        getch();
        Madaripur_part_2();
bck23:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck23;
            break;
        }
        break;

    case 24:
        system("cls");
        Manikganj_part_1();
        getch();
        Manikganj_part_2();
        getch();
        Manikganj_part_3();
bck24:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck24;
            break;
        }
        break;

    case 25:
        system("cls");
        Moulvibazar_part_1();
bck25:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck25;
            break;
        }
        break;

    case 26:
        system("cls");
        Munshiganj_part_1();
bck26:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck26;
            break;
        }
        break;

    case 27:
        system("cls");
        Naogaon_part_1();
bck27:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck27;
            break;
        }
        break;

    case 28:
        system("cls");
        Narayanganj_part_1();
        getch();
        Narayanganj_part_2();
        getch();
        Narayanganj_part_3();
bck28:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck28;
            break;
        }
        break;

    case 29:
        system("cls");
        Natore_part_1();
bck29:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck29;
            break;
        }
        break;

    case 30:
        system("cls");
        Nilphamari_part_1();
bck30:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck30;
            break;
        }
        break;

    case 31:
        system("cls");
        Noakhali_part_1();
        getch();
        Noakhali_part_2();
        getch();
        Noakhali_part_3();
bck31:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck31;
            break;
        }
        break;

    case 32:
        system("cls");
        Pabna_part_1();
bck32:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck32;
            break;
        }
        break;

    case 33:
        system("cls");
        Panchagarh_part_1();
bck33:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck33;
            break;
        }
        break;

    case 34:
        system("cls");
        Rajbari_part_1();
        getch();
        Rajbari_part_2();
bck34:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck34;
            break;
        }
        break;

    case 35:
        system("cls");
        Rajshahi_part_1();
bck35:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck35;
            break;
        }
        break;

    case 36:
        system("cls");
        Rangamatil_part_1();
bck36:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck36;
            break;
        }
        break;

    case 37:
        system("cls");
        Rangpur_part_1();
        getch();
        Rangpur_part_2();
bck37:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck37;
            break;
        }
        break;

    case 38:
        system("cls");
        Shariatpur_part_1();
        getch();
        Shariatpur_part_2();
bck38:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck38;
            break;
        }
        break;

    case 39:
        system("cls");
        Sirajganj_part_1();
bck39:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck39;
            break;
        }
        break;

    case 40:
        system("cls");
        Sunamganj_part_1();
bck40:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck40;
            break;
        }
        break;

    case 41:
        system("cls");
        Sylhet_part_1();
bck41:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck41;
            break;
        }
        break;

    case 42:
        system("cls");
        Tangail_part_1();
        getch();
        Tangail_part_2();
        getch();
        Tangail_part_3();
bck42:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck42;
            break;
        }
        break;

    case 43:
        system("cls");
        Thakurgaon_part_1();
bck43:
        printf("\n\nFor Home menu press 1\n"
               "For Previous menu press 2\n"
               "For Exit press 3\n");
        scanf("%d", &b);
        switch(b)
        {
        case 1:
            home_page();
            break;
        case 2:
            info_of_districks();
            break;
        case 3:
            exit_page();
            exit;
            break;
        default:
            printf("\nYou have input wrong number\nPlease try again.");
            goto bck43;
            break;
        }
        break;
    case 44:
        home_page();
        break;
    case 45:
        exit_page();
        exit;
        break;
    default:
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\tyou have given wrong number.please try again");
        sleep(1);
        info_of_districks();

    }
}
void Brahmanbaria_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Brahmanbaria; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void B_baria_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("B.baria; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Bandarban_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Bandarban; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Barisal_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Barisal; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Bogra_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Bogra; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Chandpur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Chandpur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Chapai_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Chapai; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Chittagong_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Chittagong; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Cittagong_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Cittagong; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Comilla_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Comilla; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Comilla_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Comilla; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Cox_s_bazar_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Cox's bazar; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Dhaka_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dhaka; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Dhaka_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dhaka; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Dhaka_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dhaka; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Dhaka_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dhaka; part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Dinajpur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Dinajpur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Faridpur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Faridpur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Faridpur_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Faridpur; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Feni_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Feni; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Feni_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Feni; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Gaibandha_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Gaibandha; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Gazipur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Gazipur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Gopalganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Gopalganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Gopalganj_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Gopalganj; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Gopalganj_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Gopalganj; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Habiganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Habiganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Joypurhat_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Joypurhat; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Khagrachhari_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Khagrachhari; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Khagrachhari_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Khagrachhari; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Kishoreganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Kishoreganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Kishoreganj_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Kishoreganj; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Kishoreganj_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Kishoreganj; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Kishoreganj_part_4()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Kishoreganj; part-4.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Kurigram_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Kurigram; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Lakshmipur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Lakshmipur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Lalmonirhat_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Lalmonirhat; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Madaripur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Madaripur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Madaripur_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Madaripur; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Manikganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Manikganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Manikganj_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Manikganj; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Manikganj_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Manikganj; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Moulvibazar_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Moulvibazar; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Munshiganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Munshiganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Naogaon_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Naogaon; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Narayanganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Narayanganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Narayanganj_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Narayanganj; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Narayanganj_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Narayanganj; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Natore_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Natore; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Nilphamari_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Nilphamari; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Noakhali_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Noakhali; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Noakhali_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Noakhali; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Noakhali_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Noakhali; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Pabna_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Pabna; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Panchagarh_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Panchagarh; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rajbari_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rajbari; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rajbari_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rajbari; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rajshahi_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rajshahi; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rangamatil_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rangamatil; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rangpur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rangpur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Rangpur_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Rangpur; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Shariatpur_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Shariatpur; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Shariatpur_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Shariatpur; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Sirajganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Sirajganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Sunamganj_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Sunamganj; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Sylhet_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Sylhet; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Tangail_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Tangail; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Tangail_part_2()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Tangail; part-2.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Tangail_part_3()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Tangail; part-3.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}

void Thakurgaon_part_1()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Thakurgaon; part-1.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
}


//info of district part is end

void exit_page()
{
    system("cls");
    g(50,14);
    printf("Thank you.\n\t\t\t\t\tTake love from \"ARTEMIS CODER\"\n\t\t\t\t\tGood bye!!!\n\n\n\n\n\n\n\n\n");

    sleep(5);
}



//membership

void sign_in()
{
    system("cls");
    FILE *file;
    char name[100], pass[100], pass1[100], score[100], score1[100]="38";
    g(40, 11);
    printf("Your name: ");
    fflush(stdin);
    for(int i=2; i<25; i++)
    {
        g(1,i);
        printf("!");
        g(118,i);
        printf("!");
    }
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("_");
        g(i,24);
        printf("_");
    }
    g(51,11);
    printf("|");
    g(80,11);
    printf("|");
    for(int i=52; i<80; i++)
    {
        g(i,10);
        printf("-");
        g(i,12);
        printf("-");
    }
    g(53, 11);
    gets(name);
    if(file = fopen(name, "r"))
    {
        strcpy(users_name, name);
        file = fopen(name, "r+");
        fgets(name, 50, file);

        fflush(stdin);

        fscanf(file, "%[^\n]", pass);
        fflush(stdin);
        fgets(score, 50, file);
        fgets(score, 50, file);
//        printf("%s\n", name);
//        printf("%s\n", pass);
//        printf("%s\n", score);

password:
        system("cls");
        for(int i=2; i<28; i++)
        {
            g(1,i);
            printf("S");
            g(118,i);
            printf("S");
        }
        for(int i=2; i<118; i++)
        {
            g(i,1);
            printf("~");
            g(i,28);
            printf("~");
        }
        g(40, 11);
        printf("Your password: ");
        g(54,11);
        printf("|");
        g(80,11);
        printf("|");
        for(int i=55; i<80; i++)
        {
            g(i,10);
            printf("-");
            g(i,12);
            printf("-");
        }
        g(56, 11);
        fflush(stdin);
        gets(pass1);
//            printf("%s\n%s\n", pass, pass1);
        if(strcmp(pass, pass1)==0)
        {
            strcpy(users_password, pass1);
            fclose(file);
            FILE *file;
            file = fopen(users_name, "r");
            fflush(stdin);
            fgets(users_password, 50, file);
            fflush(stdin);
            fgets(users_password, 50, file);
            fflush(stdin);
            fscanf(file, "%lf", &marks_of_users);
            fscanf(file, "%lf", &memory_test_score);
            fscanf(file, "%lf", &score_of_word_game);
            fclose(file);
            home_page();
        }
        else
        {
            system("cls");
            for(int i=2; i<28; i++)
            {
                g(1,i);
                printf("S");
                g(118,i);
                printf("S");
            }
            for(int i=2; i<118; i++)
            {
                g(i,1);
                printf("~");
                g(i,28);
                printf("~");
            }
            g(40,11);
            printf("sorry password is wrong\n\t\t\t\t\tPlease enter correct password\n");
            getch();
            goto password;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t\tThere have no such user name.\n\t\t\t\tPlease enter a valid user name.");
        getch();
        sign_in();
    }
}


void sign_up()
{
    system("cls");
    FILE *file;
    char name[100], pass[100];
again:
    system("cls");
    g(40, 11);
    printf("Your name: ");
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("_");
        g(i,24);
        printf("_");
    }
    g(51,11);
    printf("|");
    g(80,11);
    printf("|");
    for(int i=52; i<80; i++)
    {
        g(i,10);
        printf("-");
        g(i,12);
        printf("-");
    }
    g(53, 11);
    fflush(stdin);
    gets(name);

    file = fopen(name, "r");
    if(file = fopen(name, "r"))
    {
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tSorry there already have an account in this name\nPlease give a new one.\n");
        getch();
        goto again;
    }
    else
    {
        system("cls");
        strcpy(users_name, name);
        file = fopen(name, "w");
        fprintf(file, name);
        fprintf(file, "\n");

        for(int i=12; i<18; i++)
        {
            g(1,i);
            printf("S");
            g(118,i);
            printf("S");
        }
        for(int i=2; i<118; i++)
        {
            g(i,1);
            printf("~");
            g(i,28);
            printf("~");
        }
        g(40, 11);
        printf("give a password: ");

        g(56,11);
        printf("|");
        g(83,11);
        printf("|");
        for(int i=57; i<83; i++)
        {
            g(i,10);
            printf("-");
            g(i,12);
            printf("-");
        }


//            g(54,11);
//            printf("|");
//            g(80,11);
//            printf("|");
//            for(int i=55; i<80; i++)
//            {
//                g(i,10);
//                printf("-");
//                g(i,12);
//                printf("-");
//            }
        g(58, 11);
        gets(pass);

        fprintf(file, pass);
        fprintf(file, "\n");
        fprintf(file, "0");
        fprintf(file, "\n");
        fprintf(file, "0");
        fprintf(file, "\n");
        fprintf(file, "0");
        fclose(file);
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tNow you are prepared to use this software.\nPlease log in.");
        getch();
        main2();
    }
}



//member end


//quiz part strt

int sec(void)
{
    time_t s;
    struct tm* current_time;

    // time in seconds
    s = time(NULL);

    // to get current time
    current_time = localtime(&s);
    int sec = (((current_time->tm_hour)*3600)+((current_time->tm_min)*60)+(current_time->tm_sec));
    return sec;
}

double easy_marks(double s, double e)
{
    double dfrnt = (e-s), over;
    if(dfrnt<=10)
    {
        return 2;
    }
    else if(dfrnt>10 && dfrnt<80)
    {
        over = (dfrnt - 10);
        over = (over/40);
        return (2-over);

    }
    else
    {
        return 0;
    }
}

double medium_marks(double s, double e)
{
    double dfrnt = (e-s), over;
    if(dfrnt<=30)
    {
        return 5;
    }
    else if(dfrnt>30 && dfrnt<170)
    {
        over = (dfrnt - 30);
        over = (over/30);
        return (5-over);

    }
    else
    {
        return 0;
    }
}

double hard_marks(double s, double e)
{
    double dfrnt = (e-s), over;
    if(dfrnt<=60)
    {
        return 10;
    }
    else if(dfrnt>60 && dfrnt<70)
    {
        over = (dfrnt - 60);
        over = (over/10);
        return (10-over);

    }
    else
    {
        return 0;
    }
}

int printrandom(int l, int u, int c)
{
    int n;
    for(int i; i<c; i++)
    {

        n =  (rand() % (u-l+1)+l);


    }
    return n;
}

int quiz_main()
{
    system("cls");
    printf("\n\n\n\t\t\t\t\t........ Select Your Mood ........\n");
    printf("\t\t\t\t................................................\n");
    printf("\t\t\t................................................................\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t1. Easy Mood!\n\n\n\n\t\t\t\t\t\t2. Medium Mood!\n\n\n\n\t\t\t\t\t\t3. Hard Mood!\n\n\n\t\t\t\t\t\t4.Instruction\n\n\n\n\n"
           "press 5 for home menu\npress 6 for exit");
    char a;
    fflush(stdin);
    scanf("%c", &a);
    switch(a)
    {
    case '1':
        quiz_part();
        break;
    case '2':
        mquiz();
        break;
    case '3':
        hard_quiz_part();
        break;
    case '4':
        quizintrctn();
        break;
    case '5':
        home_page();
        break;
    case '6':
        exit_page();
        exit;
        break;
    default:
        printf("There have no mood for this given number\nPlease try again by our given instrution.");
        sleep(3);
        quiz_main();
        break;
    }
    return 0;
}

void quiz_part()
{
    system("cls");
    sleep(1);

    int app;
    marks_of_users=0;
    int l =1, u=55, c=1, i=0;
    srand(time(0));
    for(int j=0; j<5; j++)
    {
        app=printrandom(l, u, c);
        switch(app)
        {
        case 1:
            ae1();
            break;
        case 2:
            ae2();
            break;
        case 3:
            ae3();
            break;
        case 4:
            ae4();
            break;
        case 5:
            ae5();
            break;
        case 6:
            ae6();
            break;
        case 7:
            ae7();
            break;
        case 8:
            ae8();
            break;
        case 9:
            ae9();
            break;
        case 10:
            ae10();
            break;
        case 11:
            ae11();
            break;
        case 12:
            ae12();
            break;
        case 13:
            ae13();
            break;
        case 14:
            ae14();
            break;
        case 15:
            ae15();
            break;
        case 16:
            ce1();
            break;
        case 17:
            ce2();
            break;
        case 18:
            ce3();
            break;
        case 19:
            ce4();
            break;
        case 20:
            ce5();
            break;
        case 21:
            ce6();
            break;
        case 22:
            ce7();
            break;
        case 23:
            ce8();
            break;
        case 24:
            ce9();
            break;
        case 25:
            ce10();
            break;
        case 26:
            se1();
            break;
        case 27:
            se2();
            break;
        case 28:
            se3();
            break;
        case 29:
            se4();
            break;
        case 30:
            se5();
            break;
        case 31:
            se6();
            break;
        case 32:
            se7();
            break;
        case 33:
            se8();
            break;
        case 34:
            se9();
            break;
        case 35:
            se10();
            break;
        case 36:
            se11();
            break;
        case 37:
            se12();
            break;
        case 38:
            se13();
            break;
        case 39:
            se14();
            break;
        case 40:
            se15();
            break;
        case 41:
            de1();
            break;
        case 42:
            de2();
            break;
        case 43:
            de3();
            break;
        case 44:
            de4();
            break;
        case 45:
            de5();
            break;
        case 46:
            de6();
            break;
        case 47:
            de7();
            break;
        case 48:
            de8();
            break;
        case 49:
            de9();
            break;
        case 50:
            de10();
            break;
        case 51:
            de11();
            break;
        case 52:
            de12();
            break;
        case 53:
            de13();
            break;
        case 54:
            de14();
            break;
        case 55:
            de15();
            break;
        }
        sleep(1);
    }

    FILE *file;
//    file = fopen(users_name, "r");
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
////    fscanf(file, "%lf", &score_of_word_game);
////    fscanf(file, "%lf", &score_of_word_game);
//    fclose(file);
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
a:
    printf("press 1 for home menu\npress 2 for exit");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("\nWrong input\nTry again.\n");
        goto a;
        break;
    }

}

void ae1()
{
    system("cls");
    printf("Major focus of space exploration is ___.\na) Sun\nb) Moon\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae2()
{
    system("cls");
    printf("What is the 3rd brightest astronomical object in the sky?\na) Earth\nb) Venus\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae3()
{
    system("cls");
    printf("How many moons does Mars have? \na) 4\nb) 2\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae4()
{
    system("cls");
    printf("Which galaxy is home to the Solar system?\na) Large Magellanic Cloud\nb) Milky Way\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}


void ae5()
{
    system("cls");
    printf("Which object lost its status as a planet in 2006?\na) Pluto\nb) Neptune\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae6()
{
    system("cls");
    printf("Who discovered the four main moons of Jupiter in 1610?\na) Galileo Galilei\nb) Aristotle\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae7()
{
    system("cls");
    printf("Who was the last man on the Moon?\na) Eugene Cernan\nb) Neil Armstrong\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae8()
{
    system("cls");
    printf("How many terrestrial planets are there in the Solar system?\na) 3\nb) 4\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae9()
{
    system("cls");
    printf("How many named constellations are there?\na) 88\nb) 99\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae10()
{
    system("cls");
    printf("How many Ice giants are in the Solar system?\na) 2\nb) 4\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae11()
{
    system("cls");
    printf("Which star is closest to the Sun?\na) Asteriod\nb) Proxima Centauri\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}
void ae12()
{
    system("cls");
    printf("Hydrogen and which other gas make up the majority of the Suns composition?\na) Oxygen\nb) Helium\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae13()
{
    system("cls");
    printf("Vesta is which type of heavenly body?\na) Asteroid\nb) Encke\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae14()
{
    system("cls");
    printf("The comet with the shortest orbital period of 3.3 years is named what?\na) Encke\nb) Proxima Centauri\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

void ae15()
{
    system("cls");
    printf("Which planet has the largest moon in the Solar system?\na) Jupiter\nb) Mars\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}

//computer quiz_part

void ce1()
{
    system("cls");
    printf("Computer can understand____.\na) Octal\nb) Hexadecimal\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void ce2()
{
    system("cls");
    printf("Cpp created by___.\na) Dennis M. Ritchie\nb) Bjarne Stoustrup \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce3()
{
    system("cls");
    printf("In 2008 which was created?\na) python 2.0  \nb) python 3.0 \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce4()
{
    system("cls");
    printf("Scipting language divided into__.\na) two categories \nb) four categories \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce5()
{
    system("cls");
    printf("JAVA is a__.\na) Object oriented \nb) Functional programme \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce6()
{
    system("cls");
    printf("Full form of SQL____________.\na) structured query language\nb) structured queen language \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce7()
{
    system("cls");
    printf("Java is owned by__________.\na) Pracle\nb) Oracle\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce8()
{
    system("cls");
    printf("How many devices run Java?\na) more than 3 billion\nb) more than 4 billion\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce9()
{
    system("cls");
    printf("What is jQuery?\na) a rightweight\nb) a lightweight\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ce10()
{
    system("cls");
    printf("Ruby is a ___________ programming language.\na) pure object-oriented\nb) pure subject-oriented\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se1()
{
    system("cls");
    printf("Social media are _____?\na) Interactive\nb) Antagonistic\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se2()
{
    system("cls");
    printf("Who is the CFO of Facebook?\na) Devid Wehner\nb) Mark Zuckerberg\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se3()
{
    system("cls");
    printf("Which app is owner of Instagram?\na) Facebook\nb) Twitter\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se4()
{
    system("cls");
    printf("Which Country launced TikTok?\na) China\nb) India \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se5()
{
    system("cls");
    printf("Which app is Facebook's another child app?\na) Viver\nb) Messenger \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se6()
{
    system("cls");
    printf("Facebook is ______ online social media?\na) a Canadian\nb) an American \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se7()
{
    system("cls");
    printf("What is the earliest methods of communicating across great distances?\na) Spoken\nb) Written \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se8()
{
    system("cls");
    printf("Is Collaborative Project is a type of social media?\na) Yes\nb) No \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se9()
{
    system("cls");
    printf("Which one is correct ?\na) Telegraph messages were long\nb) Telegraph messages were short \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se10()
{
    system("cls");
    printf("Facebook is one of the most widely used apps in the world?\na) True\nb) False \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se11()
{
    system("cls");
    printf("Which app consist Two - factor authentication security system?\na) Messenger\nb) Facebook \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void se12()
{
    system("cls");
    printf("LinkedIn used for professional networking?\na) True\nb) False \t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void se13()
{
    system("cls");
    printf("Facebook & Messenger are ________?\na) Uncompitable\nb) Compitable\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void se14()
{
    system("cls");
    printf("Who signed an executive order banning US transiction with WeChat? \na) President Donald Trump\nb) President Barack Obama\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void se15()
{
    system("cls");
    printf("Which year, WeChat was banned in India? \na) 2020\nb) 2019\t\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de1()
{
    system("cls");
    printf("Capital City Of Bangladesh __.\na) Sylhet\nb) Dhaka\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de2()
{
    system("cls");
    printf("Which one is \"River\"?\na) Brahmaputra \nb) Srimangal\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de3()
{
    system("cls");
    printf("Which one is \"Town\"?\na) Gazipur\nb) Dhaka\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de4()
{
    system("cls");
    printf("How many divison in Bangladesh?\na) 8\nb) 7\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de5()
{
    system("cls");
    printf("How many divison in Bangladesh?\na) 8\nb) 7\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de6()
{
    system("cls");
    printf("Sylhet Division is the ____________ division of Bangladesh.\na) northeastern\nb) northernmost\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de7()
{
    system("cls");
    printf("Largest City in Bangladesh is ___________.\na) Chittagong\nb) Dhaka\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de8()
{
    system("cls");
    printf("Smallest district in Bangladesh is ___________(In Population)\na) Bandhorbon\nb) Moulovibazar\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de9()
{
    system("cls");
    printf("How many  City Coporetion in Bangladesh?\na) 11\nb)12\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de10()
{
    system("cls");
    printf("Bangladesh is a ___________ Country.\na) Agricaultural\nb) Dress-seller\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de11()
{
    system("cls");
    printf("___________ is a district in central Bangladesh.\na) Manikganj\nb) Benapul\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de12()
{
    system("cls");
    printf("8th Division in Bangladesh ____________\na) Rangpur\nb) Mymensingh\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de13()
{
    system("cls");
    printf("Gaibandha District is part of ___________ Divison.\na) Rangpur\nb) Barishal\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de14()
{
    system("cls");
    printf("In Bangladesh, which is the largest river?\na) Meghna\nb) Jamuna\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void de15()
{
    system("cls");
    printf("_____________ is a part of the Dhaka Division.\na) Chunarughat\nb) Manikganj\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += easy_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}





void mquiz()
{
    system("cls");
    sleep(1);

    int app;
    marks_of_users=0;
    int l =1, u=60, c=1, i=0;
    srand(time(0));
    for(int j=0; j<5; j++)
    {

        app=printrandom(l, u, c);
        switch(app)
        {
        case 1:
            am1();
            break;
        case 2:
            am2();
            break;
        case 3:
            am3();
            break;
        case 4:
            am4();
            break;
        case 5:
            am5();
            break;
        case 6:
            am6();
            break;
        case 7:
            am7();
            break;
        case 8:
            am8();
            break;
        case 9:
            am9();
            break;
        case 10:
            am10();
            break;
        case 11:
            am11();
            break;
        case 12:
            am12();
            break;
        case 13:
            am13();
            break;
        case 14:
            am14();
            break;
        case 15:
            am15();
            break;
        case 16:
            cm1();
            break;
        case 17:
            cm2();
            break;
        case 18:
            cm3();
            break;
        case 19:
            cm4();
            break;
        case 20:
            cm5();
            break;
        case 21:
            cm6();
            break;
        case 22:
            cm7();
            break;
        case 23:
            cm8();
            break;
        case 24:
            cm9();
            break;
        case 25:
            cm10();
            break;
        case 26:
            sm1();
            break;
        case 27:
            sm2();
            break;
        case 28:
            sm3();
            break;
        case 29:
            sm4();
            break;
        case 30:
            sm5();
            break;
        case 31:
            sm6();
            break;

        case 32:
            sm7();
            break;

        case 33:
            sm8();
            break;

        case 34:
            sm9();
            break;

        case 35:
            sm10();
            break;

        case 36:
            sm11();
            break;

        case 37:
            sm12();
            break;

        case 38:
            sm13();
            break;

        case 39:
            sm14();
            break;

        case 40:
            sm15();
            break;

        case 41:
            tm1();
            break;

        case 42:
            tm2();
            break;

        case 43:
            tm3();
            break;

        case 44:
            tm4();
            break;

        case 45:
            tm5();
            break;

        case 46:
            dm1();
            break;

        case 47:
            dm2();
            break;

        case 48:
            dm3();
            break;

        case 49:
            dm4();
            break;

        case 50:
            dm5();
            break;

        case 51:
            dm6();
            break;

        case 52:
            dm7();
            break;

        case 53:
            dm8();
            break;

        case 54:
            dm9();
            break;

        case 55:
            dm10();
            break;

        case 56:
            dm11();
            break;

        case 57:
            dm12();
            break;

        case 58:
            dm13();
            break;

        case 59:
            dm14();
            break;

        case 60:
            dm15();
            break;


        }
        sleep(1);
    }
    FILE *file;
//    file = fopen(users_name, "r");
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fscanf(file, "%lf", &marks_of_wordgame_1);
//    fscanf(file, "%lf", &marks_of_wordgame_1);
//    fclose(file);
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
a:
    printf("press 1 for home menu\npress 2 for exit");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("\nWrong input\nTry again.\n");
        goto a;
        break;
    }

}


void cm1()
{
    system("cls");
    printf("C programme was developed by___?\na) Dennis M. Ritchie\nb) Ada lovelace\nc) Bjarne Stroustrup\nd) Kenneth Lane Thompson\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm2()
{
    system("cls");
    printf("Python 2.0 released in__.\na) 2000\nb) 1980\nc) 2015\nd) 2008\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm3()
{
    system("cls");
    printf("The level of c programming language is___.\na) low level\nb) mid level\nc) high level\nd) none of this\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm4()
{
    system("cls");
    printf("When python 2 was officially discontinued?\na) 2020\nb) 2015\nc) 2005\nd) 2010\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm5()
{
    system("cls");
    printf("HTML 2.0 was created in__.\na) 1991\nb) 1995\nc) 1999\nd) 2012\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm6()
{
    system("cls");
    printf("Which tools are supported by Ruby?\na) DMI\nb) NPQ\nc) GUI\nd) STR\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void cm7()
{
    system("cls");
    printf("Full meaning of DBMS_____________.\na) Database Meaning System\nb) Database Mendatory System\nc) Double Management System\nd) Database Management System\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm8()
{
    system("cls");
    printf("CSS stands for___________.\na) Cascading Style Sheet\nb) Classic Style Sheet\nc) Coding Style Sheet\nd) Combined Style Sheet\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void cm9()
{
    system("cls");
    printf("PHP Syntax is ____________.\na) A-Like\nb) C-Like\nc) E-Like\nd) D-Like\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void cm10()
{
    system("cls");
    printf("Why We Use Java?\na) It's easy to learn\nb) It's hard to learn\nc) It's Cheap\nd) It's Expensive\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm1()
{
    system("cls");
    printf("Total Area of Khulna is _________.\na) 4394 square k.m\nb) 22224 square k.m\nc) 22274 square k.m\nd) 21274 square k.m\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm2()
{
    system("cls");
    printf("How many upazila in Chuyadagga?\na) 4\nb) 7\nc) 6\nd) 5\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm3()
{
    system("cls");
    printf("In which place Mujibnogor  situated?\na) Josser\nb) Meherpur\nc) Kusthiya\nd) Mujibnogor\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm4()
{
    system("cls");
    printf("Currently, how many districts are there in the Rajshahi Division?\na) 8\nb) 10\nc) 17\nd) 16\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm5()
{
    system("cls");
    printf("The name of \"Thakhurga District\" based on a _________\na) Nothing\nb) thakhur family\nc) king name\nd) God name\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm6()
{
    system("cls");
    printf("Total Area of Hobigonj is ______.\na) 2637 square k.m\nb) 3637square k.m\nc) 2627square k.m\nd) 1637square k.m\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm7()
{
    system("cls");
    printf("_____________is one of the fastest growing districts in the country.\na) Dhaka\nb) Narayongonj\nc) Chittagong\nd) Brahmanbaria \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm8()
{
    system("cls");
    printf("__________ gas is the largest gas field of Bangladesh.\na) Roshidhpur\nb) Kulaura\nc) Titas\nd) Sunamgonj\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm9()
{
    system("cls");
    printf("In which place \"Bangladesh Survey Institute\" situated in?\na) Dhaka \t b) Wrong Question\nc) Comilla \t d) Chadpur\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm10()
{
    system("cls");
    printf("Based on District , Literacy rate in \"Chadpur\" is __________.\na) 69%\nb) 68%\nc) 96%\nd) 79%\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm11()
{
    system("cls");
    printf("Highest literacy rate in___________.\na) Borishal - 56.8%\nb) Chadpur - 68%\nc) khulna - 53.2%\nd) Rajshahi - 48%\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm12()
{
    system("cls");
    printf("Total land boundary of Bangladesh ?\na) 4427 km\nb) 4543 km\nc) 4978 km\nd) 4563 km\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm13()
{
    system("cls");
    printf("Which line crossed the middle of Bangladesh?\na) korkotkaranti\nb)  Trapik Of Cancer\nc) 90 deg. purbodragima\nd) all\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm14()
{
    system("cls");
    printf(" Tourist Capital of Bangladesh is _______\na) Cox's Bazar\nb) Sylhet\nc) Dhaka\nd) Srimangal\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dm15()
{
    system("cls");
    printf("What is the meaning of the word \"Dulahazara\" known as a famous place in the Cht?\na) Safari Park\nb) Beautiful Bride\nc) Flying Monkeys\nd) Thousand Baskets\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

// top ten


void tm1()
{
    system("cls");
    printf("Which one is \"Expensive Books Ever Sold\"?\na) Magna Carta Libertatum\nb) Bay Psalm Book\nc) William Shakespeare first folio of Comedies, Histories & Tragedies\nd) Codex Leicester Leonardo Da Vinci\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void tm2()
{
    system("cls");
    printf("In top 10 serial, which one is top 8 phone?\na) Nokia 1280\nb) Nokia 1100\nc) Nokia 6600\nd) Nokia 3210\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void tm3()
{
    system("cls");
    printf("\"Veen\" is a ____________.\na) Expensive Bike name\nb) Expensive Book name\nc) Expensive Bottled Waters name\nd) Expensive Show name\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void tm4()
{
    system("cls");
    printf("Which one is most expensve car?\na) Bugatti Veyron Mansory Vivere Best luxury ride\nb) 1963 Ferrari 250 GT0\nc) Aston Martin Valkyrie Best mid-size\nd) Rolls Royce Sweptail\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void tm5()
{
    system("cls");
    printf("Frist Most Incredible Caves Sit in __________\na) Italy\nb) Mexico\nc) Georgia\nd) Scotland \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am1()
{
    system("cls");
    printf("What is the orbital period of Halley’s comet?\na) 76\nb )75\nc) 74\nd) 73\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void am2()
{
    system("cls");
    printf("What is the longest continuous time a human has spent in space?\na) 447 days\nb) 437 days\nc) 427 days\nd) 417 days\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am3()
{
    system("cls");
    printf("How many minutes was the shortest space flight?\na) 5 Minutes\nb) 10 Minutes\nc) 15 Minutes\nd) 20 Mintues\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am4()
{
    system("cls");
    printf("How many moons are in our Solar System?\na) 151\nb) 161\nc) 171\nd) 181\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am5()
{
    system("cls");
    printf("How many moons does Jupiter have?\na) 67\nb) 77\nc) 87\nd) 97\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am6()
{
    system("cls");
    printf("What is the diameter of the Earth’s moon?\na) 2059 miles\nb) 2159 miles\nc) 2259 miles\nd) 2359 miles\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am7()
{
    system("cls");
    printf("What is the largest crater on Earth’s moon?\na) The North Pole-Aitken basin\nb) The South Pole-Aitken basin\nc) The East Pole-Aitken basin\nd) The West Pole-Aitken basin\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am8()
{
    system("cls");
    printf("Who had propounded the planetary laws?\na) Newton\nb) Kepler\nc) Galileo\nd) Copernicus\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am9()
{
    system("cls");
    printf("Who had proved first that our earth and another planet are revolving?\na) Aristotle\nb) Galileo\nc) Copernicus\nd) Edwin Hubble\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am10()
{
    system("cls");
    printf("Which one of the following elements occurs most abundantly in our universe?\na) Hydrogen\nb) Nitrogen\nc) Helium\nd) Oxygen\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am11()
{
    system("cls");
    printf("The stellar and solar source of energy is____.\na) Nuclear fusion\nb) Nuclear fission\nc) Electromagnetic induction\nd) Electromotive force\n\nYour ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am12()
{
    system("cls");
    printf("The device employed to measure the diameters of stars and our galaxy (Milky Way) is called_______.\na) Photometer\nb) Barometer\nc) Viscometer\nd) Interferometer\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am13()
{
    system("cls");
    printf("Which of the following planets has the largest number of planets?\na) Saturn\nb) Jupiter\nc) Mars\nd) Neptune\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am14()
{
    system("cls");
    printf("Which one of the following planet is also called morning star or evening star?\na) Mercury\nb) Venus\nc) Mars\nd) Saturn\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void am15()
{
    system("cls");
    printf("The planet which completes one revolution in 88 days around the Sun is____.\na) Mercury\nb) Venus\nc) Mars\nd) Saturn\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sm1()
{
    system("cls");
    printf("Which year the telephone & radio were invented?\na) 1890 & 1891\nb) 1917 & 1918\nc) 1790 & 1791\nd) 1701 & 1702 \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sm2()
{
    system("cls");
    printf("How many types mobile social media app can be differentiated?\na) 1\nb) 2\nc) 3\nd) 4 \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sm3()
{
    system("cls");
    printf("Which invention make social media began to explode in populariity?\na) Phone\nb) Blogging\nc) YouTube\nd) Messenger\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm4()
{
    system("cls");
    printf("Which app is use for professional messaging?\na) LinkedIn\nb) QQ\nc) Skype\nd) WeChat \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm5()
{
    system("cls");
    printf("Which app is the microblogging  and Social networking App?\na) QQ\nb) Skype\nc) Twiter\nd) WeChat \n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm6()
{
    system("cls");
    printf("Which one is connected with Facebook?\na) Massachusetts\nb) California\nc) Hongkong\nd) Sunnyvale\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm7()
{
    system("cls");
    printf("The location of TouTube's headquarters in US?\na) Sunnyvale,California\nb) San Bruno,California\nc) Massachusetts\nd) San Francisco\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm8()
{
    system("cls");
    printf("Who bought Skype in 2011?\na) Google\nb) Intel\nc) Facebook\nd) Microsoft\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'd':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm9()
{
    system("cls");
    printf("Which language written in Telegram?\na) C\nb) C++\nc) Delphi\nd) Javascript\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm10()
{
    system("cls");
    printf("Which one founded by Swede Niklas?\na) YouTube\nb) Telegram\nc) Skype\nd) QQ\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm11()
{
    system("cls");
    printf("LinkedIn operates via _______?\na) Website\nb) Mobile apps\nc) Both\nd) None\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm12()
{
    system("cls");
    printf("For whome, QQ is the world's 5th most visited website?\na) Alexa\nb) Google\nc) Microsoft\nd) None\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm13()
{
    system("cls");
    printf("WeChat mobile payment app devoloped by whome?\na) QQ\nb) Tencent\nc) WhatsApp\nd) Telegram\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'b':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm14()
{
    system("cls");
    printf("Who is the owner of WhatsApp?\na) Google\nb) Microsoft\nc) Facebook\nd) None of them\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'c':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sm15()
{
    system("cls");
    printf("Where Eminent personalities share their view?\na) Twitter\nb) Facebook\nc) LinkedIn\nd) WeChat\n\nYour Ans: ");
    double strt = sec();
    char a = getch();
    double end = sec();
    switch(a)
    {
    case 'a':
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += medium_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
        break;
    default:
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
        break;
    }
}


void hard_quiz_part()
{
    system("cls");
    sleep(1);

    int app;
    int l =1, u=60, c=1, i=0;
    srand(time(0));
    for(int j=0; j<5; j++)
    {

        app=printrandom(l, u, c);
        switch(app)
        {
        case 1:
            ah1();
            break;
        case 2:
            ah2();
            break;
        case 3:
            ah3();
            break;
        case 4:
            ah4();
            break;
        case 5:
            ah5();
            break;
        case 6:
            ah6();
            break;
        case 7:
            ah7();
            break;
        case 8:
            ah8();
            break;
        case 9:
            ah9();
            break;
        case 10:
            ah10();
            break;
        case 11:
            ah11();
            break;
        case 12:
            ah12();
            break;
        case 13:
            ah13();
            break;
        case 14:
            ah14();
            break;
        case 15:
            ah15();
            break;
        case 16:
            ch1();
            break;
        case 17:
            ch2();
            break;
        case 18:
            ch3();
            break;
        case 19:
            ch4();
            break;
        case 20:
            ch5();
            break;
        case 21:
            ch6();
            break;
        case 22:
            ch7();
            break;
        case 23:
            ch8();
            break;
        case 24:
            ch9();
            break;
        case 25:
            ch10();
            break;
        case 26:
            sh1();
            break;
        case 27:
            sh2();
            break;
        case 28:
            sh3();
            break;
        case 29:
            sh4();
            break;
        case 30:
            sh5();
            break;
        case 31:
            sh6();
            break;

        case 32:
            sh7();
            break;

        case 33:
            sh8();
            break;

        case 34:
            sh9();
            break;

        case 35:
            sh10();
            break;

        case 36:
            sh11();
            break;

        case 37:
            sh12();
            break;

        case 38:
            sh13();
            break;

        case 39:
            sh14();
            break;

        case 40:
            sh15();
            break;

        case 41:
            th1();
            break;

        case 42:
            th2();
            break;

        case 43:
            th3();
            break;

        case 44:
            th4();
            break;

        case 45:
            th5();
            break;

        case 46:
            dh1();
            break;

        case 47:
            dh2();
            break;

        case 48:
            dh3();
            break;

        case 49:
            dh4();
            break;

        case 50:
            dh5();
            break;

        case 51:
            dh6();
            break;

        case 52:
            dh7();
            break;

        case 53:
            dh8();
            break;

        case 54:
            dh9();
            break;

        case 55:
            dh10();
            break;

        case 56:
            dh11();
            break;

        case 57:
            dh12();
            break;

        case 58:
            dh13();
            break;

        case 59:
            dh14();
            break;

        case 60:
            dh15();
            break;


        }
        sleep(1);
    }
    FILE *file;
//    file = fopen(users_name, "r");
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fscanf(file, "%lf", &marks_of_wordgame_1);
//    fscanf(file, "%lf", &marks_of_wordgame_1);
//    fclose(file);
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
a:
    printf("press 1 for home menu\npress 2 for exit");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("\nWrong input\nTry again.\n");
        goto a;
        break;
    }

}

void ah1()
{
    system("cls");
    printf("How big is Venus from Earth(in percentage)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"95"};
    char ans1[50];
//    scanf("%s", ans1);
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}



void ah2()
{
    system("cls");
    printf("How Big Is The Universe(in billion)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"14"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ah3()
{
    system("cls");
    printf("How Far From Earth, Is The Moon(in km)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"384400"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ah4()
{
    system("cls");
    printf("How Long Is A Day On Saturn(in hour)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"10"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void ah5()
{
    system("cls");
    printf("What is the escape velocity from the Solar system at the distance of Earth (in km/s)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"42"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }

}
void ah6()
{
    system("cls");
    printf("How Many Moons Does Saturn Have?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"46"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void ah7()
{
    system("cls");
    printf("How Many Stars Are There In The Whole Universe?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Infinity"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void ah8()
{
    system("cls");
    printf("How Old Is Our Earth (in billion)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"4.6"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void ah9()
{
    system("cls");
    printf("What planet is known as the red planet?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Mars"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ah10()
{
    system("cls");
    printf("How old is the universe in years(in billion)?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"13.8"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ah11()
{
    system("cls");
    printf("What is the name of the force holding us to the Earth?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Gravity"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void ah12()
{
    system("cls");
    printf("What is the name of Saturn’s largest moon?\n\nYor Ans:");
    double strt = sec();
    char ans[]= {"Titan"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void ah13()
{
    system("cls");
    printf("Olympus Mons is a large volcanic mountain on which planet?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Mars"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void ah14()
{
    system("cls");
    printf("What is the name of the first satellite sent into space? \n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Sputnik"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void ah15()
{
    system("cls");
    printf("What is the name of the 2nd biggest planet in our solar system?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Saturn"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch1()
{
    system("cls");
    printf("JAVA created in__.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1995"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch2()
{
    system("cls");
    printf("HTML 4.01 published in___.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1999"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void ch3()
{
    system("cls");
    printf("C programme developed  in__\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1972"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch4()
{
    system("cls");
    printf("Yukihiro Matsumoto are from?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Japan"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch5()
{
    system("cls");
    printf("Which programming language was created by Yukihirio Matsumota?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"JAVA"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch6()
{
    system("cls");
    printf("How Redux Works?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Simply"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch7()
{
    system("cls");
    printf("Group of logical, mathematical, systematical, and managed functions grouped together to perform a specific task is__________.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Program"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch8()
{
    system("cls");
    printf("Groups of classes are called a___________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Function"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch9()
{
    system("cls");
    printf("_______________is only one of many providers of database management systems(DBMS).\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Microsoft"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void ch10()
{
    system("cls");
    printf("A____________language is used to write scripts.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"scripting"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


void sh1()
{
    system("cls");
    printf("When the Telegraph was invented?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1792"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh2()
{
    system("cls");
    printf("Which University's students created SnapChat?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Stanford"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh3()
{
    system("cls");
    printf("Technology began to change very rapidly in which century?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"20th"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh4()
{
    system("cls");
    printf("The evoulution of social networking on mobile networks started in____?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1999"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh5()
{
    system("cls");
    printf("Who is the parent company of WeChat?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"QQ"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh6()
{
    system("cls");
    printf("Which year the super computers were created?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1940"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(5);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
    }
}


void sh7()
{
    system("cls");
    printf("In 1997, the name of first recognizable socia media site is _______?(Use underscore between two words & Every word start with capital letter)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Six_Degrees"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh8()
{
    system("cls");
    printf("Write down, Telegram website format_____?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"telegram.org"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh9()
{
    system("cls");
    printf("How many languages available in TikTok? (Just give the number)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"40"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh10()
{
    system("cls");
    printf("Which country is founder of Musical.ly?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"China"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh11()
{
    system("cls");
    printf("Mention the year, when fourth generation began?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"2008"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void sh12()
{
    system("cls");
    printf("Which app ss known as 'Douyin' in China?\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"TikTok"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh13()
{
    system("cls");
    printf("Write down, the parent organization name of LinkedIn application?(Use underscore between two words & Every word start with capital letter)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Microsoft_Corporation"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh14()
{
    system("cls");
    printf("The founder of ByteDance?(Use underscore between two words & Every word start with capital letter)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Zhang_Yiming"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void sh15()
{
    system("cls");
    printf("Who is the CEO of LinkedIn?(Use underscore between two words & Every word start with capital letter)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Ryan_Roslansky"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void th1()
{
    system("cls");
    printf("\"Ecosse Titanium Series Fe Ti XX\" price is ------------------($)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"300000"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void th2()
{
    system("cls");
    printf("Price of \" 1963 Ferrari 250 GT0 \" is ___________($)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"70M"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void th3()
{
    system("cls");
    printf("Price of most expence car on 2020 _________________($)\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"18.7M"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void th4()
{
    system("cls");
    printf("\"Škocjan Caves\" sit in __________.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Slovenia"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void th5()
{
    system("cls");
    printf("Price of \"24k Gold MacBook Pro\" is __________($).\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"30000"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh1()
{
    system("cls");
    printf("Chittagong Division,\nTotal length of national highway is (a)___ (Dhaka-Chittagong) and (b)___ (Feni-Noakhali) \nTotal length of concrete road is (c)___ , half-concrete road is (d)___ km and dirt road is (e)___.\n\nYour Ans:");
    double strt = sec();
    char a1[]= {"31"}, a2[]= {"20"}, a3[]= {"1044.85"}, a4[]= {"87.96"}, a5[]= {"2132.96"};
    char a11[50], a22[51], a33[50], a44[50], a55[50];
    printf("a: ");
    gets(a11);
    printf("b: ");
    gets(a22);
    printf("c: ");
    gets(a33);
    printf("d: ");
    gets(a44);
    printf("e: ");
    gets(a55);
    double end = sec();
    if((strcmp(a1,a11)==0) && (strcmp(a2,a22)==0)&&(strcmp(a3,a33)==0)&&(strcmp(a4,a44)==0)&&(strcmp(a5,a55)==0))
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh2()
{
    system("cls");
    printf("Total area of Kishoreganj District(a)___ and also literacy rate of  Kishoreganj District(b)___\n\nYour Ans:");
    double strt = sec();
    char a1[]= {"2731.21"}, a2[]= {"65.3"};
    char a11[50], a22[51], a33[50], a44[50], a55[50];
    printf("a: ");
    gets(a11);
    printf("b: ");
    gets(a22);
    double end = sec();
    if((strcmp(a1,a11)==0) && (strcmp(a2,a22)==0))
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh3()
{
    system("cls");
    printf("Postal Code of Manikganj District is ________.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"1800"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh4()
{
    system("cls");
    printf("Area of Narayanganj sadar upazila is______\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"100.75"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh5()
{
    system("cls");
    printf("In Tangail District percentis of (a) Muslim (b) Hindu (c) Christian\n\nYour Ans:");
    double strt = sec();
    char a1[]= {"93"}, a2[]= {"6.5"}, a3[]= {"0.4"};
    char a11[50], a22[51], a33[50];
    printf("a: ");
    gets(a11);
    printf("b: ");
    gets(a22);
    printf("c: ");
    gets(a33);
    double end = sec();
    if((strcmp(a1,a11)==0) && (strcmp(a2,a22)==0) && (strcmp(a2,a22)==0))
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh6()
{
    system("cls");
    printf("3 rivers name of Kishoreganj _______\n\nYour Ans:");
    double strt = sec();
    char a1[]= {"Meghna"}, a2[]= {"Kalni"}, a3[]= {"Dhanu"};
    char a11[50], a22[51], a33[50];
    printf("a: ");
    gets(a11);
    printf("b: ");
    gets(a22);
    printf("c: ");
    gets(a33);
    double end = sec();
    if((strcmp(a1,a11)==0) && (strcmp(a2,a22)==0) && (strcmp(a2,a22)==0))
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh7()
{
    system("cls");
    printf("Time zone of Manikganj _______.\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"UTC+06:00"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh8()
{
    system("cls");
    printf("HDI of Gopalganj ________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"0.649"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh9()
{
    system("cls");
    printf("Annual average temperature of Rajbari district is maximum __(a)__ & minimum __(b)__ and rainfall is __(c)__\n\nYour Ans:");
    double strt = sec();
    char a1[]= {"35.8 degree celsius"}, a2[]= {"12.6 degree celsius"}, a3[]= {"2105 mm"};
    char a11[50], a22[51], a33[50];
    printf("a: ");
    gets(a11);
    printf("b: ");
    gets(a22);
    printf("c: ");
    gets(a33);
    double end = sec();
    if((strcmp(a1,a11)==0) && (strcmp(a2,a22)==0) && (strcmp(a2,a22)==0))
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh10()
{
    system("cls");
    printf("ISO code of Chittagong is _________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"3166"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh11()
{
    system("cls");
    printf("Total population of Comilla is _________\n\nYouA ans:");
    double strt = sec();
    char ans[]= {"5387288"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh12()
{
    system("cls");
    printf("The District Commissioner of Lakhsmipur is ___________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Anjon Chandra Paul"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}
void dh13()
{
    system("cls");
    printf("Mayor of Bandarban Township is _____________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Islam Baby"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh14()
{
    system("cls");
    printf("Elevation of Pabna district is ______________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"8 m / 26 ft"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}

void dh15()
{
    system("cls");
    printf("Demonym(s) of Sylhet is _____________\n\nYour Ans:");
    double strt = sec();
    char ans[]= {"Sylheti"};
    char ans1[50];
    gets(ans1);
    double end = sec();
    if(strcmp(ans,ans1)==0)
    {
        system("cls");
        printf("Congress!!!\nYour answer is right.\n\n");
        marks_of_users += hard_marks(strt, end);
        printf("\nYour Marks is %.2f\n\n\n\n\n", marks_of_users);
        sleep(1);
    }
    else
    {
        system("cls");
        printf("Sorry!!!\nYour answer is wrong.\n\n");
        sleep(1);
    }
}


//quiz part end


//HELP
void help()
{
    system("cls");
    FILE *file;
    file = fopen("Help.txt", "r");
    char a;
    while(!feof(file))
    {
        a = fgetc(file);
        printf("%c", a);
    }
    printf("\nPress any key for back");
    switch(getch())
    {
    default:
        home_page();
        break;
    }
}
void rate()
{
    system("cls");
    FILE *file;
    file = fopen("Rate Us & Suggestion.txt", "r");
    char a;
    while(!feof(file))
    {
        a = fgetc(file);
        printf("%c", a);
    }
    printf("\nPress any key for back");
    switch(getch())
    {
    default:
        home_page();
        break;
    }
}

void about_us()
{
    system("cls");
    FILE *file;
    file = fopen("About us.txt", "r");
    char a;
    while(!feof(file))
    {
        a = fgetc(file);
        printf("%c", a);
    }
    printf("\nPress any key for back");
    switch(getch())
    {
    default:
        home_page();
        break;
    }
}

void profile()
{
    system("cls");
    FILE *file;
    file = fopen(users_name, "r");
    fflush(stdin);
    fgets(users_password, 50, file);
    fflush(stdin);
    fgets(users_password, 50, file);
    fflush(stdin);
    fscanf(file, "%lf", &marks_of_users);
    fscanf(file, "%lf", &memory_test_score);
    fscanf(file, "%lf", &score_of_word_game);
//    fscanf(file, "%[^\n]d", &marks_of_users);
    fclose(file);
    for(int i=2; i<25; i++)
    {
        g(1,i);
        printf("!");
        g(118,i);
        printf("!");
    }
    for(int i=2; i<118; i++)
    {
        g(i,1);
        printf("_");
        g(i,24);
        printf("_");
    }
    g(20, 5);
    printf("Your name: %s", users_name);
    g(20, 6);
    fflush(stdin);
    printf("Your password: %s", users_password);
    g(20, 7);
    printf("Score of last Quiz: %0.2lf", marks_of_users);
    g(20,8);
    printf("Score of last Memory test game: %0.2lf", memory_test_score);
    g(20, 9);
    printf("Score of last Word game: %0.2lf", score_of_word_game);
    printf("\n\t\t\tpress any key for home page");
    switch(getch())
    {
    default:
        home_page();
        break;
    }
}

void loadingBar()
{
    system("cls");
    system("color B4");
    char a = 177, b = 219;
    printf("\n\n\n\n");
    printf("\t\t\t\t>>>***\"Artemis Coder\""
           "\n\t\t\t\t\t\t- ``The Devil OF Coding``***<<<"
           "\n\n\t\t\t$$___---~~~~--->``Think Twice But Code Once``<---~~~~---___$$");
    printf("\n\n\n\n\t\t\t\t\t\t""loading..........\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", a);
    }
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", b);
        Sleep(50);
    }
}

void loadingBar_for_home()
{
    system("color B4");
    char a = 177, b = 219;
    printf("\n\n\n\n");
    printf("\t\t\t\t>>>***\"Artemis Coder\""
           "\n\t\t\t\t\t\t- ``The Devil OF Coding``***<<<"
           "\n\n\t\t\t$$___---~~~~--->``Think Twice But Code Once``<---~~~~---___$$");
    printf("\n\n\n\n\t\t\t\t\t\t""loading..........\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", a);
    }
    printf("\r");
    printf("\t\t\t\t\t");
    for (int i = 0; i < 30; i++)
    {
        printf("%c", b);
        Sleep(500);
    }
    printf("\n\n\t\t\t\t\t ~~Loading Done~~\n\t\t\t\t\t\"Enter Any Key For Enter The Project\" \n\n");
    getch();
}

void memory_test()
{
    system("cls");
    int arr[50];
    memory_test_score=0;
    char nn[5][50];
    srand(time(NULL));
    int list[100], vektor[10];
    for (int i = 0; i < 60; i++)
    {
        list[i] = i;
    }
    for (int i = 0; i < 60; i++)
    {
        int j = i + rand() % (60- i);
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = list[i];
//        printf("%d  ", arr[i]);
    }
    for(int a=0; a<5; a++)
    {
        switch(arr[a]+1)
        {
        case 1:
            strcpy(nn[a],"Outstanding");
            break;
        case 2:
            strcpy(nn[a], "Outstandingly");
            break;

        case 3:
            strcpy(nn[a], "Outstare");
            break;

        case 4:
            strcpy(nn[a], "Outscold");
            break;

        case 5:
            strcpy(nn[a], "Outscore");
            break;
        case 6:
            strcpy(nn[a], "Outscored");
            break;
        case 7:
            strcpy(nn[a], "Outsailing");
            break;
        case 8:
            strcpy(nn[a], "Outsails");
            break;
        case 9:
            strcpy(nn[a], "Outsell");
            break;
        case 10:
            strcpy(nn[a], "Outsets");
            break;
        case 11:
            strcpy(nn[a], "Informal");
            break;
        case 12:
            strcpy(nn[a], "Informs");
            break;
        case 13:
            strcpy(nn[a], "Information");
            break;
        case 14:
            strcpy(nn[a], "Informations");
            break;
        case 15:
            strcpy(nn[a], "Informallly");
            break;
        case 16:
            strcpy(nn[a], "Informant");
            break;
        case 17:
            strcpy(nn[a], "Infection");
            break;
        case 18:
            strcpy(nn[a], "Informational");
            break;
        case 19:
            strcpy(nn[a], "Informants");
            break;
        case 20:
            strcpy(nn[a], "Informatics");
            break;
        case 21:
            strcpy(nn[a], "Commence");
            break;
        case 22:
            strcpy(nn[a], "Commendations");
            break;
        case 23:
            strcpy(nn[a], "Commenced");
            break;
        case 24:
            strcpy(nn[a], "Commencement");
            break;
        case 25:
            strcpy(nn[a], "Commencer");
            break;
        case 26:
            strcpy(nn[a], "Comment");
            break;

        case 27:
            strcpy(nn[a], "Coments");
            break;

        case 28:
            strcpy(nn[a], "Commencer");
            break;

        case 29:
            strcpy(nn[a], "Commed");
            break;

        case 30:
            strcpy(nn[a], "Commented");
            break;

        case 31:
            strcpy(nn[a], "Commentary");
            break;

        case 32:
            strcpy(nn[a], "Informatics");
            break;

        case 33:
            strcpy(nn[a], "Commence");
            break;

        case 34:
            strcpy(nn[a], "Informants");
            break;

        case 35:
            strcpy(nn[a], "Outsails");
            break;

        case 36:
            strcpy(nn[a], "Commenced");
            break;

        case 37:
            strcpy(nn[a], "Outsell");
            break;

        case 38:
            strcpy(nn[a], "Infection");
            break;

        case 39:
            strcpy(nn[a], "Outsets");
            break;

        case 40:
            strcpy(nn[a], "Outstare");
            break;

        case 41:
            strcpy(nn[a], "Acting");
            break;

        case 42:
            strcpy(nn[a], "Actinic");
            break;

        case 43:
            strcpy(nn[a], "Actinides");
            break;

        case 44:
            strcpy(nn[a], "Actinism");
            break;

        case 45:
            strcpy(nn[a], "Actinium");
            break;

        case 46:
            strcpy(nn[a], "Actioner");
            break;

        case 47:
            strcpy(nn[a], "Actiones");
            break;

        case 48:
            strcpy(nn[a], "Actioning");
            break;

        case 49:
            strcpy(nn[a], "Active");
            break;

        case 50:
            strcpy(nn[a], "Activated");
            break;

        case 51:
            strcpy(nn[a], "Googly");
            break;

        case 52:
            strcpy(nn[a], "Google");
            break;

        case 53:
            strcpy(nn[a], "Goglies");
            break;

        case 54:
            strcpy(nn[a], "Googling");
            break;

        case 55:
            strcpy(nn[a], "Goof");
            break;

        case 56:
            strcpy(nn[a], "Goofball");
            break;

        case 57:
            strcpy(nn[a], "Goofier");
            break;

        case 58:
            strcpy(nn[a], "Goofiest");
            break;

        case 59:
            strcpy(nn[a], "Goofs");
            break;

        case 60:
            strcpy(nn[a], "Goofy");
            break;

        }
    }
    for(int i=0, k=0; i<5; i++, k+=15)
    {
        for(int i=2; i<25; i++)
        {
            g(1,i);
            printf("!");
            g(118,i);
            printf("!");
        }
        for(int i=2; i<118; i++)
        {
            g(i,1);
            printf("_");
            g(i,24);
            printf("_");
        }
        g(25+k, 12);
        printf("%s\t", nn[i]);
    }
    sleep(5);
//    int list[100], vektor[10];
    for (int i = 0; i < 5; i++)
    {
        list[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        int j = i + rand() % (5- i);
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = list[i];
    }

    for(int i=0; i<5; i++)
    {
        int ad;
        system("cls");
        for(int i=2; i<25; i++)
        {
            g(1,i);
            printf("!");
            g(118,i);
            printf("!");
        }
        for(int i=2; i<118; i++)
        {
            g(i,1);
            printf("_");
            g(i,24);
            printf("_");
        }
        g(30, 10);
        printf("What was the number of this word? \"%s\"", nn[arr[i]]);
        g(30, 16);
        scanf("%d", &ad);
        if(strcmp(nn[arr[i]], nn[ad-1])==0)
        {
            g(30, 15);
            printf("Your answer is right.");
            memory_test_score+=2;
            printf("Your score is %.2lf", memory_test_score);
            sleep(1);
        }
        else
        {
            g(30,15);
            printf("wrong answer");
        }
        sleep(1);
    }
    g(30, 18);
    printf("Your total score is %.2lf\n\n\n\n\n\n\n", memory_test_score);
    FILE *file;
//    file = fopen(users_name, "r");
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
//    fgets(users_password, 50, file);
//    fflush(stdin);
////    fscanf(file, "%lf", &score_of_word_game);
////    fscanf(file, "%lf", &score_of_word_game);
//    fclose(file);
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test_score);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
l:
    printf("press 1 for home menu\npress 2 for exit");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("you have input wrong number\nplease try again");
        sleep(1);
        goto l;
        break;
    }

}

void word1()
{
    system("cls");
    int arr[50];
    score_of_word_game=0;
    char nn[5][50];
    srand(time(NULL));
    int list[100], vektor[10];
    for (int i = 0; i < 20; i++)
    {
        list[i] = i;
    }
    for (int i = 0; i < 20; i++)
    {
        int j = i + rand() % (20- i);
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = list[i];
        printf("%d  ", arr[i]);

    }
    for(int i=0; i<5; i++)
    {
        fflush(stdin);
        switch(arr[i]+1)
        {
        case 1:
            set1();
            break;
        case 2:
            set1_1();
            break;

        case 3:
            set1_2();
            break;

        case 4:
            set1_3();
            break;

        case 5:
            set1_4();
            break;
        case 6:
            set1_5();
            break;
        case 7:
            set1_6();
            break;
        case 8:
            set1_7();
            break;
        case 9:
            set1_8();
            break;
        case 10:
            set1_9();
            break;
        case 11:
            set1_10();
            break;
        case 12:
            set1_11();
            break;
        case 13:
            set1_12();
            break;
        case 14:
            set1_13();
            break;
        case 15:
            set1_14();
            break;
        case 16:
            set1_15();
            break;
        case 17:
            set1_16();
            break;
        case 18:
            set1_17();
            break;
        case 19:
            set1_18();
            break;
        case 20:
            set1_19();
            break;
        }
    }
    FILE *file;
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
l:
    printf("\npress 1 for home menu\npress 2 for exit\n");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("\nyou have input wrong number\nplease try again\n");
        sleep(1);
        goto l;
        break;
    }


}

void set1()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"t\"   \"a\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "tea")==0) || (strcmp(ans, "ate")==0) || (strcmp(ans, "eat")==0) || (strcmp(ans, "eta")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}

void set1_1()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"c\"   \"a\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "act")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}

void set1_2()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"e\"   \"t\"   \"c\"\n");
    gets(ans);
    if((strcmp(ans, "tec")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_3()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"o\"   \"n\"   \"s\"\n");
    gets(ans);
    if((strcmp(ans, "nos")==0) || (strcmp(ans, "son")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_4()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"e\"   \"t\"   \"g\"\n");
    gets(ans);
    if((strcmp(ans, "get")==0) || (strcmp(ans, "teg")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}

void set1_5()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"n\"   \"o\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "ton")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}

void set1_6()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"n\"   \"s\"   \"o\"  \"o\"\n");
    gets(ans);
    if((strcmp(ans, "soon")==0) || (strcmp(ans, "onos")==0) || (strcmp(ans, "oons")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_7()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"o\"   \"b\"   \"m\"\n");
    gets(ans);
    if((strcmp(ans, "mob")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_8()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"u\"   \"p\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "put")==0) || (strcmp(ans, "tup")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_9()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"a\"   \"b\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "bat")==0) || (strcmp(ans, "tab")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_10()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"r\"   \"a\"   \"r\"   \"a\"  \"y\"\n");
    gets(ans);
    if((strcmp(ans, "array")==0) || (strcmp(ans, "yarra")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_11()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"y\"   \"e\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "eye")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_12()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"o\"   \"h\"   \"w\"\n");
    gets(ans);
    if((strcmp(ans, "how")==0) || (strcmp(ans, "who")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_13()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"n\"   \"f\"   \"a\"\n");
    gets(ans);
    if((strcmp(ans, "fan")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_14()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"n\"   \"d\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "end")==0) || (strcmp(ans, "den")==0) || (strcmp(ans, "ned")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_15()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"u\"   \"y\"   \"o\"\n");
    gets(ans);
    if((strcmp(ans, "you")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_16()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"d\"   \"n\"   \"a\"\n");
    gets(ans);
    if((strcmp(ans, "and")==0) || (strcmp(ans, "dan")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_17()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"s\"   \"a\"   \"s\"\n");
    gets(ans);
    if((strcmp(ans, "ass")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_18()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"l\"   \"a\"   \"l\"\n");
    gets(ans);
    if((strcmp(ans, "all")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set1_19()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"l\"   \"i\"   \"w\"  \"d\"\n");
    gets(ans);
    if((strcmp(ans, "wild")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void word2()
{
    system("cls");
    int arr[50];
    char nn[5][50];
    srand(time(NULL));
    int list[100], vektor[10];
    for (int i = 0; i < 20; i++)
    {
        list[i] = i;
    }
    for (int i = 0; i < 20; i++)
    {
        int j = i + rand() % (20- i);
        int temp = list[i];
        list[i] = list[j];
        list[j] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = list[i];
        printf("%d  ", arr[i]);

    }
    score_of_word_game=0;
    for(int i=0; i<5; i++)
    {
        switch(arr[i]+1)
        {
        case 1:
            set2_1();
            break;
        case 2:
            set2_2();
            break;

        case 3:
            set2_3();
            break;

        case 4:
            set2_4();
            break;

        case 5:
            set2_5();
            break;
        case 6:
            set2_6();
            break;
        case 7:
            set2_7();
            break;
        case 8:
            set2_8();
            break;
        case 9:
            set2_9();
            break;
        case 10:
            set2_10();
            break;
        case 11:
            set2_11();
            break;
        case 12:
            set2_12();
            break;
        case 13:
            set2_13();
            break;
        case 14:
            set2_14();
            break;
        case 15:
            set2_15();
            break;
        case 16:
            set2_16();
            break;
        case 17:
            set2_17();
            break;
        case 18:
            set2_18();
            break;
        case 19:
            set2_19();
            break;
        case 20:
            set2_20();
            break;
        }
    }
    FILE *file;
    file = fopen(users_name, "w");
    fprintf(file, users_name);
    fprintf(file, "\n");
    fprintf(file, users_password);
    fprintf(file, "\n");
    fprintf(file, "%lf", marks_of_users);
    fprintf(file, "\n");
    fprintf(file, "%lf", memory_test);
    fprintf(file, "\n");
    fprintf(file, "%lf", score_of_word_game);
    fprintf(file, "\n");
    fclose(file);
l:
    printf("\npress 1 for home menu\npress 2 for exit\n");
    switch(getch())
    {
    case '1':
        home_page();
        break;
    case '2':
        exit_page();
        exit;
        break;
    default:
        printf("\nyou have input wrong number\nplease try again\n");
        sleep(1);
        goto l;
        break;
    }
}

void set2_1()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"f\"   \"i\"   \"f\"   \"r\"   \"e\"   \"e\"   \"n\"   \"t\"   \"d\"\n");
    gets(ans);
    if((strcmp(ans, "different")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_2()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"d\"   \"e\"   \"c\"   \"i\"   \"t\"   \"x\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "excited")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_3()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"r\"   \"m\"   \"e\"   \"m\"   \"g\"   \"o\"   \"r\"   \"r\"   \"a\"   \"p\"\n");
    gets(ans);
    if((strcmp(ans, "programmer")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_4()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"d\"   \"e\"   \"r\"   \"c\"   \"o\"\n");
    gets(ans);
    if((strcmp(ans, "coder")==0) || (strcmp(ans, "cored")==0) || (strcmp(ans, "credo")==0)  || (strcmp(ans, "decor")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_5()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"t\"   \"e\"   \"r\"   \"a\"   \"n\"   \"s\"   \"l\"   \"a\"\n");
    gets(ans);
    if((strcmp(ans, "translate")==0) || (strcmp(ans, "asternal")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_6()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"c\"   \"y\"   \"h\"   \"0\"   \"p\"   \"s\"\n");
    gets(ans);
    if((strcmp(ans, "psyscho")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_7()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"r\"   \"i\"   \"l\"   \"e\"   \"r\"   \"t\"   \"h\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "thriller")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_8()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"m\"   \"o\"   \"e\"   \"r\"   \"y\"   \"m\"\n");
    gets(ans);
    if((strcmp(ans, "memory")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_9()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"e\"   \"r\"   \"c\"   \"i\"   \"m\"\n");
    gets(ans);
    if((strcmp(ans, "crime")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_10()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"s\"   \"e\"   \"n\"   \"f\"   \"f\"   \"o\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "offense")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_11()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"e\"   \"s\"   \"p\"   \"a\"   \"s\"   \"s\"   \"t\"   \"r\"\n");
    gets(ans);
    if((strcmp(ans, "trespass")==0) || (strcmp(ans, "sparsest")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_12()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"g\"   \"s\"   \"s\"   \"i\"   \"o\"   \"n\"   \"r\"   \"e\"  \"r\"   \"a\"   \"n\"   \"s\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "transgression")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_13()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"p\"   \"a\"   \"s\"   \"i\"   \"n\"   \"g\"   \"e\"   \"l\"\n");
    gets(ans);
    if((strcmp(ans, "elapsing")==0) || (strcmp(ans, "pleasing")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_14()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"q\"   \"u\"   \"e\"   \"n\"   \"c\"   \"y\"   \"l\"   \"i\"   \"n\"   \"d\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "delinquency")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_15()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"t\"   \"u\"   \"r\"   \"e\"   \"s\"   \"t\"   \"u\"   \"r\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "structure")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_16()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"i\"   \"n\"   \"t\"   \"0\"   \"p\"   \"e\"   \"r\"\n");
    gets(ans);
    if((strcmp(ans, "pointer")==0) || (strcmp(ans, "protein")==0) || (strcmp(ans, "tropine")==0) || (strcmp(ans, "pterion")==0) || (strcmp(ans, "repoint")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_17()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"u\"   \"n\"   \"c\"   \"f\"   \"i\"   \"o\"   \"n\"   \"t\"\n");
    gets(ans);
    if((strcmp(ans, "function")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_18()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"s\"   \"t\"   \"r\"   \"u\"   \"c\"   \"t\"   \"i\"   \"o\"   \"n\"   \"c\"   \"o\"   \"n\"\n");
    gets(ans);
    if((strcmp(ans, "construction")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_19()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"s\"   \"h\"   \"l\"   \"p\"   \"w\"   \"o\"   \"r\"   \"k\"   \"m\"   \"a\"   \"n\"\n");
    gets(ans);
    if((strcmp(ans, "workmanship")==0))
    {
        printf("your answers is right.");

        sleep(1);
        score_of_word_game+=2;
    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}
void set2_20()
{
    system("cls");
    char ans[10];
    printf("Make a meaningful word using this following letters----\n\"s\"   \"s\"   \"i\"   \"o\"   \"n\"   \"a\"   \"c\"   \"c\"   \"e\"\n");
    gets(ans);
    if((strcmp(ans, "accession")==0))
    {
        printf("your answers is right.");
        sleep(1);
        score_of_word_game+=2;

    }
    else
    {
        printf("Your answer is wrong");
        sleep(1);
    }
}

void game()
{
f:
    system("cls");
    g(48,7);
    printf("==>>Select A Game For play <==");
    g(50, 10);
    printf("1.Memory test game.");
    g(50, 12);
    printf("2.Word game");
    g(50,14);
    printf("3.Game Instruction");
    printf("\n\n\tFor Home menu press 4\n\n\t"
           "For Previous menu press 5\n\n\t"
           "For Exit press 6\n");
    char a;
    fflush(stdin);
    scanf("%c", &a);
    switch(a)
    {
    case '1':
        memory_test();
        break;
    case '2':
d:
        system("cls");
        g(50, 10);
        printf("1.Easy Mood");
        g(50, 11);

        printf("2.Hard Mood");
        switch(getch())
        {
        case '1':
            word1();
            break;
        case '2':
            word2();
            break;
        default:
            printf("wrong input.Try again");
            sleep(1);
            goto d;
            break;
        }
    case '3':
        gameintrctn();
        break;

    case '4':
        home_page();
        break;
    case '5':
        home_page();
        break;
    case'6':
        exit_page();
        exit;
        break;

    default:
        printf("wrong input. Try again");
        sleep(1);
        goto f;
        game();
        break;
    }
}
//Instruction for Quiz game

void quizintrctn()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Instruction for Quiz game.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
    printf("\nPress any key for Quiz menu\n");
    getch();
    sleep(1);
    quiz_main();
}


//Game Instruction
void gameintrctn()
{
    system("cls");
    FILE *file;
    char c;
    file = fopen("Game Instruction.txt", "r");
    while(!feof(file))
    {
        c= fgetc(file);
        printf("%c", c);
    }
    printf("\n\nPress any key for Game menu\n");
    getch();
    sleep(1);
    game();
}
