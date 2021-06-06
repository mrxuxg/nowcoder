/*
    题目：
        请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。
        例如，字符串"+100","5e2","-123","3.1416"和"-1E-16"都表示数值。 
        但是"12e","1a3.14","1.2.3","+-5"和"12e+4.3"都不是。
    思路：
        本题使用有限状态自动机。根据字符类型和合法数值的特点，先定义状态，
        再画出状态转移图，最后编写代码即可。
        字符类型：
            - 空格「 」
            - 数字「0-9」
            - 正负号「+—」
            - 小数点「.」
            - 幂符号「eE」
        状态定义：
            按照字符串从左到右的顺序，定义以下 9 种状态：
            开始的空格
            幂符号前的正负号
            小数点前的数字
            小数点、小数点后的数字
            当小数点前为空格时，小数点、小数点后的数字
            幂符号
            幂符号后的正负号
            幂符号后的数字
            结尾的空格
*/s