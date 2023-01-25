#include <iostream>

class Point{
    int x, y;
public:
Point() : Point(0,0) {}

Point(const Point &other) : Point(other.x, other.y){}

Point(int x, int y){
    this->x=x;
    this->y=y;
}

Point &operator=(const Point &other){
    this->x=other.x;
    this->y=other.y;
    return *this;
}

Point operator+(int val){
    return Point(this->x+val, this->y+val);
}
Point operator+(const Point &other){
    return Point(this->x+other.x, this->y+other.y);
}
void print(){
    std::cout<<this->x<<" "<<this->y<<"\n\n";
}
int getX() const{
    return this->x;
}
int getY() const{
    return this->y;
}
};

std::ostream &operator<<(std::ostream &out, const Point &point){
    out << point.getX()<<" "<<point.getY();
    return out;

}

template <typename type>
class Array {
    type* arr;
    int size, cap;
public:
    Array() {}

    int getSize(){
        return this->size;
    }

    Array(const Array &other) : Array(other.arr, other.size){}

    Array(const type* arr, int size){
        this->cap=size * 2;
        this->arr = new type[this->cap];
        this->size=size;
        for(int i=0; i<size; i++){
            this->arr[i]=arr[i];
        }
    }

    
    type &operator[](int index){
        return this->arr[index];
    }

    void print(){
        for(int i=0; i<this->size; i++){
            std::cout<<this->arr[i];
            if(i !=size-1){
                std::cout<<" ";
            }
        }
    }

    ~Array(){
        delete [] this->arr;
    }
    
};
 template <typename T>
    std::ostream &operator<<(std::ostream &out, Array<T> array){
        for(int i=0; i<array.getSize(); i++){
            out<<array[i];
            out<<" ";
        }
    }

template <typename T>
void print_any(const T& val){
    std::cout<<val<<"\n";
}

int main(){
    Point points[3] {Point(1,2), Point(3, 5), Point(9, 29)};

    int a[5]={1,2,3,4,5};

    Array<Point> template_array(points, 3);

    template_array.print();
}