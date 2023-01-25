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
Point operator-(int val){
    return Point(this->x-val, this->y-val);
}
Point operator-(const Point &other){
    return Point(this->x-other.x, this->y-other.y);
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

template <typename T>
class Array {
    T* arr;
    int size, cap;
public:
    Array() {}

    int getSize(){
        return this->size;
    }

    Array(const Array &other) : Array(other.arr, other.size){}

    Array(const T* arr, int size){
        this->cap=size * 2;
        this->arr = new T[this->cap];
        this->size=size;
        for(int i=0; i<size; i++){
            this->arr[i]=arr[i];
        }
    }

    
    T &operator[](int index){
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

    
    void add_back(T val){
        arr[size]=val;
        this->size+=1;
    }

    void delete_index(int index){
        if(index>this->size||index<0){
         std::cout<<"error! invalid number\n";
    }else{
        for(int i=index + 1; i<this->size; i++){
            this->arr[i-1]=this->arr[i];
            this->size-=1;
        }
    }
    }
    void add_index(T val, int index){
        if(index>this->size||index<0){
         std::cout<<"error! invalid number\n";
    }else{
        size+=1;
            for(int i=size-1; i>index+1; i--){
                arr[i]=arr[i+1];
                if(i==index+1){
                    arr[i]=val;
                }
            }
        this->size+=1;
    }
    }


    void plus_all(T val){
        for(int i=0; i<this->size; i++){
            this->arr[i]=this->arr[i]+val;
        }
    }

    void minus_all(T val){
        for(int i=0; i<this->size; i++){
            this->arr[i]=this->arr[i]-val;
        }
    }

    void add_back(T* arr, int size){
        if(this->size+size>cap){
            T* arr=new T[size*2];
            for(int i=this->size; i<size; i++){
                for(int j=0; j<size; j++){
                      this->arr[i]=arr[j];
                }
            }
            delete [] this->arr;
            this->arr = arr;
        }else{
            for(int i=this->size; i<size; i++){
                for(int j=0; j<size; j++){
                      this->arr[i]=arr[j];
                }
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
        return out;
    }

template <typename T>
void print_any(const T& val){
    std::cout<<val<<"\n";
}

int main(){
    Point points[3] {Point(1,2), Point(3, 6), Point(8, 56)};
    int size=rand()%10;
    int* arr=new int[size];

    std::cout<<"size: "<<size<<"\n\n";

    Array<Point> array_points(points, 3);
    Array<int> array_int(arr, 5);
    std::cout << "init points" << array_points << "\n";
    std::cout << "init int"<< array_int << "\n\n";

    array_int.add_back(7);
    array_points.add_back(Point(7, 1));
    std::cout << "add_back(Point(7, 1))" << array_points << "\n";
    std::cout << "add_back(7)" << array_int << "\n\n";

    array_int.delete_index(2);
    array_points.delete_index(2);
    std::cout << "delete_index(2)" << array_points << "\n";
    std::cout << "delete_index(2)" << array_int << "\n\n";

    array_int.add_index(2, 1);
    array_points.add_index(Point(2, 1), 1);
    std::cout << "add_index(Point(2, 1), 1)" << array_points << "\n";
    std::cout << "add_index(2, 1)" << array_int << "\n\n";

    array_points.plus_all(Point(1, 1));
    array_int.plus_all(1);
    std::cout << "plus_all(Point(1,1))" << array_points << "\n";
    std::cout << "plus_all(1)" << array_int << "\n\n";

    array_points.minus_all(Point(2, 0));
    array_int.minus_all(2);
    std::cout << "minus_all(Point(2,0))" << array_points << "\n";
    std::cout << "minus_all(2)"  << array_int << "\n\n";


    array_points.add_back(points, size);
    array_int.add_back(arr, size);
    std::cout << "add_back(Point(arr,size))" << array_points << "\n";
    std::cout << "add_back(arr, size)"  << array_int << "\n\n";

}