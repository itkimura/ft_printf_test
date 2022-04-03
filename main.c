int			ft_printf(const char *format, ...);

#include <stdio.h>
#include <limits.h>
#include <float.h>

#ifdef FT_PRINTF
#define F(...) \
	res = ft_printf(__VA_ARGS__); \
	printf("res: %d\n", res);
#else
#define F(...) \
	res = printf(__VA_ARGS__); \
	printf("res: %d\n", res);
#endif

int	main()
{
	int	res;
	int	i = 42;

	setvbuf(stdout, 0, _IONBF, 0);
//	printf("====%%p====\n");
//	ft_printf("ft_printf\t[%p]\n", &i);
//	int main ()
	F("[%f]", 9.9999997);
	F("[%f]", 2.5555505f);;
	F("[%10Lf]", ULONG_MAX);;
/*
	F("[%10.f]", -0.500000);
	F("[%.5hho]", 0);
	F("[%5.5hho]", 0);
	F("011.[%#02.8o]", 000000052);
	F("011.[%#04o]", 42);
    F("009:[%#08o]", 42);
    F("019:[%#-08o]", 42);
    F("001.[% 8i]", 42);
    F("002.[% -8i]", 42);
    F("003.[%+i]", 42);
    F("004.[ %c]", 0);
    F("005.[%03d]", 0);
    F("006:[%010.5d]", -216);
    F("007:[%#2.8x]", 34);
    F("008:[%#02.8x]", 42);
    F("010:[%#08.5x]", 42);
    F("011:[%#8.5x]", 42);
    F("012:[% 0i]", 0);
    F("013:[% 0i]", 42);
    F("014:[% 08i]", 42);
    F("015:[%.s]", 0, "hello");
    F("016:[%.0s]", "hello");
    F("017:[%.s]", -5, "42");
    F("018:[%-5.s]","42");
    F("020:[%#08.2o]", 42);
    F("021:[%#08d]", 0);
	F("[%f]", -10.25);
	F("[%.10lf]", 2.3);
	F("[%.f]", -3.500000);
	F("[%lf]", 3.55);
	F("[%lf]", 99.9999);
	F("[%f]", -1444565444646.6465424242242454654);
	F("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
	F("011.[%f]", 999.999999);
	F("011.[%0#10.1f]", 0.250000);
	F("011.[%.1f]", 0.250000);
	F("011.[%.1f]", 2.5);
	F("011.[%.15f]", 0.15);
	F("011.[%.0f]", 3.5);
	F("011.[%.2f]", 0.005);
	F("011.[%.3f]", 0.0005);
	F("011.[%.15f]", -0.0005);
	F("011.[%#02.8o]", 000000052);
	F("011.[%lf]", -0.0005);
	F("011.[%.3f]", -0.0005);
	F("011.[%10.1f]", 0.25);
	F("011.[%+010.10f]", 0.011719);
	F("011.[%.15f]", 0.0005);
	F("011.[%lf]", -0.0005);
	F("[%f]", 0.5);
	F("[%f]", 0.25);
	F("011.[%+010f]", 3.0/256);
	F("[%f]", 42.42);
	F("012.[%#010f]", 0.0);
	F("001.[%+010f]",-0.0);
	F("002.[%#+010f]",-0.0);
	F("003.[%#f]",-0.0);
	F("004.[%.f]",-0.0);
	F("005.[%0 10f]",-0.0);
	F("006.[%0 10f]",0.0);
	F("007.[%0#10.1f]",-0.0);
	F("008.[%#.f %#.0f %#.15Lf]",-0.0, -0.0, -0.0);
	F("009.[%+010f]", 0.0);
	F("010.[%#010f]", 0.0);
//	printf("printf\t\t[%p]\n", &i);X
F("f conversion: %f\n", 99.9999997);
	F("f conversion: %f\n", 2.3);
	F("f conversion: %f\n", 1.2);
	F("f conversion: %f\n", -42.42);
	F("f conversion: %f\n", 9.999999);
	F("f conversion: %f\n", 9.9999999);
	F("f conversion: %f\n", 3.55);
	F("f conversion: %f\n", 3.55 / 1.5);
	F("f conversion: %f\n", 2.5555505f);
	F("f conversion: %f\n", 2.5555515f);
	F("f conversion: %f\n", 2.5555525f);
	F("f conversion: %f\n", 2.5555535f);
	F("f conversion: %f\n", 2.5555545f);
	F("f conversion: %f\n", 2.5555555f);
	F("f conversion: %f\n", 2.5555565f);
	F("f conversion: %f\n", 2.5555534f);
	F("f conversion: %f\n", 2.5555544f);
	F("f conversion: %f\n", 2.5555554f);
	F("f conversion: %f\n", 2.5555564f);
	F("f conversion: %f\n", 2.5555536f);
	F("f conversion: %f\n", 2.5555546f);
	F("f conversion: %f\n", 2.5555556f);
	F("f conversion: %f\n", 2.5555566f);
	F("005.[%.10f]", -0.422222);
	F("001.[%f]", 1444565444646.6465424242242);
	F("002.[%f]", 2147483648.00);
	F("003.[%f]", 4294967296.00);
	F("004.[%20.10f]", 1444565444646.0);
	F("007.[%.10f]", 42.12345678);
	F("008.[%-020.3f]", -42.42);
	F("009.[%.10f]", 42.1205);
	F("010.[%.10f]", 42.1205);
	F("011.[%.*f]", -1, 0.25);
	F("012.[%f]", -1234.0);
	F("013.[%f]", -42.0);
	F("014.[%f]", 42.0);
	F("015.[%f]", 42.42);
	F("016.[%f]", -42.0);
	F("017.[%.20f]", 42.42);
	F("018.[%f]", -0.0);
	F("019.[%f]", 0.0);
	F("020.[%f]", -42.2);
	F("021.[%lf]", -42.2);
	F("022.[%f]", 255.2);
	printf("====part 1====\n");
	F("001.[%#-1.0x]", 0);
	F("002.[%#-1.0u]", 0);
	F("003.[%#.o %#.0o]", 0, 0);
	F("004.[%.o]", 0);
	F("005.[%.x %.0x]", 0, 0);
	F("006.[%#.x]", 0);
	F("007.[%#.X]", 0);
	F("008.[%#o]", 0);
	F("009.[%#o]", 0);
	F("010.[%#.3o]", 1);
	F("011.[%o]", 0);
	F("012.[%05o]", 42);
	F("013.[%#-1.0X]", 0);
	F("014.[%#08.2o]", 52);
	F("015.[%08.2o]", 52);
	F("016.[%#8d]", 42);
	F("017.[% -1.0d, % -1.0i]", 0, 0);
	F("018.[%#-1.0o]", 0);
	printf("====part 2====\n");
	F("001.[%#08.2x]", 52);
	F("002.[%#08.x]", 52);
	F("003.[%08.2x]", 52);
	F("004.[%*p]", 10, 0);
	F("005.[% u]", 4294967295);
	F("006.[%#+08x]", 42);
	F("007.[%#+08X]", 42);
	F("069.[%08.X]", 42);
	F("069.[%015.p]", 42);
	F("008.[% d]", 42);
	F("009.[%-010.5d]", 42);
	F("083.[%0#+            10d]\t\t\t", -42);
	F("001.[%hd]", 32767);
	F("002[%010d]", -42);
	F("014.[%*3d]", 5, 0)
	F("015.[%#.o, %#.0o]", 0, 0);
	F("016.[%#X]", 0); 
	F("017.[%.d, %.0d]", 0, 0);
	F("012.[%#o]", 0);
	F("013.[%#.3o]", 1);
	F("015.[%d]", NULL)
	F("016.[%o, %ho, %hho]", -42, -42, -42);
	F("017.[% i]", 9999);
	F("019.[%#6o]", 2500);
	F("020.[%#.o %#.0o]", 0, 0);
	F("025.[% .3d]", 5, 0);
	F("026.[%    53d]", 5, 0);
	F("027.[%#.3o]", 1);
	F("028.[%*.*d]", 0, 3, 0);
	F("029.[% 03d]", 0);
	F("030.[%5p]", 0);
	F("032.[%10.5d]", 42);
	F("034.[%#o]", 0);
	F("035.[%hd]", -42);
	F("036.[%lld]", 32768);
	F("037.[%hhd]", -129);
	F("038.[% ]");
	F("039.[%hhx]", 128);
	F("040.[%-5%]");
	F("041.[%03.2d]", 1);
	F("042.[%03.2d]", -1);
	F("043.[%3.2d]", -1);
	F("044.[%010.2d]", 1);
	F("047.[%hd]", 32768);
	F("048.[%10hhd]", -129);
	F("049.[%hd]", 32767);
	F("050.[%hhd]", 128);
	F("051.[%hhd]", -128);
	F("052.[%d]", 2147483647);
	F("053.[%hhd]", 128);
	F("054.[% d]\t", -42);
	F("055.[% d]\t", 42);
	F("056.[% 10.3d]\t", 0);
	F("057.[%#.x %#.0x]", 0, 0);
	F("058.[%d]", -1);
	F("059.[%o]", 40);
	F("060.[%#6o]", 2500);
	F("061.[%+d]", 0);
	F("062.[%hd]", 32768);
	F("063.[%hhd]", 128);
	F("064.[%10.5ho]", 4294967296);
	F("065.[%10.5ho]", 4294967296);
	F("066.[%############x]", 42);
	F("067.[%#x]", 0);
	F("068.[%s %s]\t", "this", "is");
	F("070.[%s %s %s]\t", "this", "is", "a");
	F("071.[%lx]\t\t", 4294967296);
	F("072.[%llX]\t\t", 4294967296);
	F("073.[%X]", 4294967296);
	F("074.[%x]", -42);
	F("075.[%#x]\t\t\t", 42);
	F("076.[%d]\t\t\t", 42);
	F("077.[%5%]");
	F("078.[%5%]\t\t\t", 42);
	F("079.[%#d]\t\t\t", 42);
	F("080.[%#p]\t\t\t", 42);
	F("081.[foo%%s]\t\t\t");
	F("082.[Hello World%%s]\t\t");
	F("084.[%+00000010d]\t\t\t", 42);
	F("085.[%--+--+10d]\t\t\t", 42);
	F("086.[%----+--10d]\t\t\t", 42);
	F("087.[%]");
	F("088.[%x]\t\t\t", 4294967295);
	F("089.[%s]", "")
	F("090.[%p]", LONG_MIN);
	F("100.[%p]", ULONG_MAX);
	F("101.[%u]", -1);
	F("102.[%p]", -42);
	F("103.[%p]", LONG_MAX);
	F("104.[%p]", -ULONG_MAX);
	F("105.[%- -- - + --   10.4d]\t\t\t", 42);
	F("106.[%s ]", "");
	F("====d====\n")
	F("01.[%d]\t\t\t", 123);
	F("02.[%d]\t\t\t", -123);
	F("03.[%d]\t\t", -2147483648);
	F("04.[%d]\t\t\t", 2147483647);
	F("05.[%.0d]\t\t", -2147483648);
	F("08.[%.20d]\t", -214);
	F("09.[%.d]\t\t", -2147483648);
	F("10.[%10.d]\t\t", -2147483648);
	F("11.[%20.d]\t", -2147483648);
	F("12.[%0.0d]\t\t", -2147483648);
	F("13.[%5.0d]\t\t", -2147483648);
	F("14.[%10.0d]\t\t", -2147483648);
	F("15.[%20.0d]\t", -2147483648);
	F("16.[%0.0d]\t\t", -2147483648);
	F("17.[%0.5d]\t\t", -2147483648);
	F("18.[%0.10d]\t\t", -2147483648);
	F("19.[%0.20d]\t", -2147483648);
	F("20.[%5.0d]\t\t", -2147483648);
	F("21.[%5.5d]\t\t", -2147483648);
	F("22.[%5.10d]\t\t", -2147483648);
	F("23.[%5.20d]\t", -2147483648);
	F("24.[%10.0d]\t\t", -2147483648);
	F("25.[%10.5d]\t\t", -2147483648);
	F("26.[%10.10d]\t\t", -2147483648);
	F("27.[%10.20d]\t", -2147483648);
	F("28.[%20.0d]\t", -2147483648);
	F("29.[%20.5d]\t", -2147483648);
	F("30.[%20.10d]\t", -2147483648);
	F("31.[%20.20d]\t", -2147483648);
	F("32.[%10d]\t\t\t", 0);
	F("33.[%10.d]\t\t\t", 0);
	F("34.[%10.0d]\t\t\t", 0);
	F("35.[%.0d]\t\t\t\t", 0);
	F("36.[%10.0d]\t\t\t", 10);
	F("37.[%.0d]\t\t\t", -120);
	F("38.[%.20d]\t", -2147483648);
	//%s
	printf("====s====\n");
	F("01.[%010.2s]\t\t\t", "Hello world");
	F("03.[%015.2s]\t\t\t", "hoge");
	F("04.[%3.10s]\t\t\t", "hoge");
	F("05.[%-010.10s]\t\t\t", "hoge");
	F("06.[%+10.0s]\t\t\t", "hoge");
	F("07.[%s]\t\t\t\t", "");
	F("08.[%10.2s]\t\t\t", NULL);
	F("09.[%3.2s]\t\t\t", NULL);
	F("10.[%+3.10s]\t\t\t", NULL);
	F("11.[%-3.10s]\t\t\t", NULL);
	F("12.[%+10.0s]\t\t\t", NULL);
	printf("====c====\n");
	F("01.[%c]\t\t\t\t", 'h');
	F("02.[%-10.2c]\t\t\t", 'h');
	F("03.[%05.2c]\t\t\t", 'h');
	F("04.[%3.10c]\t\t\t", 'h');
	F("05.[%-0.10c]\t\t\t\t", 'h');
	F("06.[%+10.0c]\t\t\t", 'h');
	F("07.[%c]\t\t\t\t", 0);
	F("08.[%10.2c]\t\t", NULL);
	F("09.[%3.2c]\t\t\t", NULL);
	F("10.[%+3.10c]\t\t\t", NULL);
	F("11.[%-3.10c]\t\t\t", NULL);
	F("12.[%+10.0c]\t\t", NULL);
	printf("====x====\n");
	F("01.[%x]\t\t\t\t", 123);
	F("02.[%x]\t\t\t", -123);
	F("03.[%x]\t\t\t", -2147483648);
	F("04.[%x]\t\t\t", 2147483647);
	F("05.[%.0x]\t\t\t", -2147483648);
	F("06.[%.5x]\t\t\t", -2147483648);
	F("07.[%.10x]\t\t\t", -2147483648);
	F("08.[%.20x]\t", -2147483648);
	F("09.[%.x]\t\t\t", -2147483648);
	F("10.[%10.x]\t\t\t", -2147483648);
	F("11.[%20.x]\t", -2147483648);
	F("12.[%0.0x]\t\t\t", -2147483648);
	F("13.[%5.0x]\t\t\t", -2147483648);
	F("14.[%10.0x]\t\t\t", -2147483648);
	F("15.[%20.0x]\t", -2147483648);
	F("16.[%0.0x]\t\t\t", -2147483648);
	F("17.[%0.5x]\t\t\t", -2147483648);
	F("18.[%0.10x]\t\t\t", -2147483648);
	F("19.[%0.20x]\t", -2147483648);
	F("20.[%5.0x]\t\t\t", -2147483648);
	F("21.[%5.5x]\t\t\t", -2147483648);
	F("22.[%5.10x]\t\t\t", -2147483648);
	F("23.[%5.20x]\t", -2147483648);
	F("24.[%10.0x]\t\t\t", -2147483648);
	F("25.[%10.5x]\t\t\t", -2147483648);
	F("26.[%10.10x]\t\t\t", -2147483648);
	F("27.[%10.20x]\t", -2147483648);
	F("28.[%20.0x]\t", -2147483648);
	F("29.[%20.5x]\t", -2147483648);
	F("30.[%20.10x]\t", -2147483648);
	F("31.[%20.20x]\t", -2147483648);
	F("32.[%.0x]\t\t\t", -1234);
	F("33.[%.5x]\t\t\t", -1234);
	F("34.[%.10x]\t\t\t", -1234);
	F("35.[%.20x]\t", -1234);
	F("36.[%.x]\t\t\t", -1234);
	F("37.[%10.x]\t\t\t", -1234);
	F("38.[%20.x]\t", -1234);
	F("39.[%0.0x]\t\t\t", -1234);
	F("40.[%5.0x]\t\t\t", -1234);
	F("41.[%10.0x]\t\t\t", -1234);
	F("42.[%20.0x]\t", -1234);
	F("43.[%0.0x]\t\t\t", -1234);
	F("44.[%0.5x]\t\t\t", -1234);
	F("45.[%0.10x]\t\t\t", -1234);
	F("46.[%0.20x]\t", -1234);
	F("47.[%5.0x]\t\t\t", -1234);
	F("48.[%5.5x]\t\t\t", -1234);
	F("49.[%5.10x]\t\t\t", -1234);
	F("50.[%5.20x]\t", -1234);
	F("51.[%10.0x]\t\t\t", -1234);
	F("52.[%10.5x]\t\t\t", -1234);
	F("53.[%10.10x]\t\t\t", -1234);
	F("54.[%10.20x]\t", -1234);
	F("55.[%20.0x]\t", -1234);
	F("56.[%20.5x]\t", -1234);
	F("57.[%20.10x]\t", -1234);
	F("58.[%20.20x]\t", -1234);
	F("59.[%10x]\t\t\t", 0);
	F("60.[%10.x]\t\t\t", 0);
	F("61.[%10.0x]\t\t\t", 0);
	F("62.[%.0x]\t\t\t\t", 0);
	F("63.[%10.0x]\t\t\t", 10);
	F("64.[%.0x]\t\t\t", -120);
//total
	printf("====All====\n");
	F("%s, %s, %d\t\t\t", "hoge", "fuga", 10);
	*/
	return(0);
}
