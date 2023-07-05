#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x, y;
public:
    bidangDatar() {
        x = 0;
        y = 0;
    }
    virtual void input (){}
    virtual float Luas(int a) { return 0; }
    virtual float keliling(int a) { return 0; }
    virtual void cekUkuran() { return; }
    void setX(int a) {
        this->x = a;
    }
    int getx() {
        return x;
    }
    void setY(int b) {
        this->y = b;
    }
    int getY() {
        return y;
    }

};
class Lingkaran :public bidangDatar {
public:
    void input() {
        int x, y;
        cout << "masukan panjang" << endl;
        cin >> x;
        cout << "masukan lebar" << endl;
        cin >> y;
    }
    float LuasLingkaran(int x, int y){
        int x = 113.04;
        int y = 37.68;
        cout << "Luas Lingkaran" << endl;
        cin >> x;
        cout << "Keliling Lingkaran" << endl;
        cin >> y;
        cout << "ukuran Lingkaran adalah" << endl;
        return 6 * x * y;  
    }

};
class persegiPanjang :public bidangDatar {
public:
    void input 
    
};
int main()
{
    std::cout << "Hello World!\n";
}


