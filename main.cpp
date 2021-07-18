#include <iostream>
#include <math.h>
#include <cstdint>
using namespace std;

//Task 1----------------------------
class Power
{
private:
    int a;
    int b;
public:
    void setPower(int c, int d) {
    a = c;
    b = d;
    }

    void calculate() {
    cout << pow(a, b);
    }

    void cinPower() {
    int c;
    int d;
    cin >> c >> d;
    a = c;
    b = d;
    }
};

//Task 2---------------------------
class RGBA
{
private:
    uint8_t m_red = 0;
    uint8_t m_green = 0;
    uint8_t m_blue = 0;
    uint8_t m_alpha = 255;
public:
    RGBA()
    {
    }
    RGBA (uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
    : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {

    }
    void print()
    {
        cout << (int)m_red << " " << (int)m_green << " " << (int)m_blue << " " << (int)m_alpha;

    }
};


//Task 3---------------------------
class Stack
{
private:
    int array[10];
    int length = 0;
public:

    void reset() {
    for(int i = 0; i < length; i++){
        array[i] = 0;
    }
        length = 0;
    }

    void print() {
      cout << "(";
        for(int i = 0; i < length; i++){
            cout << array[i] << " ";
        }
        cout << ")" << endl;
    }

    bool push(int n){
        if(length < 10){
            array[length] = n;
            length++;
            return true;
        }else
        return false;
    }

    void pop(){
        if(length == 0){
            cout << "Stack is empty" << endl;
        }else{
            array[length] = 0;
            length--;
        }
    }
};


int main()
{
//Task 1.1-------------------------
    cout << "Task 1" << endl;
    cout << "Input two numbers:";
  Power intPower;
  intPower.cinPower();
  intPower.calculate();
  cout << '\n';

// Task 2.2------------------------

  cout << "Task 2" << endl;
  RGBA rgba;
  rgba.print();
  cout << endl;
  RGBA my_rgba(125,125, 125, 125);
  my_rgba.print();
  cout << endl;

// Task 3.2------------------------

  cout << "Task 3" << endl;
 Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();
    return 0;
}
