# Tasks - Week 13

## Task 1
### Да се напише програма, която работи с някакъв масив от цели числа, неговия размер и капацитет. В началото нека това да е int* arr = nullptr, int size = 0, int capacity = 0. За този масив да се направи меню от команди. Командите са следните: 

### **0 - end.**
#### Приключване на програмата и принтиране на масива.

### **1 - create.** 
#### Потребителя е попитан за цяло число и след въвеждането му то служи за инициализирането на нашия масив. Ако масивът вече е инициализиран да се зачисти и да негово място дойде празен масив с новия капацитет.

### **2 - push back.** 
#### Потребителя е попитан за цяло число и след въвеждането му то да се залепи за края на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!  

### **3 - push front.** 
#### Потребителя е попитан за цяло число и след въвеждането му то да се залепи за началото на масива. Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!  

### **4 - copy.** 
#### Потребителят трябва да въведе нов масив и нашия масив да стане копие на въведения масив.  

### **5 - pop_back.** 
#### Изтрива се последния елемент на масива.  

### **6 - pop_front.** 
#### Изтрива се първия елемент на масива.

### За всяка команда да се напише функция!

### Бонус или за домашна -> ако функциите ви връщат int* направете ги изцяло void като свойството им е да променят подадения масив както задача очаква.

## Task 2 Да се направи задача 1, но за символнен низ (strcat, strcpy са позволени)

## Task 3 Заделете динамично и след това освободете памет за матрица MxN

## Task 4 Battleships

- Инициализирайте динамична матрица от символи (char), която ще репрезентира полето за игра
- Маркирайте разделителна ивица от горния край на матрицата до долния с | (нека ивицата да разделя матрицата на две равни части)
- Лявата част е полето на Player 1, дясната на Player 2. Нека Player 1 е винаги пръв.
- Маркирайте корабите със "S" символ, а водата в "0" символ.
- Нека два играча се редуват като въвеждат ред и колона след, което се изстрелва бомба. 
Ако се оцели кораб нека се изпише "You have sinked a ship!" и символът "S" да бъде заменен с "X".
Ако се оцели вода нека се изпише "You missed!", и символът "0" да бъде заменен с "X".

След потапяне на всички кораби на противниковия отбор да се изпише "Player 1 wins the game!" или "Player 2 wins the game!" 
в зависимост от реда на играта

Правила: 
- Повторно изтрелване на едно и също място не е позволено! (и не е практично).
- Излизане от рамките на матрицата е тотално забранено.
- Всеки играч има право да стреля само по противноковото поле.