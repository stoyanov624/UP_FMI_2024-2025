# Практикум 9

## Какво разгледахме предния път?

- многомерни масиви

## Какво ще научим днес?

- динамична памет
- указатели и референции (интро)

## Указатели и референции. Динамична памет

Оператор **&**

- Приема променлива от тип Т.

- Връща указател от тип T\*.

```c++
  int number = 10;
  int* ptr = &number;
```

Оператор<b> \* </b> (дерефериране)

- Приема указaтел от тип Т\*
- Връща променлива от тип Т

```c++
  int number = 10;
  int* ptr = &number;
  int result = *ptr;
  cout << result; //10
```

Разлика между указател и референция?

- Указателят може да се "re-assign"-ва. Може да приема нови стойност
- Референцията трябва да се инициализира при създаването.
- Указателят има неутрална стойност (nullptr), а референцията няма.
- Може да се направи масив от указатели, но не и масив от референции.

## Динамична памет

**Stack**

- паметта се заделя ПРЕДИ да се компилира програмата.
- паметта се освобождава/трие/маркира като свободна автоматично - при излизането от scope-а, в който е дефинирана.

Искаме памет по време на изпълнението на програмта?

**Heap**

- Масиви и обекти без предварително да е известна големината.

Оператор **new**

- Връща указтел към началото на паметта

```c++
new int[n];  n НЕ е задължително да е константа!
```

Заделянето на динамична памет е много "бавна" операция!!

Динамична памет НЕ се трие автоматично.

Оператор delete[] - освобождава/маркира като свободна динамична памет!

```c++
void f()
{
  int x = 40;
  char ch[2] = {'a', 'b'};
  int* ptr = new int[3];
}
```

![enter image description here](https://i.ibb.co/vYdR6Zj/dyn-mem.png)

След приключването на функцията ще се изчисти паметта в стека, но НЕ и паметта в heap-а.

За това ние трябва ръчно да я маркираме като свободна.

```c++
void f()
{
  int x = 40;
  char ch[2] = {'a', 'b'};
  int* ptr = new int[3];
  delete[] ptr; //!!!!!!!
}
```

```c++
При вход 3 отпечатайте:
  *
 #*#
##*##
 1 2
 4 3
```
