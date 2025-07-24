////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////DWI WAHYU SUSILOWATI///////////////////////////////////////
/////////////////////////D3 MANAJEMEN INFORMATIKA///////////////////////////////////////
////////////////////////KAKAK PEMBIMBING NUR JAMILA/////////////////////////////////////
//////////////////////////////////KELOMPOK 6////////////////////////////////////////////
/////////////////////////TUTOR AISYAH ROMAITO SIREGAR///////////////////////////////////
///////////////////////// WINDOWS SIZE : 170 X 42///////////////////////////////////////
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *valnama(char *nama);
char *valumur(char *umur);
char *valAlamat(char *alamat);
//char *valUmur(char ur[]);
char *valpace(char *pace);


char usr[100];
char pass[100];
char buff1[100], buff2[100];
char domisili[100];
char username_tamp[100][100];
char password_tamp[100][100];
char username_baru[100][100];
char buffumur[100][100];
char umur_tamp[100][100];
char domisili_tamp[100][100];

#define handle GetStdHandle(STD_OUTPUT_HANDLE)

////WARNA////
#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define DARK_WHITE 7

#define GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

void daftar_akun();
void login();
void lari();
void boyolali();
void user();
void daftar_member();
void menu();
void maraton_borobudur();
void dosenuns();
void join_event();
void card();
void delate();
void update();
void indormasi();
void explor();
void tampilan_menu();
void menu_daftarmember();
// void balik_balik();

int pilihan;


// char pilih;

char nama[100][100],pend[100];
int  umur,pace;
int cek=0;

char  tamp_nama[100][100];
int tamp_umur[100][100],tamp_pace[100][100];


