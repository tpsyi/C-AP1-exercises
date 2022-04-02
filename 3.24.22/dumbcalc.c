// write expression -> calculation
#include <string.h>
// ( 4 + 5 ) * 6 = so for every ( start loop. still no operator precedence
// 6 + 5 * ( 3 - 4 ) * 8 - 7 so scan expression for parenthesi first then search for * and modify operator to the right or smt etc etc
//search probly using strchr
// regex needed prob


void dumbcalc(){
    char expression[100];
    printf("This is a simple <intuitive> \"calculator\". You can type in expression separated by spaces (*works even without spaces for some reason, dont forget = tho) [e.g. \"5 + 4 * 9 =\"], but it won't consider parenthesis and order of operation. So kind of useless.\n");
    printf("Type in an expression : ");
    scanf("%[^\n]s", expression);
//    printf("%s", strstr(expression, "("));
//    printf("%c", *strchr(expression, '('));
    int result = -1;
    int new_digit; char new_operator, last_operator;
    sscanf(expression, "%d %c %[^\n]s", &result, &new_operator, expression);
    if (result == -1 || !(new_operator == '+'||new_operator == '-'||new_operator == '*'||new_operator == '/'||new_operator == '^')){printf("Wrong format/something went wrong in general.");return;}
    while(5==5){
        last_operator = new_operator;
        sscanf(expression, "%d %c %[^\n]s", &new_digit, &new_operator, expression);
        int factor = result;
        switch (last_operator){
            case '+':
                result += new_digit;break;
            case '-':
                result -= new_digit;break;
            case '*':
                result *= new_digit;break;
            case '/':
                result /= new_digit;break;
            case '^':
                for (int i = 1; i < new_digit; i++){result*=factor;};break;
        }
        printf("\n>result : %d", result);
        if (new_operator == '='){printf("\nFINISHED");break;}
        }
    printf("\n\n\n RESULT IS ...................%d", result);
}
//void dumbcalc(){
//    char expression[100], test;
//    printf("This is a simple <intuitive> calculator. You can type in expression separated by spaces [e.g. \"5 + 4 * 9 =\"], but it won't consider parenthesis and order of operation. So kind of useless.\n");
////    scanf("%c", &test);
//    printf("Type in an expression :");
//    scanf("%s", expression);
//    int result = -1;
//    int new_digit; char new_operator[1], last_operator[1];
////    printf("%c", test);
//    sscanf(expression, "%d %1s %s", &result, new_operator, expression);
//    printf("\n result : %d", result);
//    printf("\nnew operator: %s", new_operator);
//    printf("\nexpression : %s", expression);
//    while(5==5){
//        strcpy(last_operator, new_operator);
//        sscanf(expression, "%d %1s %s", &new_digit, new_operator, expression);
////    printf("\nexpression : %s", expression);
////        printf("\nnew operator:%c", new_operator);
//        if (new_operator == "="){printf("\nFINISHED");break;}else{
//            switch (last_operator[0]){
//                case '+':
//                    result += new_digit;break;
//                case '-':
//                    result -= new_digit;break;
//                case '*':
//                    result *= new_digit;break;
//                case '/':
//                    result /= new_digit;break;
//            }
//        }
//    }
//    printf("\n\n\n RESULT IS ...................%d", result);
//char a[5], b[5], c[5];int d, d1, d2; char o, o1, o2;
//sscanf("4 + 5", "%d %c %s", &d, &o, a);
//printf("%d...%c...%s...", d, o, a);
//}
