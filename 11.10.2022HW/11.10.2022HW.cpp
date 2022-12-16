#include <iostream>
#include <cmath>

using namespace std;

//16 week
//1
/*void words_replace(string& str, string& word1, string& word2) {
    str = regex_replace(str, regex(word1), word2);//в str вместо word1 ставит word2
}
int main() {
    string str{ "To he or not to he?" };
    cout << str << '\n';
    string word1{ "he" };
    string word2{ "be" };
    words_replace(str, word1, word2);
    cout << str << '\n';
}*/

//2
/*char* f(char* str) {
    for (int i = 0; i <= strlen(str); i++){
        if (islower(str[0])) {//Если первый символ строчный, то меняем его на заглавный.
            str[0] = toupper(str[0]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?'){//Ищем конец предложения
            int k = i + 1; //Переменая для значения символова, которому будем менять регистр
            while (str[k] == ' '){//Выполняем цикл до тех пор пока не найдём начало нового предложения, так как пробле может быть не один, а несколько.
                k++;
            }
            if (islower(str[k])){//Если символ строчный, то меняем его на заглавный.
                str[k] = toupper(str[k]);
            }
        }
    }
    return str;
}
int main() {
    char str[12] = "hello.world";
    cout<<f(str);
}*/

//3
//не понял как

//4
/*int digit(char* str) {
    int digit = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i]))digit++;
    }
    return digit;
}
int main() {
    char str[10] = "f2f924jm1";
    cout<<digit(str);
}*/