int text_color = FOREGROUND_INTENSITY;
int background_color = 0;

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(handle, posisi);
}
void textcolor(int color)
{
    SetConsoleTextAttribute(handle, color | (background_color << 4));
    text_color = color;
}
void background(int color)
{
    SetConsoleTextAttribute(handle, text_color | (color << 4));
    background_color = color;
}
void setcolor(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}
void bingkai(int x, int y, int panjang, int lebar, int textcolor, int bgcolor)
{
    for (int i = 0; i <= panjang; i++)
    {
        for (int j = 0; j <= lebar; j++)
        {
            if (i == 0 || i == panjang || j == 0 || j == lebar)
            {
                gotoxy(x + i, y + j);
                setcolor(textcolor, bgcolor);
                printf("%c", 219);
            }
            else
            {
                gotoxy(x + i, y + j);
                setcolor(bgcolor, bgcolor);
                printf(" ");
            }
        }
    }
}
char *valpace(char *pace)
{
    char input;
    char tamp[100] = {};
    int index = 0;

    while ((input = getch()) != 13 || index > 10)
    {
        if (index < 2 && (input >= '1' && input <= '9' || input == '0' && index != '0'))
        {
            printf("%c",input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(pace, tamp);
}

char *valumur(char *umur)
{
    char input;
    char tamp[100] = {};
    int index = 0;

    while ((input = getch()) != 13 || index < 2)
    {
        if (index < 2 && (input >= '1' && input <= '9' || input == '0' && index != '0'))
        {
            printf("%c",input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    return strcpy(umur, tamp);
}
void bingkai2(int x, int y, int panjang, int lebar, int textcolor)
{
    for (int i = 0; i <= panjang; i++)
    {
        for (int j = 0; j <= lebar; j++)
        {
            if (i == 0 || i == panjang || j == 0 || j == lebar)
            {
                gotoxy(x + i, y + j);
                setcolor(textcolor, background);
                printf("%c", 219);
            }
            else
            {
                gotoxy(x + i, y + j);

                printf(" ");
            }
        }
    }
}
void pilih(int x, int y)
{
    char input;
    char tamp[100] = {};
    int index = 0;
    while ((input = getch()) != 13 || index < 1)
    {
        if (index < 1 && (input >= '1' && input <= '5'))
        {
            gotoxy(x + index, y);
            printf("%c", input);
            tamp[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tamp[index] = '\0';
        }
    }
    pilihan = atoi(tamp);
}
void lari()
{
    setcolor(3, 15);
    Sleep(100);
    bingkai(0, 0, 99, 38, 3, 15);
    gotoxy(15, 2);
    printf(".........................................................................................................:# .............................................................             \n");
    gotoxy(15, 3);
    printf(".......................................................................................................-%%@@@#==+*##%%%%%%%%%%%%#-.............................................................             \n");
    gotoxy(15, 4);
    printf("......................................................................................................:+*#@@@@@@@@@@@@@@@@%%@%%@%%=::.............................................................             \n");
    gotoxy(15, 5);
    printf("......................................................................................................:==- @=.......:-=++%%@@@@%%+-:....-#@@@@=:......*+#:.............................................................             \n");
    gotoxy(15, 6);
    printf("...........................................................................................................%%................:+%%@@@@@#+=:#@@@@@@@@@=: --:%%%%%%=-.............................................................              \n");
    gotoxy(15, 7);
    printf(".............................................................................................................................  +@@@@@@%%+#@@%%@@@@@@@+  +@@@@= .............................................................            \n");
    gotoxy(15, 8);
    printf("............................................................................................................................ :=+#%%@@@#+@@@@@@@@+-:  :#@@# .............................................................            \n");
    gotoxy(15, 9);
    printf("........................................................................................................................... -=###%%%%@@@@%%@@@@@@%%%%+:    -%%@+ .............................................................           \n");
    gotoxy(15, 10);
    printf("......................................................................................................................... -==%%%%@@@@@@@%%%%@%%@@%%*:    -#@%% .............................................................           \n");
    gotoxy(15, 11);
    printf("....................................................................................................................... ---=#%%@@@@@@@@@@@%%#*:     -#@@- .............................................................          \n");
    gotoxy(15, 12);
    printf("...................................................................................................................... :-=+@@@@@@@@%%+**%%@@@@@%%=::#@@@= .............................................................            \n");
    gotoxy(15, 13);
    printf(".................................................................................................................... :--=#%%@@@@@@@@%%*+:..=%%@@@@@@@@@= .............................................................             \n");
    gotoxy(15, 14);
    printf(".................................................................................................................. =++++#@@@@@@%%%%=-:........:-+%%@@#- .............................................................           \n");
    gotoxy(15, 15);
    printf(".............................................................................................................. :-*%%@@@@%%#@@@@%%#+-:................::.............................................................           \n");
    gotoxy(15, 16);
    printf("............................................................................................................ :+#%%@@@@@@@@@@%%#-.............................................................           \n");
    gotoxy(15, 17);
    printf("............................................................................................................ @%%%%@@@@@@@@@@@%%-.............................................................          \n");
    gotoxy(15, 18);
    printf("........................................................................................................... :@@@@@@@@@@@@@@@@@@@%%=.............................................................          \n");
    gotoxy(15, 19);
    printf("........................................................................................................... +@@@@@@@@@@@@@@@@@@@@@@@+:.............................................................             \n");
    gotoxy(15, 20);
    printf("......................................................................................................... -%%@@@@@@@@@@@@@@@@@@@@@@@@@@@*-.............................................................         \n");
    gotoxy(15, 21);
    printf("....................................................................................................... :#@@@@@@@@@@--+%%@@@@@@@@@@@@@@@%%.............................................................             \n");
    gotoxy(15, 22);
    printf("....................................................................................................... =%%@@@@@@@@%%=...........--=@@@@@@@.............................................................             \n");
    gotoxy(15, 23);
    printf(".................................................................................................... :=@@@@@@@@%%+...............*@@@@@@%%-.............................................................              \n");
    gotoxy(15, 24);
    printf("................................................................................................... :*@@@@@@@%%=................-#@@@@@@+.............................................................             \n");
    gotoxy(15, 25);
    printf("................................................................................................. -#@@@@@@@@-..................-#@@@@@#:.............................................................            \n");
    gotoxy(15, 26);
    printf(".............................................................................................  =%%@@@@@@@@+:..................-%%@@@@............................................................            \n");
    gotoxy(15, 27);
    printf("........................................................................................... :%%@@@@@@@@#-....................:@@@@#:.............................................................          \n");
    gotoxy(15, 28);
    printf("......................................................................................... :@@@@@@@#-........................@@@%%-.............................................................          \n");
    gotoxy(15, 29);
    printf(".......................................................................................  +@@@@@@#-......................:-%%@@@#:.............................................................          \n");
    gotoxy(15, 30);
    printf("...................................................................................... =%%@@@@%%=:....................-#%%@@@%%+.............................................................          \n");
    gotoxy(15, 31);
    printf("................................................................................ --:=+%%@@@%%+...........................:*@@@@@@#-.............................................................         \n");
    gotoxy(15, 32);
    printf("............................................................................... =%%@@%%@@@%%-...............................-+#%%@%%@@%%*==.............................................................         \n");
    gotoxy(15, 33);
    printf("..............................................................................  +@@@@@@+.........................................-+%%@@@@@.............................................................            \n");
    gotoxy(15, 34);
    printf("............................................................................... +@@@@%%...................................................................................................................................  \n");
    gotoxy(15, 35);
    printf("............................................................................... :*@@@#.....................................................................................................................           \n");
    gotoxy(15, 36);
    printf(".............................................................................. -#@@=.......................................................................................................           \n");
    gotoxy(15, 37);
    printf(".............................................................................. =%%@*.............................................................................................................     \n");
    gotoxy(15, 38);
    printf(".............................................................................. :*#:.....................................................................................................  \n");
    Sleep(3000);
    boyolali();
}
void boyolali()
{
    system("cls");
    setcolor(3, 15);
    Sleep(500);
    bingkai(0, 0, 169, 38, 3, 15);
    gotoxy(50, 3);
    printf("//////////////////////////////////////////////////////////////////");
    gotoxy(50, 4);
    printf("// ___           _       ____                                   //");
    gotoxy(50, 5);
    printf("//|_ _|_ __   __| | ___ |  _ \\ _   _ _ __  _ __   ___ _ __ ___  //");
    gotoxy(50, 6);
    printf("// | || '_ \\ / _` |/ _ \\| |_) | | | | '_ \\| '_ \\ / _ \\ '__/ __| //");
    gotoxy(50, 7);
    printf("// | || | | | (_| | (_) |  _ <| |_| | | | | | | |  __/ |  \\__ \\ //");
    gotoxy(50, 8);
    printf("//|___|_| |_|\\__,_|\\___/|_|_\\_\\__,_|_| |_|_| |_|\\___|_|  |___/ //");
    gotoxy(50, 9);
    printf("//| __ )  ___  _   _  ___ | | __ _| (_)                         //");
    gotoxy(50, 10);
    printf("//|  _ \\ / _ \\| | | |/ _ \\| |/ _` | | |                         //");
    gotoxy(50, 11);
    printf("//| |_) | (_) | |_| | (_) | | (_| | | |                         //");
    gotoxy(50, 12);
    printf("//|____/ \\___/ \\__, |\\___/|_|\\__,_|_|_|                         //");
    gotoxy(50, 13);
    printf("//             |___/                                            //");
    gotoxy(50, 14);
    printf("//////////////////////////////////////////////////////////////////");
    Sleep(1000);
}

void informasi()
{
    getch();
    system("cls");
    printf("Kegemaran masyarakat akan olahraga lari, semakin meningkat. Tak jarang bermunculan berbagai komunitas di berbagai daerah,\n");
    printf("salah satunya adalah Boyolali Runners.");
    printf("\nSesuai dengan namanya, Boyolali Runners adalah komunitas bagi warga Kabupaten Boyolali yang hobi lari.");
    printf(" \nMereka yang ada di sini atau merasa lebih dekat jarak tempuhnya, juga berkesempatan olahraga bersama.");
    printf("Berawal dari 4 orang sejak berdiri pada Januari 2018, lalu anggotanya mengalami perkembangan cukup pesat hingga saat ini.");
    printf("\nKomunitas ini pertama kali lari, di alun-alun kidul Boyolali. Berawal hanya empat orang, Bayu (Captain pertama), Yoga, Yusak (captain kedua),");
    printf("Adi (captain ketiga) dan Captain yang sekarang atau ke-4 adalah Dzaky, seorang Co-Assiten Profesi Dokter.\n");
    printf("Tak hanya di sekitaran alun-alun kidul saja, tetapi juga berlari pada area sirkuit dan lapangan bola timur Polres Boyolali.\n");
    printf("Seiring dengan kebersamaan, mereka sepakat untuk membentuk sebuah komunitas baru.");
    printf("\nTak hanya menjadi komunitas lokal, namun sejak 1 maret 2019 mereka bergabung menjadi bagian dari komunitas lari terbesar di Indonesia yaitu Indo Runners.");
    printf("\n\n\nKEGIATAN\n");
    printf("\nKegiatan rutin seperti Night Run, Fun Run di sekitar kota dan alun-alun kidul,\n");
    printf("Long Run untuk berlari melintasi tempat wisata di Boyolali dengan jarak tempuh mencapai 10 sampai 21 km.");
    printf("\n Ada juga Trail Run ke gunung, bahkan latihan interval di lapangan Lestarindo.\n");
    printf("Untuk cabor atletik, anggota mereka terakhir kali mewakili Seleksi Nasional Kejuaraan Atletik Nasional di Stadion Sriwedari Solo, kategori 5000 meter.\n");
    printf("Selain itu, juga ada anggota pada kategori Master atau pelari dengan umur di atas 40 tahun.\n");
    printf("Kategori ini sebagai wadah mentoring dan memotivasi anggota yang lebih muda.\n");
    printf("\nKomunitas ini punya harapan, untuk bisa menjadi rumah bagi siapa saja yg ingin termotivasi untuk memiliki gaya hidup sehat dan berkompetisi.");
    printf("Serta menjadi tempat untuk berinteraksi, belajar, dan menjadi pribadi yg berkembang dalam berhubungan sosial di masyarakat.");
    printf("\nMereka juga mengharapkan event seperti Dieng Lari Atas Awan yang di ikuti oleh 2 anggotanya,\n");
    printf("bisa melibatkan hubungan dari sisi kehidupan manusia dan budaya yg ada di Dieng");

    Sleep(1000);
    gotoxy(45, 35);
    printf("Tekan y/Y untuk MENU,dan Tekan t/T untuk kembali LOGIN atau DAFTAR");
    while ((pilihan = getch()) != 'y' && pilihan != 'Y' && pilihan != 't' && pilihan != 'T')
    {
    }
    if (pilihan == 'y' || pilihan == 'Y')
    {
        gotoxy(45, 25);
        printf("                                                            ");
        menu();
    }
    else
    {
        gotoxy(45, 25);
        printf("                                                            ");
        user();
    }
}
void explor()
{
    char inp;
    system("cls");
    background(13);
    bingkai(53, 5, 50, 25, 0, 15);
    

    bingkai(65, 8, 25, 5, 3, 15);
    gotoxy(66, 10);
    printf("1.KEGIATAN DALAM DAERAH");

    bingkai(65, 14, 25, 5, 3, 15);
    gotoxy(66, 16);
    printf("2.BERITA PELARI TERKINI");

    bingkai(65, 20, 25, 5, 2, 15);
    gotoxy(70, 23);
    printf("PILIH : ");
    pilihan = getch();
    if (pilihan == '1')
    {
        system("cls");
        bingkai(53, 5, 50, 25, 0, 15);

        gotoxy(66, 10);
        printf("1.BY BOYOLALI RUNNERS");
        gotoxy(66, 12);
        printf("2.BY HICER");
        gotoxy(66, 14);
        printf("3.BY ROHAYA.RUN");
        gotoxy(66, 16);
        printf("4.BY KENTANG JUNIOR");
        gotoxy(66, 18);
        printf("5.BY MASTER RUNNERS");
        gotoxy(66, 20);
        printf("PILIH : ");
        pilihan = getch();
        if (pilihan == '1')
        {
            system("cls");
            bingkai(53, 5, 50, 25, 0, 15);
            gotoxy(56, 8);
            printf("B O Y O L A L I R U N N E R S || H I C E R");
            gotoxy(70, 11);
            printf("P R E S E N T");
            gotoxy(73, 12);
            printf("SU RUN");
            gotoxy(64, 13);
            printf("Komunitas Lari Se-Boyolali");
            gotoxy(70, 15);
            printf("19 JULI 2024");
            gotoxy(68, 16);
            printf("N I G H T R U N");
            gotoxy(73, 17);
            printf("18.30");
            gotoxy(64, 18);
            printf("START-FINISH KABUPATEN LAMA");
            gotoxy(62, 20);
            printf("BOYOLALI RUNNERS . HIKING CERIA . ");
            gotoxy(57, 21);
            printf("MASTER RUNNERS . KENTANG JUNIOR . ROHAYA RUN");
            gotoxy(74, 24);
            Sleep(5000);
            printf("J O I N (DENGAN KLIK ENTER!!)");
            pilihan = getche();
            system("cls");
            join_event();
        }
        else if (pilihan == '2')
        {
            system("cls");
            bingkai(53, 5, 50, 25, 0, 15);
            gotoxy(55, 8);
            printf("================================================");
            gotoxy(55, 9);
            printf("L A T B E R  19KM");
            gotoxy(55, 10);
            printf("S I M P A N G 5 S E L O");
            gotoxy(55, 11);
            printf("S I M P A N G 5 P B S E L O");
            gotoxy(55, 12);
            printf("B Y ");
            gotoxy(55, 13);
            printf("H I C E R");
            gotoxy(55, 14);
            printf("================================================");
            gotoxy(55, 16);
            printf("30 JAN 2024");
            gotoxy(55, 17);
            printf("H A R A P DI P E R H A T I K A N");
            gotoxy(55, 18);
            printf("PARKIR KENDARAN DI PARKIR TAMAN HUTAN ");
            gotoxy(55, 19);
            printf("KOTA SIMPANG 5 BOYOLALI SEBELUM SPBU SIMPANG 5");
            gotoxy(55, 21);
            printf("START JM 05.00 WIB");
            gotoxy(55, 22);
            printf(". Peserta wajib konfirmasi ulang sebelum lari");
            gotoxy(55, 23);
            printf(". Briefing dan Pemanasan");
            gotoxy(55, 24);
            printf(". Perkiraan kumpul finish jm 12.00 WIB");
            gotoxy(55, 25);
            printf(". Disediakan 3 water station");
            gotoxy(55, 26);
            printf(". Disediakan Armada pulang ke simpang 5 BYL");
            gotoxy(55, 29);
            printf(" Hiking Ceria...Hike And Run,be Happy");
            gotoxy(56, 7);
            Sleep(5000);
            printf("J O I N (DENGAN KLIK ENTER!!)");
            pilihan = getche();
            system("cls");
            join_event();
        }
        else if (pilihan == '3')
        {
            system("cls");
            bingkai(53, 5, 50, 25, 0, 15);
            gotoxy(66, 6);
            printf("PHRI SALATIGA RUN 2024");
            gotoxy(68, 7);
            printf("F U N  R U N   7K");
            gotoxy(64, 27);
            printf("#Mlayu Bareng Seneng Bareng");
            gotoxy(56, 10);
            printf("T A M A N W I S A T A S E J A R A H S A L A 3");
            gotoxy(60, 13);
            printf("(T W S S) B U G E L S A L A T I G A");
            gotoxy(64, 9);
            printf("M I N G G U , 03 MARCH 2024");
            gotoxy(64, 29);
            printf("https://run.phrisalatiga.com");
            gotoxy(54, 28);
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||");
            gotoxy(55, 17);
            Sleep(5000);
            printf("J O I N (DENGAN KLIK ENTER!!)");
            pilihan = getche();
            system("cls");
            join_event();
        }
        else if (pilihan == '4')
        {
            system("cls");
            bingkai(53, 5, 50, 25, 0, 15);
            gotoxy(55, 8);
            printf("================================================");
            gotoxy(66, 9);
            printf("N I G H T  R U N  G O O");
            gotoxy(65, 10);
            printf("B O Y O L A L I  P R I D E");
            gotoxy(65, 11);
            printf("S T D N . K E B O  G I R O");
            gotoxy(77, 12);
            printf("B Y ");
            gotoxy(65, 13);
            printf("K E N T A N G J U N I O R");
            gotoxy(55, 14);
            printf("================================================");
            gotoxy(73, 16);
            printf("5 APRIL 2024");
            gotoxy(60, 17);
            printf("M P L A Y U  S A R E N G  S A R E N G");
            gotoxy(59, 18);
            printf("A M P U N  R A S I S  T A P I  S O L I D");
            gotoxy(65, 19);
            printf("A L O N  A L O N  M A W O N");
            gotoxy(70, 20);
            printf("START JM 19.00 WIB");
            gotoxy(55, 22);
            printf(". Membawa bawaan obat pribadi");
            gotoxy(55, 23);
            printf(". Briefing dan Pemanasan");
            gotoxy(55, 24);
            printf(". Mendapatkan Teman Teman Yang Solid");
            gotoxy(55, 29);
            printf(". Happy Fun Runners!!");
            gotoxy(56, 7);
            Sleep(5000);
            printf("J O I N (DENGAN KLIK ENTER!!)");
            pilihan = getche();
            system("cls");
            join_event();
        }
        else if (pilihan == '5')
        {
            system("cls");
            bingkai(53, 5, 50, 25, 0, 15);
            gotoxy(70, 6);
            printf("H I K I N G  L A W U");
            gotoxy(70, 8);
            printf("G U N U N G  L A W U");
            gotoxy(74, 27);
            printf("==3.265 MDPL==");
            gotoxy(75, 10);
            printf("MOUNT LAWU");
            gotoxy(72, 26);
            printf("J A W A  T E N G A H");
            gotoxy(71, 9);
            printf(" 09 FEBRUARI 2024");
            gotoxy(64, 24);
            printf("NATURE IS BEAUTIFUL, IT'S LUCKY IF YOU ");
            gotoxy(64, 25);
            printf("COME WITH FRIENDS MASTER RUNNERS");
            gotoxy(54, 28);
            printf("=================================================");
            gotoxy(55, 17);
            Sleep(5000);
            printf("J O I N (DENGAN KLIK ENTER!!)");
            pilihan = getche();
            system("cls");
            join_event();
        }
    }
    else if (pilihan == '2')
    {
        system("cls");
        printf("\n1. MARATON BOROBUDUR 2023");
        printf("\n2.BAPAK SUSILO HAMBENG POROMARTO SEORANG DOSEN UNS YANG  BERLARI DENGAN MEMBAWA BENDERA PALESTINA");
        printf("\nPILIH : ");
        pilihan = getch();
        if (pilihan == '1')
        {
            maraton_borobudur();
        }
        else if (pilihan == '2')
        {
            dosenuns();
        }
        else
        {
            printf("invalid");
        }
    }
    gotoxy(45, 38);
    printf("Tekan y/Y untuk kembali menu utama,dan Tekan t/T untuk ke menu explor");
    while ((inp = getch()) != 'y' && inp != 'Y' && inp != 't' && inp != 'T')
    {
    }
    if (inp == 'y' || inp == 'Y')
    {
        gotoxy(45, 25);
        printf("                                                            ");
        menu();
    }
    else
    {
        gotoxy(45, 25);
        printf("                                                            ");
        explor();
    }
    Sleep(1000);
    gotoxy(45, 35);
    printf("Tekan y/Y untuk MENU EXPLOR,dan Tekan t/T untuk MENU UTAMA");
    while ((pilihan = getch()) != 'y' && pilihan != 'Y' && pilihan != 't' && pilihan != 'T')
    {
    }
    if (pilihan == 'y' || pilihan == 'Y')
    {
        gotoxy(45, 25);
        printf("                                                            ");
        explor();
    }
    else
    {
        gotoxy(45, 25);
        printf("                                                            ");
        menu();
    }
}
// void balik_balik()
// {
//     char inp;
//     gotoxy(45, 35);
//     printf("Tekan y/Y untuk kembali menu utama,dan Tekan t/T untuk ke menu explor");
//     while ((inp = getch()) != 'y' && inp != 'Y' && inp != 't' && inp != 'T')
//     {
//     }
//     if (inp == 'y' || inp == 'Y')
//     {
//         gotoxy(45, 25);
//         printf("                                                            ");
//         menu();
//     }
//     else
//     {
//         gotoxy(45, 25);
//         printf("                                                            ");
//         explor();
//     }
// }

void join_event()
{
    bingkai(53, 5, 50, 25, 0, 15);
    gotoxy(56, 8);
    printf("S U K S E S  B E R G A B U N G");
    gotoxy(56, 10);
    printf("S E M A N G A T");
    gotoxy(56, 13);
    printf("|||||||||||||||||||||||||||||||||");
    gotoxy(94, 29);
    printf("# W I U");
}
void maraton_borobudur()
{
    system("cls");
    
    printf("Borobudur Marathon 2023 Powered by Bank Jateng mengusung tema ”Voice of Unity” untuk membangun semangat kolaborasi dan relasi sosial bagi Indonesia yang lebih baik.\n");
    printf("Selain menyalurkan olahraga lari, event Borobudur Marathon juga menjadi sarana untuk berekreasi. Agenda pariwisata olahraga (sport tourism) tahunan ini mengundang atensi banyak pelari dari seluruh negeri untuk hadir di kawasan Candi Borobudur yang bernilai historis tinggi.\n Borobudur Marathon menjadi salah satu etalase untuk meningkatkan promosi pariwisata di wilayah Jawa Tengah.");
    printf("Rekreasi menjadi hal penting yang akan dilakukan oleh sebagian besar peserta Borobudur Marathon. Hasil survei Litbang Kompas menunjukkan motivasi utama 9 dari 10 peserta Borobudur Marathon 2022 adalah berekreasi.\\n Jadi, pada ajang Borobudur Marathon 2023 Powered by Bank Jateng ini pun kemungkinan besar motivasi berolahraga dan bertamasya masih mendominasi sebagian besar para peserta.");
    printf("Berdasarkan sejarahnya, lomba lari Borobudur Marathon 2023 Powered by Bank Jateng sudah diselenggarakan sejak tahun 2017. Kegiatan itu merupakan bentuk kerja sama antara Pemerintah Provinsi Jawa Jateng, Bank Jateng, harian Kompas, dan Yayasan Borobudur Marathon.\n");
    printf("Gelaran Borobudur Marathon tahun ini mengusung tema ”Voice of Unity” yang diikuti oleh lebih kurang 10.000 pelari dari berbagai penjuru Indonesia. Slogan ini merefleksikan persaudaraan dan kekerabatan yang kuat antarsegenap peserta dan seluruh masyarakat yang berada di sekitar Borobudur.\n");
    printf("dari hasil survei 754 peserta Borobudur Marathon 2022 menunjukkan bahwa 90 persen peserta termotivasi untuk mempererat persaudaraan. Tidak hanya terbatas pada peserta lari saja, tetapi juga termotivasi mempererat rasa kekeluargaan dengan masyarakat di sekitar area Candi Borobudur.\n");
    printf("Atmosfer keberagaman sangat terasa dalam ajang Boroburur Maratahon 2022 yang menujukkan harmonisasi antara komunitas masyarakat perkotaan (peserta lari) dengan masyarakat perdesaan. Ditambah lagi dengan sikap ramah antarpribadi yang jamak dijumpai selama perhelatan Borobudur Marathon sehingga membuat suasana kegiatan sangat semarak dan hangat. Mayoritas responden peserta lari hingga 93,9 persen menyatakan bahwa suasana kawasan Borobudur sangat mendukung untuk berinteraksi dan bersosialisasi. Keakraban inilah yang menjadi sesuatu bernilai sangat tinggi bagi setiap individu yang terlibat interaksi itu.\n");
    printf("Interaksi sosial merupakan salah satu faktor terpenting yang menentukan tingkat kebahagiaan seseorang. Hal tersebut disampaikan oleh Robert Waldinger, seorang profesor psikiatri yang membidangi tentang kesehatan jiwa. Berdasarkan hasil penelitian jangka panjang yang sudah dilakukan sejak tahun 1938, Waldinger menyatakan, ”Barang siapa memiliki relasis sosial yang hangat akan hidup lebih panjang dan lebih bahagia, sementara penyendiri cenderung lebih cepat mati.”\n");
    printf("Saat ini, seseorang kemungkinan besar dapat hidup tanpa melakukan interaksi sosial secara fisik dalam jangka waktu yang lama. Semuanya serba termediasi atau dijembatani oleh sarana komunikasi yang canggih. Ponsel pintar, misalnya, menjadi ruang hidup atau habitat kedua manusia selain di dunia nyata. Pola hidup demikian dapat bermuara pada kondisi kesepian apabila terjadi dalam durasi panjang.\n");
    printf("Dokter Vivek Murthy dari Amerika Serikat pernah mengungkap pernyataan bahwa ”kesendirian mengancam kesehatan pada tingkat risiko yang setara dengan merokok 15 batang sehari”. Berdasarkan pernyataan tersebut, dapat dimaknai bahwa situasi kebersamaan sama-sama bermuara pada kesehatan jiwa dan raga, sama halnya dengan aktivitas olahraga itu sendiri.\n");
    printf("Dengan mengikuti ajang Borobudur Marathon itu, banyak waktu yang dapat dilalui bersama-sama setiap insan dengan orang-orang terdekatnya. Tentu saja kesempatan ini akan juga dioptimalkan untuk mengenal wilayah Borobudur ataupun Magelang lebih optimal lagi. Salah satunya dengan mencicipi aneka kuliner yang sangat beragam dan menawarkan kekhasan cita rasa setempat. Separuh dari peserta yang berasal dari luar daerah Magelang menjadikan wisata kuliner sebagai salah satu agenda utama. Selain itu, sebagian responden peserta lari juga mengagendakan untuk mengunjungi sejumlah tempat-tempat wisata.\n");
    printf("Kondisi agak berbeda terjadi pada edisi Borobudur Marathon tahun 2020 dan 2021 ketika pandemi merebak. ”Rhythm of Soul” dijadikan motto pada 2020 dan pada edisi 2021 mengusung tema ”Symphony of Energy”. Kedua tema itu berkaitan erat dengan slogan penyemangat ketika mengadapi pandemi Covid-19. Ketika pandemi mulai reda, Borobudur Marathon 2022 membawa semangat baru ”Stronger to Victory” yang kaitannya dengan spirit baru untuk membangun masa depan lebih baik setelah wabah pandemi terlewati.\n");
    printf("Pada tahun ini, Borobudur Marathon 2023 mengusung semangat ”Voice of Unity”. Hal tersebut dimaksudkan untuk mengajak para pihak yang terlibat untuk menyuarakan harapan akan kebaikan dan dalam suasana persatuan. Misi yang diusung tahun ini mencoba menggugah para peserta untuk menciptakan persahabatan dan persaudaraan, serta membangun kolaborasi dari relasi sosial untuk suatu tujuan yang lebih baik lagi.\n");
    printf("Harapannya, sepulang dari Borobudur Marathon ini, seusai berekreasi dan berolahraga, para peserta bisa membawa pulang jiwa dan raga yang sehat. Selain itu, memperoleh rasa persaudaraan yang erat untuk membangun kolaborasi demi Indonesia yang lebih baik. (LITBANG KOMPAS)\n");
}
void dosenuns()
{
    system("cls");
    printf("S U M B E R(https://soloraya.solopos.com/dosen-uns-jogging-bawa-bendera-palestina-di-boyolali-ternyata-ini-motivasinya-1797570 )");
    printf("DOSEN UNS JOGGING BAWA BENDERA PALESTINA DI BOYOLALI, TERNYATA INI MOTIVASINYA\n");
    printf("Solopos.com, BOYOLALI — Pria yang jogging sambil membawa bendera Palestina dan Indonesia dalam video yang beredar viral di Boyolali, Selasa (14/11/2023), diketahui adalah Dosen Universitas Sebelas Maret atau UNS Solo Susilo Hambeg Poromarto.\n");
    printf("Ia mengungkapkan motivasinya berlari pagi sambil membawa bendera Palestina dan Indonesia sebagai wujud keprihatinan atas apa yang terjadi di Palestina. Selain itu, ia ingin mengetuk hati masyarakat agar lebih peduli pada tragedi kemanusiaan yang terjadi di Palestina.\n");
    printf("“Setidaknya, ketika saya lari dengan membawa bendera Merah Putih dan Palestina, orang yang belum tahu itu bendera mana, terus mencari,” kata pria 62 tahun tersebut saat diwawancarai Solopos.com, Kamis (16/11/2023).\n");
    printf("Ia berharap setelah melihat video dirinya membawa bendera Palestina dan Indonesia yang viral di Boyolali itu masyarakat akan mencari dan menemukan Palestina sehingga mengetahui tragedi yang tengah terjadi di sana dan tumbuh kepedulian.\n");
    printf("Sewaktu remaja ikut karate dan suka lari untuk melatih fisik. Kemudian, waktu berkuliah di Institut Pertanian Bogor (IPB) juga suka berolahraga lari. Namun, ketika mulai mengajar sebagai dosen di UNS Solo ia lebih jarang berolahraga lari.\n");
    printf("“Kemudian pada 2006 itu saya ambil S3 di Amerika, kebetulan berat badan saya gemuk sekali, agak pusing. Terus sama dokter disuruh olahraga dan mulai 2009 sampai sekarang ya mulai lari terus, sampai sekarang saya usia 62 tahun,” kata dia.\n");
    printf("Ia mengatakan sebelum pandemi Covid-19 sering ikut lomba lari maraton 42 kilometer. Namun saat pandemi ia jarang lari dan kini setelah selesai pandemi ia mulai ikut lomba lari lagi tapi half marathon 21 kilometer.\n");
    printf("Lebih lanjut, Hambeg menjelaskan hobinya berlari sambil membawa bendera telah dimulai saat berkuliah S3 di Amerika pada 2010.Hambeg berlari membawa bendera merah putih kecil yang ia pakai di atas kepala. Hal tersebut juga sebagai wujud identitasnya sebagai warga negara Indonesia di luar negeri\n");
    printf("“Waktu itu saya di Amerika, kalau mobil tamu negara begitu kan benderanya di kanan-kiri. Dulu saya juga, benderanya di kanan-kiri kepala saya, satu bendera Amerika dan merah-putih Indonesia,” kata dia.\n");
    printf("Pelatih Master Runner Boyolali, Triyono, mengatakan Hambeg adalah sesepuh komunitas Boyolali Runner. Menurut Triyono, Hambeg sangat bersemangat dalam menjaga kesehatan dan selalu memberi motivasi anak-anak muda.\n");
    printf("“Beliau sering ikut kegiatan maraton 42 kilometer. Belum lama ini ikut di Bali, pernah ikut maraton juga di luar negeri sambil membawa bendera,” kata dia kepada Solopos.com, Kamis (16/11/2023).\n");
}

char *valnama(char *nama)
{
    char input;
    int index = 0;
    char tam[100];
    while ((input = getch()) != 13 || index < 3 || tam[index - 1] == ' ')
    {
        if (index < 30 && (input >= 'A' && input <= 'Z' && index == 0 ||
                           input >= 'A' && input <= 'Z' && tam[index - 1] == ' ' ||
                           input == ' ' && index != 0 && tam[index - 1] != ' ' ||
                           (input >= 'a' && input <= 'z') && (input != tam[index - 1] || input != tam[index - 2]) &&
                               index != 0 && tam[index - 1] != ' '))
        {
            printf("%c", input);
            tam[index] = input;
            index++;
        }
        else if (input == 8 && index != 0)
        {
            printf("\b \b");
            index--;
            tam[index] = '\0';
        }
    }
    strcpy(nama,tam);
}
void validasi_user()
{
    char inputan;
    char data1[30] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 3 || data1[index - 1] == ' ' || data1[index - 1] == '-' || data1[index - 1] == '\'')
    {
        if (index < 10 && (inputan >= 'a' && inputan <= 'z' || inputan == ' ' && index != 0 && data1[index - 1] != ' ' || inputan == '-' && index != 0 && data1[index - 1] != '-' || inputan == '\'' && index != 0 && data1[index - 1] != '\'' || (inputan >= '0' && inputan <= '9') && index != 0))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
        data1[index]='\0';
        strcpy(usr, data1);
    
}

void validasi_pass()
{
    char inputan;
    char data1[30] = {};
    int index = 0;
    while ((inputan = getch()) != 13 || index < 3 || data1[index - 1] == ' ' || data1[index - 1] == '-' || data1[index - 1] == '\'')
    {
        if (index < 7
         && (inputan >= 'a' && inputan <= 'z' || inputan >= 'A' && inputan <= 'Z' || inputan == ' ' && index != 0 && data1[index - 1] != ' ' || inputan == '-' && index != 0 && data1[index - 1] != '-' || inputan == '\'' && index != 0 && data1[index - 1] != '\'' || inputan >= '0' && inputan <= '9'))
        {
            printf("%c", inputan);
            data1[index] = inputan;
            index++;
        }
        else if (inputan == 8 && index != 0)
        {
            printf("\b \b");
            index -= 1;
            data1[index] = ' ';
        }
    }
    strcpy(pass, data1);
}
char *valAlamat(char *alamat)
{
    char alm[100] = {}, input;
    int idx = 0;
    while ((input = getch()) && input != 13 || idx < 2 || alm[idx - 1] == 32)
    {
        if (idx < 40 && (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z' || input == 32 && idx > 2 && alm[idx - 1] != 32 || input >= '0' && input <= '9' && idx >= 5 || input == '.' && alm[idx - 1] != '.' && idx > 6))
        {
            printf("%c", input);
            alm[idx] = input;
            idx++;
        }
        else if (input == 8 && idx != 0)
        {
            printf("\b \b");
            idx--;
            alm[idx] = '\0';
        }
    }
    return strcpy(alamat, alm);
}
// char* valUmur(char ur[]){
//     char umur[100] = {},input;
//     int idx = 0;
//     while((input = getch()) && input != 13 || idx < 2){
//         if(idx < 2 && (input >= '1' && input <= '9' || input == '0' && idx != 0)){
//             printf("%c",input);
//             umur[idx] = input;
//             idx++;
//         }
//         else if(input == 8 && idx != 0){
//             printf("\b \b");
//             idx--;
//             umur[idx] = '\0';
//         }
//     }
//     return strcpy(ur,umur);
//}
void user()
{
    background(8);
    setcolor(0, 15);
    bingkai(45, 17, 75, 15, 3, 15);


    bingkai(58, 23, 25, 5, 2, 15);
    gotoxy(62, 26);
    printf("1.DAFTAR : ");
    // setcolor(0, 15);
    bingkai(85, 23, 25, 5, 2, 15);
    gotoxy(89, 26); // samping atas
    printf("2.LOGIN : ");
    setcolor(0, 15);

    bingkai(69, 16, 25, 5, 2, 15);
    gotoxy(72, 19);
    printf("3. UPDATE  ");

    bingkai(70, 30, 25, 5, 3, 15);
    gotoxy(75, 33);
    printf("CETAK PILIHAN : ");
    pilih(93, 33);
    if (pilihan == 1)
    {
        daftar_akun();
    }
    else if (pilihan == 2)
    {
        login();
    }else if(pilihan == 3){
        update();
    }
}
void daftar_akun()
{
    char inp;
    char umur[100];
    char nama[30];
    system("cls");
    bingkai(0, 0, 170, 39, 3, 14);

    background(8);

    bingkai(50, 10, 45, 5, 3, 14);
    gotoxy(55, 13);
    setcolor(0, 14);
    printf("NAMA : ");
    // scanf("%s", &nama);
    valnama(nama);
    // strcat(nama, "\n");
    // FILE *fptr;
    // fptr = fopen("daftar.txt", "a");
    // fprintf(fptr, "%s", nama);
    // fclose(fptr);

    bingkai(35, 17, 25, 5, 3, 15);
    gotoxy(40, 20);
    setcolor(0, 15);
    printf("DOMISILI : ");
    gets(domisili);

    bingkai(65, 17, 25, 5, 3, 15);
    setcolor(0, 15);
    gotoxy(70, 20);
    printf("UMUR : ");
    valumur(umur);
   

    bingkai(95, 17, 25, 5, 3, 15);
    gotoxy(103, 20);
    setcolor(0, 15);
    printf("USERNAME : ");
    validasi_user();
    // strcat(usr,"\n");
    // FILE *fptr1;
    // fptr1 = fopen("username.txt", "a");
    // fprintf(fptr1, "%s", usr);
    // fclose(fptr1);

    bingkai(126, 17, 25, 5, 3, 15);
    setcolor(0, 15);
    gotoxy(133, 20);
    printf("PASSWORD : ");
    validasi_pass();
    // strcat(pass,"\n");
    // FILE *fptr2;
    // fptr2 = fopen("password.txt", "a");
    // fprintf(fptr2, "%s", pass);
    // fclose(fptr2);

    // gotoxy(16, 20);
    // valnama(nama);

    FILE *fptr2;
    fptr2 = fopen("daftar.txt", "a");
    fprintf(fptr2, "%s#%s#%s#%s#%s\n",nama,domisili,umur,usr,pass );
    fclose(fptr2);

    // gotoxy(78, 20); 
     

    // gotoxy(116, 20);
    // validasi_user();

    // gotoxy(147, 20);
    // validasi_pass();

    gotoxy(45, 35);
    printf("Tekan y/Y untuk daftar ulang,dan Tekan t/T untuk Login");
    while ((inp = getch()) != 'y' && inp != 'Y' && inp != 't' && inp != 'T')
    {
    }
    if (inp == 'y' || inp == 'Y')
    {
        gotoxy(45, 25);
        printf("                                                            ");
        daftar_akun();
    }
    else
    {
        gotoxy(45, 25);
        printf("                                                            ");
        login();
    }

    
   
} 

void tampilan_menu()
{
    system("cls");
    Sleep(300);
    setcolor(5, 13);
    gotoxy(65, 3);
    printf("	  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 4);
    printf("      %c%c				         %c%c", 219, 219, 219, 219);
    gotoxy(65, 5);
    printf("    %c%c%c%c                                       %c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 6);
    printf("      %c%c                                       %c%c", 219, 219, 219, 219);
    gotoxy(65, 7);
    printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

    gotoxy(65, 10);
    printf("	  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 11);
    printf("      %c%c				         %c%c", 219, 219, 219, 219);
    gotoxy(65, 12);
    printf("    %c%c%c%c                                       %c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 13);
    printf("      %c%c                                       %c%c", 219, 219, 219, 219);
    gotoxy(65, 14);
    printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

    gotoxy(65, 17);
    printf("	  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 18);
    printf("      %c%c				         %c%c", 219, 219, 219, 219);
    gotoxy(65, 19);
    printf("    %c%c%c%c                                       %c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 20);
    printf("      %c%c                                       %c%c", 219, 219, 219, 219);
    gotoxy(65, 21);
    printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);

    gotoxy(65, 24);
    printf("	  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 25);
    printf("      %c%c				         %c%c", 219, 219, 219, 219);
    gotoxy(65, 26);
    printf("    %c%c%c%c                                       %c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    gotoxy(65, 27);
    printf("      %c%c                                       %c%c", 219, 219, 219, 219);
    gotoxy(65, 28);
    printf("        %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
}
void menu()
{
    char inp;
    tampilan_menu();
    setcolor(1, 3);
    gotoxy(75, 5);
    printf("1 . I N F O R M A T I O N");
    gotoxy(75, 12);
    printf("2 . E X P L O R");
    gotoxy(75, 19);
    printf("3 . D A F T A R M E M B E R");
    gotoxy(75, 26);
    printf("4 . H A P U S   A K U N");
    bingkai(75, 32, 27, 5, 3, 15);
    gotoxy(80, 35);
    printf("P I L I H : ");
    inp = getch();
    // pilihan = atoi(inp);
    if (inp == '1')
    {
        informasi();
    }
    else if (inp == '2')
    {
        explor();
    }
    else if (inp == '3')
    {
        menu_daftarmember();
    }else if (inp == '4'){
        delate();
    }
    getch();
}


void daftar_member()
{
    char nama[50];
    char pace[30];
    char umur[30];
    char inp;

    system("cls");
    bingkai(53, 5, 50, 25, 0, 15);

    gotoxy(62,7);
    printf("D     A     F     T     A     R");
    gotoxy(65,8);
    printf("M     E     M     B     E     R");

    gotoxy(58, 10);
    printf(" NAMA : ");
    valnama(nama);
    // gets(nama);



    gotoxy(58,13);
    printf(" UMUR : ");
    valumur(umur);
    // scanf("%d",&umur);

    gotoxy(58,16);
    printf(" K.PACE (1-10) : ");
    valpace(pace);
    // scanf("%d",&pace);

    

    gotoxy(58,19);
    printf(" PENDIDIKAN : ");

    gotoxy(60,20);
    printf("1. SD");
    gotoxy(60,21);
    printf("2. SMP");
    gotoxy(60,22);
    printf("3. SMA");
    gotoxy(60,23);
    printf("4. KULIAH");
    gotoxy(60,24);
    printf("5. LAINNYA");
    gotoxy(58,26);
    printf("CETAK PILIHAN : ");
    
    pilih(74,26);

    FILE *fptr;
    fptr = fopen("cardmember.txt", "a");
    fprintf(fptr, "%s#%s#%s\n", nama,umur,pace);
    fclose(fptr);

    gotoxy(45, 32);
        
        setcolor(0, 15);
        Sleep(1000);
        gotoxy(45, 35);
        printf("Tekan y/Y untuk cetak card,dan Tekan t/T untuk kembali menu ");
        while ((inp = getch()) != 'y' && inp != 'Y' && inp != 't' && inp != 'T')
        {
        }
        if (inp == 'y' || inp == 'Y')
        {
            gotoxy(45, 25);
            printf("                                                            ");
            card();
        }
        else
        {
            gotoxy(45, 25);
            printf("                                                            ");
            menu();;
        }
    
}


void card(){ 
    
    char nama_tamp[30];
    char umur_tamp2[30];
    char pace_tamp[30];
    char pendidikan_tamp[30];
    int umur_cari;
    int i=0;

    int a=0;

    system("cls");
    bingkai(53, 5, 50, 25, 0, 15);

    // gotoxy(58,10);
    // printf("masukkan nama      :");gets(nama);
    // gotoxy(58,12);
    // printf("masukkan pendidikn :");gets(pend);
    // gotoxy(58,14);
    // printf("masukkan umur      :");scanf("%d",&umur);getchar();
    // gotoxy(58,16);
    // printf("masukkan pace      :");scanf("%d",&pace);

    // FILE*hub=fopen("cardmember.txt","a");
    // fprintf(hub,"%s#%d#%d#%s\n",nama,umur,pace,pend);
    // fclose(hub);

    bingkai(0,0, 131,37, 6, 14);

    bingkai(42, 5, 50, 25, 0, 15);

    FILE *baca=fopen("daftar.txt","r");
             while(fscanf(baca,"%[^#]#%[^#]#%[^#]#%[^#]#%[^\n]\n",&tamp_nama[i],&domisili_tamp[i],&buffumur[i],&username_tamp[i],&password_tamp[i])!=EOF){  
                
                 i++;
             }
             fclose(baca);

gotoxy(47,21);setcolor(0,15);printf("[ENTER] UNTUK KEMBALI");
    gotoxy(47,9);setcolor(0,15);printf("CARD MEMBER");

FILE *open=fopen("cardmember.txt","r");
    while(fscanf(open,"%[^#]#%[^#]#%[^#]#%[^\n]\n",nama_tamp,umur_tamp2,pace_tamp,pendidikan_tamp)!=EOF){
gotoxy(47,12);setcolor(0,15);printf("NAMA         : %s",nama_tamp);
    gotoxy(47,13+a);setcolor(0,15);printf("UMUR         : %s",umur_tamp2);
    gotoxy(47,14+a);setcolor(0,15);printf("PACE         : %s",pace_tamp);
    gotoxy(47,15+a);setcolor(0,15);printf("PENDIDIKAN   : %s",pendidikan_tamp);
a++;
    }
    
    // gotoxy(47,12);setcolor(0,15);printf("NAMA         : %s",nama);
    // gotoxy(47,13);setcolor(0,15);printf("UMUR         : %d",umur);
    // gotoxy(47,14);setcolor(0,15);printf("PACE         : %d",pace);
    // gotoxy(47,15);setcolor(0,15);printf("PENDIDIKAN   : %s",pend);

    char choose;


    while ((choose=getch())!=13){
     }
     
     menu();
   

}

// void cetak_kartu(){
//     printf("C A R D  M E M B E R");
//     printf("NAMA :")
//}
void menu_daftarmember(){
    char inp;
    system("cls");
    bingkai(65, 8, 25, 5, 3, 15);
    gotoxy(66, 10);
    printf("1.LIHAT CARD MEMBER");

    bingkai(65, 14, 25, 5, 3, 15);
    gotoxy(66, 16);
    printf("2.MEMBUAT CARD MEMBER");

    bingkai(65, 20, 25, 5, 2, 15);
    gotoxy(70, 23);
    printf("PILIH : ");
    inp = getch();
    if (inp == '1' )
        {
            gotoxy(45, 25);
            printf("                                                            ");
            card();
        }
        else if(inp == '2')
        {
            gotoxy(45, 25);
            printf("                                                            ");
            daftar_member();;
        }
}
void login()
{
    char inp;
    background(13);

    system("cls");

    bingkai(35, 17, 25, 5, 3, 15);
    gotoxy(40, 20);
    setcolor(3, 15);
    printf("username : ");
    // gets(usr);
    bingkai(65, 17, 25, 5, 3, 15);
    gotoxy(69, 20);
    setcolor(3, 15);
    printf("password : ");
    // gets(pass);

    gotoxy(51, 20);
    printf(" ");
    validasi_user();
    printf("");
    gotoxy(80, 20);
    validasi_pass();
    
    char nama[30];
    char domisili[30];
    char umur[5];
    char username[30];
    char password[30];
    int cek=0;
    FILE *file;
    file = fopen("daftar.txt","r");
    while(fscanf(file,"%[^#]#%[^#]#%[^#]#%[^#]#%[^\n]\n",&nama,&domisili,&umur,&username,&password)!=EOF){
        if (strcmp(usr, username) == 0 && strcmp(pass, password) == 0)
        {
        cek = 1;
        // break;
        }
    }


    // if ((strcmp(usr, buff1) == 0 && strcmp(pass, buff2) == 0))
    // {
        if(cek == 1){
        gotoxy(40, 32);
        setcolor(0, 7);
        printf("Berhasil Login");
        Sleep(2000);
        menu();
    }
    else
    {
        gotoxy(45, 32);
        printf("GAGAL LOGIN");
        setcolor(0, 15);
        Sleep(1000);
        gotoxy(45, 35);
        printf("Tekan y/Y untuk Registrasi,dan Tekan t/T untuk kembali Login");
        while ((inp = getch()) != 'y' && inp != 'Y' && inp != 't' && inp != 'T')
        {
        }
        if (inp == 'y' || inp == 'Y')
        {
            gotoxy(45, 25);
            printf("                                                            ");
            daftar_akun();
        }
        else
        {
            gotoxy(45, 25);
            printf("                                                            ");
            login();
        }
    }
    // setcolor(3, 15);
    // bingkai(0, 0, 170, 40, 3, 15);
}

void delate(){
    char nama[30][100];
    char domisili[30][100];
    char umur[100][100];
    char username[30][100];
    char username_tamp[30];
    char password[30];

    char tamp1[100],tamp2[100],tamp4[100],tamp5[100];
    int tamp3;
    system("cls");
    bingkai(53, 5, 50, 25, 0, 15);

    char cari_user[100],cari_pass[100];

    

    gotoxy(60,10);
    printf("masukan username yang mau di hapus : ");gets(cari_user);
    // printf("masukan password yang mau di hapus : ");gets(cari_pass);


    int dex=-1;
    int i=0;
    
    FILE*hubung6=fopen("daftar.txt","r");
    while(fscanf(hubung6,"%[^#]#%[^#]#%d#%[^#]#%[^\n]\n",&nama[i],&domisili[i],&umur[i],&usr[i],&pass[i])!=EOF){
        if (strcmp(cari_user,usr[i])==0 ){  
            dex=i;
        }
        i++;

    }

        if(dex==-1){
            gotoxy(60,11);
            printf("data  tidak di temukan !!");
        }
        else{

           FILE*hubung5=fopen("daftar.txt","w");
           for(int j=0;j<i;j++){
            if(dex!=j){
               fprintf(hubung5,"%s#%s#%s#%s#%s\n",nama[j],domisili[j],umur[j],usr[j],pass[j]);
            }
           }
           fclose(hubung5);


          printf("data berhasil di hapus ");


        
        }





    
    

}
void update(){
    system("cls");
    
    int i=0;
printf("masukan username yang akan di update :"); gets(usr);

     FILE *update=fopen("daftar.txt","r");
             while(fscanf(update,"%[^#]#%[^#]#%[^#]#%[^#]#%[^\n]\n",&tamp_nama[i],&domisili_tamp[i],&buffumur[i],&username_tamp[i],&password_tamp[i])!=EOF){  
                if(strcmp(usr,username_tamp[i])==0){
                    printf("masukan username baru : "); gets(username_baru);
                    strcpy(username_tamp[i],username_baru);
                 }
                 i++;
             }
             int pjg=i;
             fclose(update);
FILE *file= fopen("daftar.txt","w");

        for(int j=0;j<pjg;j++){
            fprintf(file,"%s#%s#%s#%s#%s\n",tamp_nama[j],domisili_tamp[j],buffumur[j],username_tamp[j],password_tamp[j]);
        }
        fclose(file);
        daftar_akun();

   
}




void main(){

    // system("mode con cols=170 lines=42");
    background(8);
    
     lari();
    // card();
    //   daftar_akun();
    user();
    // daftar_member();
    // explor();
    //  menu();
    //  card();
    // login();
    // delate();
    // update();
}

