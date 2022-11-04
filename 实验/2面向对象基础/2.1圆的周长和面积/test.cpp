/*按照面向对象的思想计算圆的周长和面积。
问题分析：在面向对象程序中，所有的一切都是对象。
要计算圆的周长和面积，用户只需向某个圆对象进行提问，发送请求相应服务的消息即可。
对于圆来说，要能够提供周长和面积，则必须包含有半径信息。
因此类Circle中应该包含成员数据radius（表示半径），
成员函数SetRadius（用来设置半径），
成员函数Circumference（用来计算周长），
成员函数Area（用来计算面积）。
注：只输出整数部分（如：3.55输出为3）*/

#include <cmath>
#include<iostream>
using namespace std;
const double PI = 3.14159;
// 定义一个Circle类
class Circle
{
    public:
    void SetRadius(double NewRadius);
    double Circumference();
    double Area();

    private:
    double radius;

};

// 类的实现
void Circle::SetRadius(double NewRadius){
    radius = NewRadius;
}

double Circle::Circumference(){
    return PI*2*radius;
}

double Circle::Area(){
    return PI*pow(radius,2);
}

// 使用Circle对象获取周长和面积的方法是调用对象的成员函数。
int main ()
{
    Circle circle;
    circle.SetRadius(3.6);
    cout<<floor(circle.Circumference())<<endl;
    cout<<floor(circle.Area())<<endl;
    return 0;
}