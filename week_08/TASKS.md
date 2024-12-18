# Tasks - Week 8

В следващите задачи под създаване на масив с n елемента, където n е число, въведено от потребител, ще разбираме предварително създаване на масив с достатъчен брой елементи, след което прочитане на числото и напред в програмата използване първите n на брой елемента от вече създадения масив, ако n <= фактическия размер на вече създадения масив.

Ако n > фактическия размер на вече създадения масив, прекратяваме изпълнението на програмата или продължаваме да четем въведено число, докато числото не удовлетвори нашите изисквания, тоест да е по-малко или равно от размера на създадения масив.

<b>За целта ще си направим функции за запълване и отпечатване на масив, които можем да ползваме, за да тестваме всяка една от задачите ни.</b>

## Task 0

### След въвеждане на цяло число n, да се инициализира масив от n на брой цели числа, като потребителят въвежда n на брой числа. След това да се обходи масива и да се изведат в конзолата всички числа. След това отново да се направи обхождане на масива и да се сметне средното аритметично на числата. (Да се направи и с масив от реални числа).

**Примерен изход при вход 3 2 2 2:** [2,2,2] 2

**Примерен изход при вход 4 3 10 10 3:** [4,3,10,10,3] 6.5

**Примерен изход при вход 5 0 0 0 0 0:** [0,0,0,0,0] 0

## Task 1 - Reverse

### Въведете масив от n елемента, отпечатайте елементите му наобратно!

**Примерен изход при вход 4 5 6 3:** 3 6 5 4

**Примерен изход при вход 1:** 1

## Task 2

### Да се напише функция, която приема масив и връща дали е палиндром.

Вход: [1 2 3 2 1]

Изход: true

## Task 3 - Min, Max, Second Max, Second Min

### Въведете масив от n елемента. Да се изведат в конзолата най - големия срещан елемент в масива и най - малкия. Да се изведат също втория по големина елемент и втория най - малък елемент.

**Примерен изход при вход 1 2 3 4 5:** Min 1, Max 5, Second Min 2, Second Max 4

**Примерен изход при вход 45 34 12 37 5:** Min 5, Max 45, Second Min 2, Second Max 4

## Task 4

### Да се напише функция, която приема масив и връща най-малкото общо кратно на числата в масива.

Вход: [9 18 6 12]

Изход: 36

## Task 5 - Duplicates

### Въведете масив от n елемента и цяло положително число. Да се изведе на конзолата колко пъти го има това число в масива. Също да се изведе на кои позиции сме го срещнали при обхождане.

**Примерен изход при вход 1 3 3 3 5 3:** 3 Positions are : 1 2 3

**Примерен изход при вход 1 2 3 4 5 50:** 0 Number isn't in this array

## Task 6

### Да се напише функция, която приема масив и връща най-големият общ делител на числата в масива.

Вход: [9 18 6 12]

Изход: 3

## Task 7 - Огледален масив

### Въведете масив от n елемента и цяло положително число. Да се провери дали един масив е огледален спрямо средата си.

**Примерен изход при вход 1 2 3 2 1:** YES

**Примерен изход при вход 1 0 0 0 0 1:** YES

**Примерен изход при вход 1 45 33 1:** NO

## Task 8

### Да се напише функция, която приема масив и връща дали е конкатенация на два масива, които са палиндроми.

Вход: [1 2 3 2 1 4 5 5 4], Изход: true

Вход: [1 2 3 4 5], Изход: false

Вход: [1 2 3 2 1], Изход: true

## Task 9 - Трайчо и интересните числа

Трайчо се натъкнал на списък от числа. Сега той се чуди колко от тях са му интересни. Трайчо смята едно число за интересно ако цифрите му са в ненамаляващ ред. Напишете програма, която по даден списък от неотрицателни числа проверява дали те са интересни. **Първо прочетете всички числа и после изведете отговорът за всяко.**

**Вход:** На първия ред ще има едно число N <= 1000 - броя числа от списъка на Трайчо. Следват N реда с по едно число - числата от списъка на Трайчо.

**Изход:** Трябва да се изведат N реда, на всеки от които има YES или NO: всеки ред показва дали съответното число от списъка е интересно.

**Пример:**

Вход:

    5
    123
    1111
    15678
    341
    0

Изход:

    YES
    YES
    YES
    NO
    YES

## Task 10

### Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се отпечатат броя на инверсиите в масива.

Инверсия ще наричаме двойка индекси (i,j), където i < j и arr[i] > arr[j]

Вход: 6 5 4 3 2 10 Изход: 15 //в масива [5 4 3 2 1 0] има 15 инверсии.

Вход: 5 10 11 12 13 14 15, Изход: 0

## Task 11

### От даден масив от сортирани последнователни числа са премахнати някои числа. Напишете фунцкия, която приема такъв масив и връща най-малкото премахнато число.

Решението ви трябва да работи с логартмична сложност ( а не с линейно минаване през масива).

Вход: [5 6 7 9 10 12 13]

Изход: 8 //премахнатите числа са 8 и 11.

Вход: [10 12 13 14 16]

Изход: 11 //премахнатите числа са 11 и 16.

Модифицирайте функцията, за да отпечатване и най-голямото премахнато число
