int main() 
{    
    char ch;
    char s;
    char sen;
    scanf("%c",&ch);
    scanf("%c",&s);
    printf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("\n");
    
    printf("%c\n", ch);
    printf("%c\n",s);
    printf("%c\n", sen);
    
    printf("C\nLanguage\nWelcome to c! !");
    return 0;
}
