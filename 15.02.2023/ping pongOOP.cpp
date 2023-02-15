#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

bool kbhit() {
    static bool inited = false;
    int left;

    // заходит при первом вызове
    if (!inited) {
        termios t;
        tcgetattr(0, &t);
        t.c_lflag &= ~ICANON;
        tcsetattr(0, TCSANOW, &t);
        setbuf(stdin, NULL);
        inited = true;
    }

    // в left записывается true если была нажата любая кнопка
    ioctl(0, FIONREAD, &left);

    return left;
}

class Rocket {
  private:
    int x, y;

  public:
    Rocket() : Rocket(0, 0) {}
    Rocket(const Rocket &other)
        : Rocket(other.x, other.y)  {}

    Rocket(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() const {return this->x;}
    int getY() const {return this->y;}

    bool is_player(int x, int y) const {
        if (x == this->x) {
            if (y == this->y ||
                y == this->y + 1 ||
                y == this->y - 1) {
                return true;
            }
        }
        return false;
    }

    void Up() {--y;} // Вверх
    void Down() {++y;} // Вниз

};

class Ball {
  private:
    int x, y;
    int dir_x;
    int dir_y;

  public:
    Ball() : Ball(0, 0) {}
    Ball(const Ball &other)
        : Ball(other.x, other.y)  {}

    Ball(int x, int y) {
        this->x = x;
        this->y = y;
        this->dir_x = -1;
        this->dir_y=1;
    }

    void move(const Rocket &pl_1, const Rocket &pl_2, int w, int h) {
        x += dir_x;
        y+=dir_y;

        if (pl_1.is_player(x+1, y)) {
            dir_x = -dir_x;
            dir_y = -dir_y;
        } else if (pl_2.is_player(x-1, y)) {
            dir_x = -dir_x;
            dir_y = -dir_y;
        } else if (y < 1 || y > h-2){
            dir_y=-dir_y;
        }else if (x <= 0 || x >= w) {
            x = w / 2;
            y = h / 2;
        }
    }

    int getX() const {return this->x;}
    int getY() const {return this->y;}

};

class Pole {
  private:
    const int h, w; // h - высота w - длина
    Ball ball;
    Rocket pl_1, pl_2;
    bool _end = false;


    public:
    Pole() : Pole(11, 41) {}
    Pole(const Pole &other): Pole(other.w, other.h) {
    }
    Pole(int h, int w) : w(w), h(h),
        ball(w/2, h/2), pl_1(2, h/2), pl_2(w-2, h/2) {}



    bool end() const {return _end;}

    void print() {
        for (int i = 0; i <= h; ++i) {

            for (int j = 0; j <= w; ++j) {
                if (i == 0 || i == h) {
                    std::cout << "*";
                } else if (j == 0 || j == w) {
                    std::cout << "*";
                } else if (pl_1.is_player(j, i)) {
                    std::cout << "|";
                } else if (pl_2.is_player(j, i)) {
                    std::cout << "|";
                } else if (i == ball.getY() && j == ball.getX()) {
                    std::cout << "@";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }
    }
    void input() {

        char in;
        in = getchar();
        if (in == 'a') {
            if (pl_1.getY() > 2)
                pl_1.Up();
        } else if (in == 'z') {
            if (pl_1.getY() < h - 2)
                pl_1.Down();
        } else if (in == 'q') {
            _end = true;
        }

    }

    void work() {
        if (pl_2.getY() < ball.getY() && pl_2.getY() < h - 2) {
            pl_2.Down();
        }
        if (pl_2.getY() > ball.getY() && pl_2.getY() > 2) {
            pl_2.Up();
        }

        ball.move(pl_1, pl_2, w, h);
    }

    void clear() {
        system("clear");
    }

};


int main() {
    Pole pole;

    while (!pole.end()) {
        pole.print();

        usleep(150000);

        if (kbhit() != 0) {
            pole.input();
        }

        pole.work();

        pole.clear();
    }

    return 0;
}
