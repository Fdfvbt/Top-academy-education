#include <iostream>
#include <list>

template <typename T>
class List {
    struct node{
        T val;
        node *next;
    };

    node *head;
    int size;

public:
    List(){}
    List(const List &other){}

    List(int size, T val){
        this->size=0;
        int tmp=size;
        while(tmp!=0){
            add_end(val);
            --tmp;
        }
    }

    void print_list(){
        for(node *i=head; i!=nullptr; i=i->next){
            std::cout << i->val << " ";
        }
        std::cout<<"\n";
    }

    void add_end(const T &val){
        if(head == nullptr){
            head = new node {val, nullptr};

        }else{
            node *i=head;
            while(i->next!=nullptr){
                i=i->next;
            }
            i->next=new node{val, nullptr};
        }
        this->size+=1;
    }
    void add_begin(const T &val, T my_list){
        if(head == nullptr){
            head = new node {val, nullptr};
        }else{
            
            

        }
    }
    void add_index(int i, const T &val){
        if(head == nullptr){
        head = new node {val, nullptr};
        }else{
            int count = 0;
            node *j=head;
            while(count != i-1){
                j=j->next;
                count++;
            }
            // head->(j)next->next->null
            node *n_node = new node{val, nullptr;
            // n_node
            n_node->next = j->next-;
            // n_node->
            j->next= n_node;
        }
        this->size+=1;
    }
};

void print_list(const std::list<int> &list){

    std::cout<<"Size="<<list.size()<<"\n";

    for(std::list<int>::const_iterator i=list.begin();
    i!=list.end();
    ++i){
        std::cout<<*i<<" ";
    }
    std::cout<<"\n";
}

int main(){
    //std::list<int> test_list(3,6);
    //print_list(test_list);

    List<int>my_list(4, 6);
    my_list.print_list();
    my_list.add_end(5);
    my_list.print_list();
    my_list.add_index(2, 3);
    my_list.print_list();
}