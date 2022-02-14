#include <locale>
#include <cstdio>

int main()
{
        setlocale(LC_ALL, "en_UA.utf8");
        struct lconv *obj = localeconv();
        printf("Currency: %s\n", obj->currency_symbol);
        return 0;
}

