## About

学习 CAPE-OPEN 开发单元模块示例代码（2）（成功存档不带UI版）。

## BlockTest01

基于 CAPE-OPENv1.1 开发的一个测试闪蒸模块

环境：VS2022、Win11、64 位 debug 模式
MFC环境：AspenPlusV11

测试条件：

组分：水
进口温度：25C
进口压力：1.1bar

测试结果：无报错无警告

COFE 无法运行，猜测是获取流股对象时使用了智能指针而非热力学对象，还在完善中

## 20241117更新

我编写这个模块的时候用的是 CAPE-OPEN 的类库进行添加实现接口的，然后今天发现在另一台电脑上并不能复现，

所以如果你要参考这个模块，请直接参考代码结构，如果只复制代码是不行的，因为 CAPE-OPEN 的相关接口并没有导入进去。
