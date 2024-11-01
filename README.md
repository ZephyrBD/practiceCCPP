# C和CPP的练习仓库
**Powered by ZephyrBD**  
写程序中遇到一些有意思的练习题，我会补充一下，然后提交到这个仓库  
所以很杂，什么程序都有  
## 声明
本人写CPP程序的时候默认会写如下代码  

```
#include "bits/stdc++.h" //引用非标准C++库
using namespace std;
using ll = long long; //用ll指代long long 
const int N = ;//定义一个常数用来确定数组

int main()
{
        //用于C++中优化输入输出速度
        //关闭C++标准库中的iostream（即cin、cout等）
        //和C标准库中的stdio（即scanf、printf等）之间的同步
	ios::sync_with_stdio(0);
        //解除cin和cout之间的绑定
	cin.tie(0),cout.tie(0);
	
	return 0;
}
```

## 有意思的小程序
1. 矩阵乘法计算器
2. Unix时间戳转换器(有BUG)
3. 随机取数并排列(输入一个数字表示要取多少个(1 <= x <= 100))
4. 一维前缀和和Kadane算法(P1115 最大子段和)
5. XOGame(Based on Qt)
6. 初见结构体

## Hydro训练
### 前缀和与差分
1. prc30.[深进1.例1]求区间和
2. prc31. #P2004. 领地选择
3. prc32. #P3397. 地毯
4. prc33. #P8772. [蓝桥杯 2022 省 A] 求和
5. prc34. #P6625. [省选联考 2020 B 卷] 卡牌游戏
6. prc35. #P5638. 【CSGRound2】光骓者的荣耀
7. prc36. #P6568. [NOI Online #3 提高组] 水壶
8. prc37. #P3078. [USACO13MAR] Poker Hands S
9. prc38. #P1719. 最大加权矩形
10. prc39. #P9094. [PA2020] Mieszanie kolorów
11. prc40. #P1969. [NOIP2013 提高组] 积木大赛
12. prc41. #P2280. [HNOI2003] 激光炸弹
13. prc42. #P2367. 语文成绩
14. prc43. #P1672. [USACO05FEB] Feed Accounting S

## PTA训练
1. 7-1 计算阶乘和
2. 7-3 输出整数各位数字
3. 7-5 1000以内所有各位数字之和为n的正整数
4. 7-4 水仙花数
5. 7-6 找完数
6. 7-7 求n以内最大的k个素数以及它们的和
7. 7-8 验证“哥德巴赫猜想”
8. 7-9 梅森数
9. 7-10 打印沙漏

**注意：CPP的程序我编译的exe版本脱离IDE运行时遇到了**  
**“由于找不到libstdc++ 6.dll 无法继续执行代码”的报错**  
**所以这里不提供编译好的版本**  
## 欢迎各位初学者来看看
